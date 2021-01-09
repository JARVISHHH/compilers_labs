%{
    #include "common.h"
    #define YYSTYPE Node *  
    Node* root;
    extern tree parse_tree;
    extern int lineno;
    extern symbol_table symtbl;

    extern  Node* cur;
    int yylex();
    int yyerror( char const * );

    int param[MAX_PARAM] = {-1};
    int size = 0;
    int position = 0;
    int STACK_SIZE = 0;
    int for_seq = 0;
%}

%token T_CHAR T_INT T_STRING T_BOOL T_VOID

%token EQ_ASSIGN PLUS_ASSIGN SUB_ASSIGN MULT_ASSIGN DIV_ASSIGN

%token WHILE FOR IF ELSE RETURN PRINTF SCANF TRUE FALSE STRUCT the_CONST

%token LPAREN RPAREN LBRACE RBRACE COMMA POS LBRACKET RBRACKET

%token MOD
%token PLUS MINUS
%token MULT DIV
%token AND OR 
%token NOT 
%token DMINUS DPLUS
%token RELOP
%token DOT ARROW

%token IDENTIFIER INTEGER CHAR BOOL STRING

%token SEMICOLON

%nonassoc IFX
%nonassoc ELSE

%nonassoc AFTER_COMMA

%left COMMA
%nonassoc BEFORE_COMMA

%right PLUS_ASSIGN SUB_ASSIGN MULT_ASSIGN DIV_ASSIGN EQ_ASSIGN
%left OR
%left AND
%left RELOP
%left PLUS MINUS
%left MOD
%left MULT DIV

%right NOT
%right POS
%right UDMINUS UDPLUS
%right UMINUS
%right POINTER
%left DMINUS DPLUS
%nonassoc FXL
%nonassoc LPAREN LBRACKET RPAREN
%right ARROW DOT

%nonassoc BIGGEST

%%

program
: statements 
{
    // cout << "开始生成树根" << endl;
    NodeAttr *NA = new NodeAttr;
    root = parse_tree.NewRoot(STMT_NODE, COMP_STMT, *NA, Notype, $1);
    // cout << "树根生成完毕" << endl;
}
;

statements
:  statement {$$=$1;}
|  statements statement {$$=$1; $$->addSibling($2);}
;

statement
: SEMICOLON  
{
    $$ = new Node;
    $$->lineno = lineno;
    $$->kind = STMT_NODE;
    $$->kind_kind = EMPTY_STMT;
    NodeAttr *NA = new NodeAttr;
    $$->attr = *NA;
    $$->seq = parse_tree.node_seq++;
}
| matched_stmt %prec IFX{$$ = $1;}
| unmatched_stmt {$$ = $1;}
;

matched_stmt
: function {$$ = $1;}
| while_stmt {$$ = $1;}
| for_stmt {$$ = $1;}
| RETURN_stmt SEMICOLON {$$ = $1;}
| printf_stmt SEMICOLON {$$ = $1;}
| scanf_stmt SEMICOLON {$$ = $1;}
| expr_stmt SEMICOLON {$$ = $1;}
| declaration SEMICOLON {$$ = $1;}
| matched_if_stmt {$$ = $1;}
;

unmatched_stmt
: unmatched_if_stmt {$$ = $1;}
;

function
: funtion_head LBRACE statements RBRACE {
    Node* node = $$;
    Node* child = new Node($3->lineno, STMT_NODE, COMP_STMT, *(new NodeAttr), Notype, parse_tree.node_seq++);
    child->addChild($3);
    node->addChild(child);
    $$ = node;
    Node* p = $1->children[2];
    for(int i = 0; i < size && p; i++)
    {
        symtbl.match(p->children[i]->children[1]->attr.name);
    }
    $$->temp_stack_size = STACK_SIZE;
    STACK_SIZE = 0;
}
;

