%{
    #include "common.h"
    #define YYSTYPE TreeNode *  
    TreeNode* root;
    extern int lineno;
    extern int un;
    extern table Table;
    int yylex();
    int yyerror( char const * );
%}

%token T_CHAR T_INT T_STRING T_BOOL VOID

%token LOP_ASSIGN

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

%right LOP_ASSIGN EQ_ASSIGN
%left AND OR
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
: statements {root = new TreeNode(0, NODE_PROG); root->addChild($1);};

statements
:  statement {$$=$1;}
|  statements statement {$$=$1; $$->addSibling($2);}
;

statement
: SEMICOLON  {$$ = new TreeNode(lineno, NODE_STMT); $$->stype = STMT_SKIP;}
| matched_stmt %prec IFX{$$ = $1;}
| unmatched_stmt {$$ = $1;}
;

matched_stmt
: function {$$ = $1;}
| struct_decl {$$ = $1;}
| while_stmt {$$ = $1;}
| for_stmt {$$ = $1;}
| RETURN_stmt SEMICOLON {$$ = $1;}
| declaration SEMICOLON {$$ = $1;}
| printf_stmt SEMICOLON {$$ = $1;}
| scanf_stmt SEMICOLON {$$ = $1;}
| expr_stmt SEMICOLON {$$ = $1;}
| matched_if_stmt {$$ = $1;}
;

unmatched_stmt
: unmatched_if_stmt {$$ = $1;}
;

function
: T IDENTIFIER LPAREN params RPAREN LBRACE statements RBRACE {
    TreeNode* node = new TreeNode($1->lineno, NODE_FUNC);
    node->type = new Type(COMPOSE_FUNCTION);
    node->type->addRet($1->type);
    TreeNode* cur = $4;
    while(cur != nullptr)
    {
        node->type->addParam(cur->type);
        cur = cur->sibling;
    }
    node->addChild($1);
    node->addChild($2);
    TreeNode* child3 = new TreeNode($4->lineno, NODE_LIST);
    TreeNode* child4 = new TreeNode($7->lineno, NODE_LIST);
    child3->addChild($4);
    child4->addChild($7);
    node->addChild(child3);
    node->addChild(child4);
    $$ = node;
}
| T IDENTIFIER LPAREN RPAREN LBRACE statements RBRACE {
    TreeNode* node = new TreeNode($1->lineno, NODE_FUNC);
    node->type = new Type(COMPOSE_FUNCTION);
    node->type->addRet($1->type);
    TreeNode* child3 = new TreeNode($6->lineno, NODE_LIST);
    child3->addChild($6);
    node->addChild($1);
    node->addChild($2);
    node->addChild(child3);
    $$ = node;
}
;

params
: T IDENTIFIER {
    $$ = $1;
    $$->addChild($2);
}
| T IDENTIFIER EQ_ASSIGN CONST {
    $$ = $1;
    $$->addChild($2);
    $$->addChild($4);
}
| params COMMA params {
    $$ = $1;
    $$->addSibling($3);
}
;

struct_decl
: STRUCT IDENTIFIER LBRACE members RBRACE SEMICOLON{
    $$ = $1;
    $$->addChild($2);
    TreeNode* child2 = new TreeNode($4->lineno, NODE_LIST);
    child2->addChild($4);
    $$->addChild(child2);
}
| STRUCT IDENTIFIER LBRACE members RBRACE IDENTIFIER_list SEMICOLON{
    $$ = $1;
    $$->addChild($2);
    TreeNode* child2 = new TreeNode($4->lineno, NODE_LIST);
    child2->addChild($4);
    $$->addChild(child2);
    TreeNode* child3 = new TreeNode($6->lineno, NODE_LIST);
    child3->addChild($6);
    $$->addChild(child3);
}
;

members
: T no_init_id_list SEMICOLON{
    $$ = $1;
    TreeNode* child1 = new TreeNode($2->lineno, NODE_LIST);
    child1->addChild($2);
    $$->addChild(child1);
}
| members T no_init_id_list SEMICOLON {
    $$ = $1;
    $$->addSibling($2);
    TreeNode* child1 = new TreeNode($3->lineno, NODE_LIST);
    child1->addChild($3);
    $2->addChild(child1);
}
;

no_init_id_list
: MULT IDENTIFIER %prec POINTER{$$ = $2;}
| IDENTIFIER {$$ = $1;}
| ARRAY {$$ = $1;}
| no_init_id_list COMMA no_init_id_list {
    $$ = $1;
    $$->addSibling($3);
}
;

IDENTIFIER_list
: IDENTIFIER {$$ = $1;}
| IDENTIFIER_list COMMA IDENTIFIER_list {
    $$ = $1;
    $$->addSibling($3);
}
;

ARRAY
: IDENTIFIER LBRACKET CONST RBRACKET {
    $$ = $1;
    $$->addChild($2);
    $2->addChild($3);
    $2->nodeType = NODE_ARRAY;
}
| ARRAY LBRACKET CONST RBRACKET {
    $$ = $1;
    $$->addChild($2);
    $2->addChild($3);
    $2->nodeType = NODE_ARRAY;
}
;

