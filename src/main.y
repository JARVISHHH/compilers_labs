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

    // Node* decl = new Node(0, DECL_NODE, COMP_DECL, *(new NodeAttr), Notype, parse_tree.node_seq++);
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
%nonassoc LPAREN LBRACKET 
%right ARROW DOT

%nonassoc BIGGEST

%%

program
: statements 
{
    NodeAttr *NA = new NodeAttr;
    root = parse_tree.NewRoot(STMT_NODE, COMP_STMT, *NA, Notype, $1);
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
: while_stmt {$$ = $1;}
| for_stmt {$$ = $1;}
| RETURN_stmt SEMICOLON {$$ = $1;}
| declaration SEMICOLON {$$ = $1;}
| expr_stmt SEMICOLON {$$ = $1;}
| matched_if_stmt {$$ = $1;}
;

unmatched_stmt
: unmatched_if_stmt {$$ = $1;}
;

IDENTIFIER_list
: IDENTIFIER {$$ = $1;}
| IDENTIFIER_list COMMA IDENTIFIER_list {
    $$ = $1;
    $$->addSibling($3);
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
;

RETURN_stmt
: RETURN expr {
    $$ = $1;
    $$->addChild($2);
}
;

declaration
: T declare_id_list { 
    // declare and init
    NodeAttr* NA1 = new NodeAttr;
    NodeAttr* NA2 = new NodeAttr;
    Node* child2 = new Node($2->lineno, LIST_NODE, DECLARE_LIST, *NA1, Notype, parse_tree.node_seq++);
    child2->addChild($2);
    Node* node = new Node($1->lineno, DECL_NODE, VAR_DECL, *NA2, $1->type, parse_tree.node_seq++);
    node->addChild($1);
    node->addChild(child2);
    $$ = node; 
    // decl->addChild(node);
}
| the_CONST T must_init_declare_id_list {
    NodeAttr* NA1 = new NodeAttr;
    NodeAttr* NA2 = new NodeAttr;
    Node* child3 = new Node($3->lineno, LIST_NODE, DECLARE_LIST, *NA1, Notype, parse_tree.node_seq++);
    child3->addChild($2);
    Node* node = new Node($2->lineno, DECL_NODE, CONST_DECL, *NA2, $2->type, parse_tree.node_seq++);
    node->addChild($1);
    node->addChild(child3);
    $$ = node;
    // decl->addChild(node);
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
: FOR LPAREN ASSIGN_stmt SEMICOLON expr SEMICOLON expr RPAREN statement {
    $$ = $1;
    $$->addChild($3);
    $$->addChild($5);
    $$->addChild($7);
    $$->addChild($9);
}
| FOR LPAREN declaration SEMICOLON expr SEMICOLON expr RPAREN statement {
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
        symtbl.match(name);
        child = child->sibling;
    }
}
| FOR LPAREN ASSIGN_stmt SEMICOLON expr SEMICOLON expr RPAREN LBRACE statements RBRACE {
    $$ = $1;
    $$->addChild($3);
    $$->addChild($5);
    $$->addChild($7);
    NodeAttr* NA = new NodeAttr;
    Node* child4 = new Node($10->lineno, STMT_NODE, COMP_STMT, *NA, Notype, parse_tree.node_seq++);
    child4->addChild($10);
    $$->addChild(child4);
}
| FOR LPAREN declaration SEMICOLON expr SEMICOLON expr RPAREN LBRACE statements RBRACE {
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
        symtbl.match(name);
        child = child->sibling;
    }
}
| FOR LPAREN SEMICOLON expr SEMICOLON expr RPAREN statement {
    $$ = $1;
    $$->addChild($4);
    $$->addChild($6);
    $$->addChild($8);
}
| FOR LPAREN SEMICOLON expr SEMICOLON expr RPAREN LBRACE statements RBRACE {
    $$ = $1;
    $$->addChild($4);
    $$->addChild($6);
    NodeAttr* NA = new NodeAttr;
    Node* child3 = new Node($9->lineno, STMT_NODE, COMP_STMT, *NA, Notype, parse_tree.node_seq++);
    child3->addChild($9);
    $$->addChild(child3);
}
;


matched_if_stmt
: IF LPAREN expr RPAREN matched_stmt ELSE matched_stmt {
    $$ = $1;
    $$->addChild($3);
    $$->addChild($5);
    $$->addSibling($6);
    $6->addChild($7);
}
| IF LPAREN expr RPAREN LBRACE statements RBRACE ELSE matched_stmt {
    $$ = $1;
    $$->addChild($3);
    NodeAttr* NA = new NodeAttr;
    Node* child2 = new Node($6->lineno, STMT_NODE, COMP_STMT, *NA, Notype, parse_tree.node_seq++);
    child2->addChild($6);
    $$->addChild(child2);
    $$->addSibling($8);
    $8->addChild($9);
}
| IF LPAREN expr RPAREN matched_stmt ELSE LBRACE statements RBRACE {
    $$ = $1;
    $$->addChild($3);
    $$->addChild($5);

    NodeAttr* NA = new NodeAttr;
    Node* child3 = new Node($8->lineno, STMT_NODE, COMP_STMT, *NA, Notype, parse_tree.node_seq++);
    child3->addChild($8);
    $6->addChild(child3);
    $$->addSibling($6);
}
| IF LPAREN expr RPAREN LBRACE statements RBRACE ELSE LBRACE statements RBRACE {
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
    $$->addSibling($8);
}
;

unmatched_if_stmt
: IF LPAREN expr RPAREN matched_stmt ELSE unmatched_stmt {
    $$ = $1;
    $$->addChild($3);
    $$->addChild($5);
    $$->addSibling($6);
    $6->addChild($7);
}
| IF LPAREN expr RPAREN LBRACE statements RBRACE ELSE unmatched_stmt {
    $$ = $1;
    $$->addChild($3);

    NodeAttr* NA = new NodeAttr;
    Node* child2 = new Node($6->lineno, STMT_NODE, COMP_STMT, *NA, Notype, parse_tree.node_seq++);
    child2->addChild($6);
    $$->addChild(child2);
    $$->addSibling($8);
    $8->addChild($9);
}
| IF LPAREN expr RPAREN statement {
    $$ = $1;
    $$->addChild($3);
    $$->addChild($5);
}
| IF LPAREN expr RPAREN LBRACE statements RBRACE %prec IFX {
    $$ = $1;
    $$->addChild($3);
    NodeAttr* NA = new NodeAttr;
    Node* child2 = new Node($6->lineno, STMT_NODE, COMP_STMT, *NA, Notype, parse_tree.node_seq++);
    child2->addChild($6);
    $$->addChild(child2);
}
;

expr_stmt
: expr {$$ = $1;}
| ASSIGN_stmt {
    $$ = $1;
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
}
| expr PLUS expr {
    $$ = $2;
    $$->addChild($1);
    $$->addChild($3);
}
| expr MINUS expr{
    $$ = $2;
    $$->addChild($1);
    $$->addChild($3);
}
| expr MULT expr{
    $$ = $2;
    $$->addChild($1);
    $$->addChild($3);
}
| expr DIV expr{
    $$ = $2;
    $$->addChild($1);
    $$->addChild($3);
}
| expr AND expr{
    $$ = $2;
    $$->addChild($1);
    $$->addChild($3);
}
| expr OR expr{
    $$ = $2;
    $$->addChild($1);
    $$->addChild($3);
}
| expr RELOP expr{
    $$ = $2;
    $$->addChild($1);
    $$->addChild($3);
}
| DPLUS expr %prec UDPLUS {
    $$ = $2; $$->addChild($1); 

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
| POS expr {$$ = $1;$$->addChild($2);}
| NOT expr {$$ = $1; $$->addChild($2);}
| MINUS expr %prec UMINUS { $$ = $1; $$->addChild($2);}
| LPAREN expr_stmt RPAREN {$$ = $1; $$->addChild($2); }
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
| CHAR {$$ = $1;}
| STRING %prec AFTER_COMMA {$$ = $1;}
| TRUE {$$ = $1;}
| FALSE {$$ = $1;}
;

expr_list
: expr {$$ = $1;}
| expr_list COMMA expr_list {
    $$ = $2;
    $$->addChild($1);
    $$->addChild($3);
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