funtion_head
: T IDENTIFIER LPAREN params RPAREN {
    $2->type = $1->type;
    $2->attr.symtbl_seq = symtbl.insert($2->attr.name, FUNC);
    symtbl.table[$2->attr.name][$2->attr.symtbl_seq].param_size = size;
    symtbl.table[$2->attr.name][$2->attr.symtbl_seq].return_type = cur->type;
    for(int i = 0; i < size; i++)
    {
        symtbl.table[$2->attr.name][$2->attr.symtbl_seq].param_type[i] = param[i];
    }
    position = 0;

    Node* node = new Node($1->lineno, DECL_NODE, FUNC_DECL, *(new NodeAttr), Notype, parse_tree.node_seq++);
    node->addChild($1);
    node->addChild($2);
    Node* child3 = new Node($4->lineno, LIST_NODE, PARAM_LIST, *(new NodeAttr), Notype, parse_tree.node_seq++);
    child3->addChild($4);
    node->addChild(child3);
    $$ = node;
}
| T IDENTIFIER LPAREN RPAREN {
    $2->type = $1->type;
    $2->attr.symtbl_seq = symtbl.insert($2->attr.name, FUNC);
    symtbl.table[$2->attr.name][$2->attr.symtbl_seq].param_size = 0;
    symtbl.table[$2->attr.name][$2->attr.symtbl_seq].return_type = cur->type;
    size = 0;
    position = 0;

    Node* node = new Node($1->lineno, DECL_NODE, FUNC_DECL, *(new NodeAttr), Notype, parse_tree.node_seq++);
    node->addChild($1);
    node->addChild($2);
    $$ = node;
}

params
: T IDENTIFIER {
    parse_tree.max_temp++;
    param[size] = cur->type;
    size++;
    Node* node = new Node($1->lineno, DECL_NODE, VAR_DECL, *(new NodeAttr), $1->type, parse_tree.node_seq++);
    node->addChild($1);
    node->addChild($2);
    $2->attr.symtbl_seq = symtbl.insert($2->attr.name);
    symtbl.set_type($2->attr.name, $2->attr.symtbl_seq, cur->type);
    $2->type = cur->type;
    position += 4;
    symtbl.table[$2->attr.name][$2->attr.symtbl_seq].position = position;
    $$ = node; 
}
| params COMMA params {
    $$ = $1;
    $$->addSibling($3);
}
;

ARRAY
: IDENTIFIER LBRACKET expr RBRACKET {
    if(symtbl.lookup($1->attr.name) != -1)
    {
        $1->attr.symtbl_seq = symtbl.lookup($1->attr.name);
        $1->type = symtbl.get_type($1->attr.name, $1->attr.symtbl_seq);
    }

    $$ = $1;
    $1->kind_kind = ARRAY_EXPR;
    $$->addChild($2);
    $2->addChild($3);

}
| ARRAY LBRACKET expr RBRACKET {
    $$ = $1;
    $$->addChild($2);
    $2->addChild($3);
}
;


ASSIGN_stmt
: expr PLUS_ASSIGN expr {
    $$ = $2;
    $$->addChild($1);
    $$->addChild($3);
}
| expr SUB_ASSIGN expr {
    $$ = $2;
    $$->addChild($1);
    $$->addChild($3);
}
| expr MULT_ASSIGN expr {
    $$ = $2;
    $$->addChild($1);
    $$->addChild($3);
}
| expr DIV_ASSIGN expr {
    $$ = $2;
    $$->addChild($1);
    $$->addChild($3);
}
| expr EQ_ASSIGN expr {
    $$ = $2;
    $$->addChild($1);
    $$->addChild($3);
}
| expr PLUS_ASSIGN ASSIGN_stmt {
    $$ = $2;
    $$->addChild($1);
    $$->addChild($3);
    parse_tree.max_temp++;
    STACK_SIZE += 4;
}
| expr SUB_ASSIGN ASSIGN_stmt {
    $$ = $2;
    $$->addChild($1);
    $$->addChild($3);
    parse_tree.max_temp++;
    STACK_SIZE += 4;
}
| expr MULT_ASSIGN ASSIGN_stmt {
    $$ = $2;
    $$->addChild($1);
    $$->addChild($3);
    parse_tree.max_temp++;
    STACK_SIZE += 4;
}
| expr DIV_ASSIGN ASSIGN_stmt {
    $$ = $2;
    $$->addChild($1);
    $$->addChild($3);
    parse_tree.max_temp++;
    STACK_SIZE += 4;
}
| expr EQ_ASSIGN ASSIGN_stmt {
    $$ = $2;
    $$->addChild($1);
    $$->addChild($3);
    parse_tree.max_temp++;
    STACK_SIZE += 4;
}
;