ASSIGN_stmt
: expr LOP_ASSIGN expr {
    $$ = $2;
    $$->addChild($1);
    $$->addChild($3);
}
| expr EQ_ASSIGN expr {
    $$ = $2;
    $$->addChild($1);
    $$->addChild($3);
    $1->int_val = $3->int_val;
    $1->given = 1;
}
;

RETURN_stmt
: RETURN expr {
    $$ = $1;
    $$->addChild($2);
}
;

declaration
: T declare_id_list { // declare and init
    TreeNode* node = new TreeNode($1->lineno, NODE_STMT);
    node->stype = STMT_DECL;
    node->addChild($1);
    TreeNode* child2 = new TreeNode($2->lineno, NODE_LIST);
    child2->addChild($2);
    node->addChild(child2);
    $$ = node; 
}
| the_CONST T must_init_declare_id_list {
    TreeNode* node = new TreeNode($2->lineno, NODE_STMT);
    node->stype = STMT_DECL;
    node->addChild($2);
    TreeNode* child3 = new TreeNode($3->lineno, NODE_LIST);
    child3->addChild($3);
    node->addChild(child3);
    TreeNode* child = $3;
    while(child != nullptr)
    {
        if(child->child->nodeType == NODE_VAR)
        {
            child->child->nodeType = NODE_CONST_VAR;
            child->child->type = $2->type;
            switch($2->type->type) {
                case VALUE_INT:
                    child->child->int_val = child->child->sibling->int_val;
                    break;
                case VALUE_CHAR:
                    child->child->ch_val = child->child->sibling->ch_val;
                    break;
                case VALUE_STRING:
                    child->child->str_val = child->child->sibling->str_val;
                    break;
                case VALUE_BOOL:
                    child->child->b_val = child->child->sibling->b_val;
                    break;
                default:
                    break;
            }
        }
        child = child->sibling;
    }
    $$ = node;
}
;

declare_id_list
: ASSIGN_stmt {
    if($1->optype != OP_ASSIGN) yyerror("初始化错误");
    $$ = $1;
    $$->nodeType = NODE_INIT;
    $1->child->given = 1;
    Table.add_symbol($1->child);
}
| MULT IDENTIFIER %prec POINTER {
    $$ = $2;
    Table.add_symbol($2);
}
| IDENTIFIER {
    $$ = $1;
    Table.add_symbol($1);
}
| ARRAY {$$ = $1;}
| declare_id_list COMMA declare_id_list {$$ = $1; $$->addSibling($3);}
;