RETURN_stmt
: RETURN expr {
    $$ = $1;
    $$->addChild($2);
}
;

declaration
: T declare_id_list { 
    Node* child2 = new Node($2->lineno, LIST_NODE, DECLARE_LIST, *(new NodeAttr), Notype, parse_tree.node_seq++);
    child2->addChild($2);
    Node* node = new Node($1->lineno, DECL_NODE, VAR_DECL, *(new NodeAttr), $1->type, parse_tree.node_seq++);
    node->addChild($1);
    node->addChild(child2);
    $$ = node; 
}
| the_CONST T must_init_declare_id_list {
    NodeAttr* NA1 = new NodeAttr;
    NodeAttr* NA2 = new NodeAttr;
    Node* child3 = new Node($3->lineno, LIST_NODE, DECLARE_LIST, *NA1, Notype, parse_tree.node_seq++);
    child3->addChild($3);
    Node* node = new Node($2->lineno, DECL_NODE, CONST_DECL, *NA2, $2->type, parse_tree.node_seq++);
    node->addChild($2);
    node->addChild(child3);
    $$ = node;
}
;

declare_id_list
: ASSIGN_stmt {
    if($1->attr.op != OP_ASSIGN) yyerror("初始化错误");
    $$ = $1;
    $$->kind = EXPR_NODE;
    $$->kind_kind = OP_EXPR;
    $1->children[0]->attr.symtbl_seq = symtbl.insert($1->children[0]->attr.name, VAR_VAR);
    symtbl.set_type($1->children[0]->attr.name, $1->children[0]->attr.symtbl_seq, cur->type);
    $1->children[0]->type = cur->type;
}
| IDENTIFIER {
    $$ = $1;
    $$->attr.symtbl_seq = symtbl.insert($1->attr.name, VAR_VAR);
    symtbl.set_type($1->attr.name, $1->attr.symtbl_seq, cur->type);
    $1->type = cur->type;
}
| MULT IDENTIFIER {
    $$ = $1;
    $1->attr.op = OP_STAR;
    $$->addChild($2);
    $2->attr.symtbl_seq = symtbl.insert($2->attr.name, VAR_VAR);
    symtbl.set_type($2->attr.name, $2->attr.symtbl_seq, cur->type);
    $2->type = cur->type;
    $2->stars = 1;
    symtbl.table[$2->attr.name][$2->attr.symtbl_seq].stars = $2->stars;
}
| ARRAY {
    $$ = $1;
    $$->attr.symtbl_seq = symtbl.insert($1->attr.name, VAR_VAR);
    // cout << "名字为" << $1->attr.name << endl;
    // cout << "号码为" << $$->attr.symtbl_seq << endl;
    symtbl.set_type($1->attr.name, $1->attr.symtbl_seq, cur->type);
    $1->type = cur->type;
    int i = 0;
    for(Node* p = $1->children[0]; p; p = p->sibling, i++)
    {
        // $1->stars += 1;
        $1->numbers *= p->children[0]->attr.vali;
        symtbl.table[$1->attr.name][$$->attr.symtbl_seq].dimension.push_back(p->children[0]->attr.vali);
        symtbl.table[$1->attr.name][$$->attr.symtbl_seq].adds.push_back(1);
        // cout << symtbl.table[$1->attr.name][$$->attr.symtbl_seq].adds[i] << endl;
        for(int j = 0; j < i; j++)
        {
            symtbl.table[$1->attr.name][$$->attr.symtbl_seq].adds[j] *= p->children[0]->attr.vali;
        }
    }
    // symtbl.table[$1->attr.name][$$->attr.symtbl_seq].stars = $1->stars;
    symtbl.table[$1->attr.name][$$->attr.symtbl_seq].numbers = $1->numbers;
}
| declare_id_list COMMA declare_id_list {$$ = $1; $$->addSibling($3);}
;


must_init_declare_id_list
: ASSIGN_stmt {
    $$ = $1;
    $$->kind = EXPR_NODE;
    $$->kind_kind = OP_EXPR;
    $1->children[0]->attr.symtbl_seq = symtbl.insert($1->children[0]->attr.name, CONST_VAR);
    $1->children[0]->type = cur->type;
}
| must_init_declare_id_list COMMA must_init_declare_id_list {
    $$ = $1;
    $$->addSibling($3);
}
;

while_stmt
: WHILE LPAREN expr RPAREN statement {
    $$ = $1;
    $$->addChild($3);
    $$->addChild($5);
}
| WHILE LPAREN expr RPAREN LBRACE statements RBRACE {
    $$ = $1;
    $$->addChild($3);
    NodeAttr* NA = new NodeAttr;
    Node* child2 = new Node($6->lineno, STMT_NODE, COMP_STMT, *NA, Notype, parse_tree.node_seq++);
    child2->addChild($6);
    $$->addChild(child2);
}
;

for_stmt
: FOR LPAREN ASSIGN_stmt SEMICOLON expr SEMICOLON expr_stmt RPAREN statement {
    for_seq++;
    $$ = $1;
    $$->addChild($3);
    $$->addChild($5);
    $$->addChild($7);
    $$->addChild($9);
}
| FOR LPAREN declaration SEMICOLON expr SEMICOLON expr_stmt RPAREN statement {
    for_seq++;
    $$ = $1;
    $$->addChild($3);
    $$->addChild($5);
    $$->addChild($7);
    $$->addChild($9);
    Node* child = $3->children[1]->children[0];
    while(child != nullptr)
    {
        string name;
        if(child->kind_kind == OP_EXPR)
            name = child->children[0]->attr.name;
        else
            name = child->attr.name;
        
        int seq = symtbl.lookup(name);
        symtbl.table[name][seq].special = for_seq;
        symtbl.match(name);
        child = child->sibling;
    }
}
| FOR LPAREN ASSIGN_stmt SEMICOLON expr SEMICOLON expr_stmt RPAREN LBRACE statements RBRACE {
    for_seq++;
    $$ = $1;
    $$->addChild($3);
    $$->addChild($5);
    $$->addChild($7);
    NodeAttr* NA = new NodeAttr;
    Node* child4 = new Node($10->lineno, STMT_NODE, COMP_STMT, *NA, Notype, parse_tree.node_seq++);
    child4->addChild($10);
    $$->addChild(child4);
}
| FOR LPAREN declaration SEMICOLON expr SEMICOLON expr_stmt RPAREN LBRACE statements RBRACE {
    for_seq++;
    $$ = $1;
    $$->addChild($3);
    $$->addChild($5);
    $$->addChild($7);
    NodeAttr* NA = new NodeAttr;
    Node* child4 = new Node($10->lineno, STMT_NODE, COMP_STMT, *NA, Notype, parse_tree.node_seq++);
    child4->addChild($10);
    $$->addChild(child4);
    Node* child = $3->children[1]->children[0];
    while(child != nullptr)
    {
        string name;
        if(child->kind_kind == OP_EXPR)
            name = child->children[0]->attr.name;
        else
            name = child->attr.name;

        int seq = symtbl.lookup(name);
        symtbl.table[name][seq].special = for_seq;
        symtbl.match(name);
        child = child->sibling;
    }
}
| FOR LPAREN SEMICOLON expr SEMICOLON expr_stmt RPAREN statement {
    for_seq++;
    $$ = $1;
    Node* node = new Node($1->lineno, EMPTY_NODE, 0, *(new NodeAttr), Notype, parse_tree.node_seq++);
    $$->addChild(node);
    $$->addChild($4);
    $$->addChild($6);
    $$->addChild($8);
}
| FOR LPAREN SEMICOLON expr SEMICOLON expr_stmt RPAREN LBRACE statements RBRACE {
    for_seq++;
    $$ = $1;
    Node* node = new Node($1->lineno, EMPTY_NODE, 0, *(new NodeAttr), Notype, parse_tree.node_seq++);
    $$->addChild(node);
    $$->addChild($4);
    $$->addChild($6);
    NodeAttr* NA = new NodeAttr;
    Node* child3 = new Node($9->lineno, STMT_NODE, COMP_STMT, *NA, Notype, parse_tree.node_seq++);
    child3->addChild($9);
    $$->addChild(child3);
}
;