must_init_declare_id_list
: ASSIGN_stmt {
    $$ = $1;
    $$->nodeType = NODE_INIT;
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
    TreeNode* child2 = new TreeNode($6->lineno, NODE_LIST);
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
    TreeNode* child = $3->child->sibling->child;
    while(child != nullptr)
    {
        string name;
        if(child->nodeType == NODE_INIT)
            name = child->child->var_name;
        else
            name = child->var_name;
        Table.match(name, 0);
        child = child->sibling;
    }
}
| FOR LPAREN ASSIGN_stmt SEMICOLON expr SEMICOLON expr RPAREN LBRACE statements RBRACE {
    $$ = $1;
    $$->addChild($3);
    $$->addChild($5);
    $$->addChild($7);
    TreeNode* child4 = new TreeNode($10->lineno, NODE_LIST);
    child4->addChild($10);
    $$->addChild(child4);
}
| FOR LPAREN declaration SEMICOLON expr SEMICOLON expr RPAREN LBRACE statements RBRACE {
    $$ = $1;
    $$->addChild($3);
    $$->addChild($5);
    $$->addChild($7);
    TreeNode* child4 = new TreeNode($10->lineno, NODE_LIST);
    child4->addChild($10);
    $$->addChild(child4);
    TreeNode* child = $3->child->sibling->child;
    while(child != nullptr)
    {
        string name;
        if(child->nodeType == NODE_INIT)
            name = child->child->var_name;
        else
            name = child->var_name;
        Table.match(name, 0);
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
    TreeNode* child3 = new TreeNode($9->lineno, NODE_LIST);
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
    TreeNode* child2 = new TreeNode($6->lineno, NODE_LIST);
    child2->addChild($6);
    $$->addChild(child2);
    $$->addSibling($8);
    $8->addChild($9);
}
| IF LPAREN expr RPAREN matched_stmt ELSE LBRACE statements RBRACE {
    $$ = $1;
    $$->addChild($3);
    $$->addChild($5);
    $$->addSibling($6);
    $6->addChild($8);
}
| IF LPAREN expr RPAREN LBRACE statements RBRACE ELSE LBRACE statements RBRACE {
    $$ = $1;
    $$->addChild($3);
    TreeNode* child2 = new TreeNode($6->lineno, NODE_LIST);
    child2->addChild($6);
    $$->addChild(child2);
    $$->addSibling($8);
    $8->addChild($10);
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
    TreeNode* child2 = new TreeNode($6->lineno, NODE_LIST);
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
    TreeNode* child2 = new TreeNode($6->lineno, NODE_LIST);
    child2->addChild($6);
    $$->addChild(child2);
}
;

printf_stmt
: PRINTF LPAREN expr_list RPAREN {
    $$ = $1;
    $$->addChild($3);
}
| PRINTF LPAREN STRING COMMA expr_list RPAREN {
    $$ = $1;
    $$->addChild($3);
    TreeNode* child2 = new TreeNode($5->lineno, NODE_LIST);
    child2->addChild($5);
    $$->addChild(child2);
}
;

scanf_stmt
: SCANF LPAREN STRING COMMA scanf_id_list RPAREN {
    $$ = $1;
    $$->addChild($3);
    TreeNode* child2 = new TreeNode($5->lineno, NODE_LIST);
    child2->addChild($5);
    $$->addChild(child2);
}

expr_stmt
: expr {$$ = $1;}
| ASSIGN_stmt {
    $$ = $1;
    Table.change($1->child->var_name, $1->child->sibling->int_val);
}
| expr_stmt COMMA expr_stmt {
    $$ = $2;
    $$->addChild($1);
    $$->addChild($3);
    $$->int_val = $3->int_val;
}
;

expr
: expr MOD expr {
    $$ = $2;
    $$->addChild($1);
    $$->addChild($3);
    $$->int_val = $1->int_val % $3->int_val;
}
| expr PLUS expr {
    $$ = $2;
    $$->addChild($1);
    $$->addChild($3);
    $$->int_val = $1->int_val + $3->int_val;
}
| expr MINUS expr{
    $$ = $2;
    $$->addChild($1);
    $$->addChild($3);
    $$->int_val = $1->int_val - $3->int_val;
}
| expr MULT expr{
    $$ = $2;
    $$->addChild($1);
    $$->addChild($3);
    $$->int_val = $1->int_val * $3->int_val;
}
| expr DIV expr{
    $$ = $2;
    $$->addChild($1);
    $$->addChild($3);
    $$->int_val = $1->int_val / $3->int_val;
}
| expr AND expr{
    $$ = $2;
    $$->addChild($1);
    $$->addChild($3);
    $$->int_val = $1->int_val && $3->int_val;
}
| expr OR expr{
    $$ = $2;
    $$->addChild($1);
    $$->addChild($3);
    $$->int_val = $1->int_val || $3->int_val;
}
| expr RELOP expr{
    $$ = $2;
    $$->addChild($1);
    $$->addChild($3);
    $$->int_val = 1;
}
| expr DOT IDENTIFIER {
    $$ = $2;
    $$->addChild($1);
    $$->addChild($3);
}
| expr ARROW IDENTIFIER {
    $$ = $2;
    $$->addChild($1);
    $$->addChild($3);
}
| expr LBRACKET expr RBRACKET {
    $$ = $2;
    $$->addChild($1);
    $$->addChild($3);
}
| expr LPAREN RPAREN {
    $$ = $1;
}
| expr LPAREN expr_list RPAREN {
    $$ = $1;
    $$->nodeType = NODE_FUNC;
    TreeNode* child1 = new TreeNode($3->lineno, NODE_LIST);
    child1->addChild($3);
    $$->addChild(child1);
}
| DPLUS expr %prec UDPLUS {$$ = $1; $$->addChild($2); $$->int_val = $2->int_val + 1;}
| expr DPLUS {$$ = $2; $$->addChild($1); $$->int_val = $1->int_val + 1;}
| DMINUS expr %prec UDMINUS{$$ = $1; $$->addChild($2); $$->int_val = $2->int_val - 1;}
| expr DMINUS {$$ = $2; $$->addChild($1); $$->int_val = $1->int_val - 1;}
| NOT expr {$$ = $1; $$->addChild($2); $$->int_val = !($1->int_val);}
| MINUS expr %prec UMINUS { $$ = $1; $$->addChild($2); $$->int_val = -($1->int_val);}
| LPAREN expr_stmt RPAREN {$$ = $1; $$->addChild($2); $$->int_val = $2->int_val;}
| term {$$ = $1;}
;

term
: IDENTIFIER %prec FXL { 
    scope* this_scope = Table.find_symbol($1->var_name);
    if(this_scope != nullptr)
    {    
        this_scope->copy_to($1);
        $1->given = 1;
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
    $$ = $1;
    $$->addSibling($3);
}
;

scanf_id_list
: IDENTIFIER {$$ = $1;}
| POS IDENTIFIER {$$ = $2;}
| scanf_id_list COMMA scanf_id_list {$$ = $1; $$->addSibling($3);}
;

T: T_INT {$$ = new TreeNode(lineno, NODE_TYPE); $$->type = TYPE_INT;} 
| T_CHAR {$$ = new TreeNode(lineno, NODE_TYPE); $$->type = TYPE_CHAR;}
| T_BOOL {$$ = new TreeNode(lineno, NODE_TYPE); $$->type = TYPE_BOOL;}
| VOID {$$ = new TreeNode(lineno, NODE_TYPE); $$->type = TYPE_VOID;}
;


%%

int yyerror(char const* message)
{
    cout << message << " at line " << lineno << endl;
    return -1;
}