matched_if_stmt
: IF LPAREN expr_stmt RPAREN matched_stmt ELSE matched_stmt {
    $$ = $1;
    $$->addChild($3);
    $$->addChild($5);
    $$->addChild($6);
    $6->addChild($7);
}
| IF LPAREN expr_stmt RPAREN LBRACE statements RBRACE ELSE matched_stmt {
    $$ = $1;
    $$->addChild($3);
    NodeAttr* NA = new NodeAttr;
    Node* child2 = new Node($6->lineno, STMT_NODE, COMP_STMT, *NA, Notype, parse_tree.node_seq++);
    child2->addChild($6);
    $$->addChild(child2);
    $$->addChild($8);
    $8->addChild($9);
}
| IF LPAREN expr_stmt RPAREN matched_stmt ELSE LBRACE statements RBRACE {
    $$ = $1;
    $$->addChild($3);
    $$->addChild($5);

    NodeAttr* NA = new NodeAttr;
    Node* child3 = new Node($8->lineno, STMT_NODE, COMP_STMT, *NA, Notype, parse_tree.node_seq++);
    child3->addChild($8);
    $6->addChild(child3);
    $$->addChild($6);
}
| IF LPAREN expr_stmt RPAREN LBRACE statements RBRACE ELSE LBRACE statements RBRACE {
    // cout << "进入了一个完整的ifelse" << endl;
    $$ = $1;
    $$->addChild($3);

    NodeAttr* NA1 = new NodeAttr;
    Node* child2 = new Node($6->lineno, STMT_NODE, COMP_STMT, *NA1, Notype, parse_tree.node_seq++);
    child2->addChild($6);
    $$->addChild(child2);
    
    NodeAttr* NA2 = new NodeAttr;
    Node* child3 = new Node($10->lineno, STMT_NODE, COMP_STMT, *NA2, Notype, parse_tree.node_seq++);
    child3->addChild($10);
    $8->addChild(child3);
    $$->addChild($8);
}
;

unmatched_if_stmt
: IF LPAREN expr_stmt RPAREN matched_stmt ELSE unmatched_stmt {
    $$ = $1;
    $$->addChild($3);
    $$->addChild($5);
    $$->addChild($6);
    $6->addChild($7);
}
| IF LPAREN expr_stmt RPAREN LBRACE statements RBRACE ELSE unmatched_stmt {
    $$ = $1;
    $$->addChild($3);

    NodeAttr* NA = new NodeAttr;
    Node* child2 = new Node($6->lineno, STMT_NODE, COMP_STMT, *NA, Notype, parse_tree.node_seq++);
    child2->addChild($6);
    $$->addChild(child2);
    $$->addChild($8);
    $8->addChild($9);
}
| IF LPAREN expr_stmt RPAREN statement {
    $$ = $1;
    $$->addChild($3);
    $$->addChild($5);
}
| IF LPAREN expr_stmt RPAREN LBRACE statements RBRACE %prec IFX {
    $$ = $1;
    $$->addChild($3);
    NodeAttr* NA = new NodeAttr;
    Node* child2 = new Node($6->lineno, STMT_NODE, COMP_STMT, *NA, Notype, parse_tree.node_seq++);
    child2->addChild($6);
    $$->addChild(child2);
}
;

printf_stmt
: PRINTF LPAREN expr_list RPAREN {
    $$ = $1;
    Node* child1 = new Node($3->lineno, LIST_NODE, PRINT_LIST, *(new NodeAttr), Notype, parse_tree.node_seq++);
    child1->addChild($3);
    $$->addChild(child1);
}
| PRINTF LPAREN STRING RPAREN{
    $$ = $1;
    $$->addChild($3);
    $3->attr.symtbl_seq = symtbl.insert(print_content, $3->attr.valstr);
    symtbl.set_type(print_content, $3->attr.symtbl_seq, String);
}
| PRINTF LPAREN STRING COMMA expr_list RPAREN {
    $$ = $1;
    $3->attr.symtbl_seq = symtbl.insert(print_content, $3->attr.valstr);
    symtbl.set_type(print_content, $3->attr.symtbl_seq, String);
    $$->addChild($3);
    Node* child2 = new Node($5->lineno, LIST_NODE, PRINT_LIST, *(new NodeAttr), Notype, parse_tree.node_seq++);
    child2->addChild($5);
    $$->addChild(child2);
}
;

scanf_stmt
: SCANF LPAREN STRING COMMA expr_list RPAREN {
    $$ = $1;
    $3->attr.symtbl_seq = symtbl.insert(scan_content, $3->attr.valstr);
    symtbl.set_type(scan_content, $3->attr.symtbl_seq, String);
    $$->addChild($3);
    Node* child2 = new Node($5->lineno, LIST_NODE, SCAN_LIST, *(new NodeAttr), Notype, parse_tree.node_seq++);
    for(Node* p = $5; p; p = p->sibling)
    {
        child2->addChild(p->children[0]);
    }
    $$->addChild(child2);
}
;

expr_stmt
: expr {
    $$ = $1; 
    // cout << "生成了表达式语句" << endl;
}
| ASSIGN_stmt {
    $$ = $1;
    parse_tree.max_temp++;
    STACK_SIZE += 4;
}
| expr_stmt COMMA expr_stmt {
    $$ = $2;
    $$->addChild($1);
    $$->addChild($3);
}
;

expr
: expr MOD expr {
    $$ = $2;
    $$->addChild($1);
    $$->addChild($3);
    parse_tree.max_temp++;
    STACK_SIZE += 4;
}
| expr PLUS expr {
    $$ = $2;
    $$->addChild($1);
    $$->addChild($3);
    parse_tree.max_temp++;
    STACK_SIZE += 4;
}
| expr MINUS expr{
    $$ = $2;
    $$->addChild($1);
    $$->addChild($3);
    parse_tree.max_temp++;
    STACK_SIZE += 4;
}
| expr MULT expr{
    $$ = $2;
    $$->addChild($1);
    $$->addChild($3);
    parse_tree.max_temp++;
    STACK_SIZE += 4;
}
| expr DIV expr{
    $$ = $2;
    $$->addChild($1);
    $$->addChild($3);
    parse_tree.max_temp++;
    STACK_SIZE += 4;
}
| expr AND expr{
    $$ = $2;
    $$->addChild($1);
    $$->addChild($3);
    parse_tree.max_temp++;
    STACK_SIZE += 4;
}
| expr OR expr{
    $$ = $2;
    $$->addChild($1);
    $$->addChild($3);
    parse_tree.max_temp++;
    STACK_SIZE += 4;
}
| expr RELOP expr{
    $$ = $2;
    $$->addChild($1);
    $$->addChild($3);
    parse_tree.max_temp++;
    STACK_SIZE += 4;
    // cout << "检测到不等号" << endl;
}
| expr LPAREN RPAREN {
    Node* node = new Node($1->lineno, EXPR_NODE, FUNC_EXPR, *(new NodeAttr), symtbl.table[$1->attr.name][$1->attr.symtbl_seq].return_type, parse_tree.node_seq++);
    node->addChild($1);
    $$ = node;
    parse_tree.max_temp++;
    STACK_SIZE += 4;
}
| expr LPAREN expr_list RPAREN {
    Node* node = new Node($1->lineno, EXPR_NODE, FUNC_EXPR, *(new NodeAttr), symtbl.table[$1->attr.name][$1->attr.symtbl_seq].return_type, parse_tree.node_seq++);
    node->addChild($1);
    Node* child2 = new Node($3->lineno, LIST_NODE, PARAM_LIST, *(new NodeAttr), Notype, parse_tree.node_seq++);
    child2->addChild($3);
    node->addChild(child2);
    $$ = node;
    parse_tree.max_temp++;
    STACK_SIZE += 4;
}
| DPLUS expr %prec UDPLUS {
    $$ = $2; 
    $$->addChild($1); 
}
| expr DPLUS {
    $$ = $2; 
    $$->addChild($1);
}
| DMINUS expr %prec UDMINUS {
    $$ = $2; 
    $$->addChild($1); 
}
| expr DMINUS {
    $$ = $2; 
    $$->addChild($1); 
}
| POS expr {
    $$ = $1;
    $$->addChild($2);
    parse_tree.max_temp++;
    STACK_SIZE += 4;
}
| MULT expr {
    $1->attr.op = OP_STAR;
    $$ = $1;
    $$->addChild($2);
    parse_tree.max_temp++;
    STACK_SIZE += 4;
}
| NOT expr {
    $$ = $1; 
    $$->addChild($2);
    parse_tree.max_temp++;
    STACK_SIZE += 4;
    // cout << "检测到非" << endl;
}
| MINUS expr %prec UMINUS { 
    $$ = $1; 
    $$->addChild($2);
    parse_tree.max_temp++;
    STACK_SIZE += 4;
}
| PLUS expr %prec UMINUS { $$ = $2;}
| LPAREN expr_stmt RPAREN {
    $$ = $2; // $$->addChild($2); 
}
| ARRAY {
    $$ = $1;
    parse_tree.max_temp++;
    STACK_SIZE += 4;
}
| term {$$ = $1;}
;

term
: IDENTIFIER %prec FXL {
    // 查找符号表中是否已经有了这个符号
    if(symtbl.lookup($1->attr.name) != -1)
    {
        // 有了的话就把这个符号的序号给当前节点
        $1->attr.symtbl_seq = symtbl.lookup($1->attr.name);
        $1->type = symtbl.get_type($1->attr.name, $1->attr.symtbl_seq);
    }
    $$ = $1;
}
| CONST {$$ = $1;}
;

CONST
: INTEGER {$$ = $1;}
| CHAR {
    $$ = $1;
}
| STRING %prec AFTER_COMMA {
    $$ = $1;
    $1->attr.symtbl_seq = symtbl.insert(const_content, $1->attr.valstr);
    symtbl.set_type(const_content, $1->attr.symtbl_seq, String);
}
| TRUE {$$ = $1;}
| FALSE {$$ = $1;}
;

expr_list
: expr {$$ = $1;}
| expr_list COMMA expr_list {
    $$ = $1;
    $$->addSibling($3);
}
;

T: T_INT {
    $$ = $1;
    cur = $$;
} 
| T_CHAR {
    $$ = $1;
    cur = $$;
} 
| T_BOOL {
    $$ = $1;
    cur = $$;
} 
| T_VOID {
    $$ = $1;
    cur = $$;
} 
;

%%

int yyerror(char const* message)
{
    cout << message << " at line " << lineno << endl;
    return -1;
}