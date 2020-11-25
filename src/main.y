%{
    #include "common.h"
    #define YYSTYPE TreeNode *  
    TreeNode* root;
    extern int lineno;
    int yylex();
    int yyerror( char const * );
%}

%token T_CHAR T_INT T_STRING T_BOOL VOID

%token LOP_ASSIGN

%token WHILE FOR IF ELSE RETURN PRINTF SCANF

%token LPAREN RPAREN LBRACE RBRACE COMMA POS

%token RELOP
%token MOD
%token PLUS MINUS
%token STAR DIV
%token AND OR 
%token NOT 

%token IDENTIFIER INTEGER CHAR BOOL STRING

%token SEMICOLON

%left RELOP
%left MOD
%left PLUS MINUS
%left STAR DIV
%left AND OR
%left NOT
%left DMINUS DPLUS

%right UMINUS

%%

program
: statements {root = new TreeNode(0, NODE_PROG); root->addChild($1);};

statements
:  statement {$$=$1;}
|  statements statement {$$=$1; $$->addSibling($2);}
;

statement
: SEMICOLON  {$$ = new TreeNode(lineno, NODE_STMT); $$->stype = STMT_SKIP;}
| function {$$ = $1;}
| while_stmt {$$ = $1;}
| for_stmt {$$ = $1;}
| if_else_stmt {$$ = $1;}
| ASSIGN_stmt {$$ = $1;}
| RETURN_stmt SEMICOLON {$$ = $1;}
| declaration SEMICOLON {$$ = $1;}
| printf_stmt SEMICOLON {$$ = $1;}
| scanf_stmt SEMICOLON {$$ = $1;}
| expr SEMICOLON {$$ = $1;}
;

function
: T IDENTIFIER LPAREN params RPAREN LBRACE statements RBRACE {
    TreeNode* node = new TreeNode($1->lineno, NODE_FUNC);
    node->type = new Type(COMPOSE_FUNCTION);
    node->type->addRet($1->type);
    TreeNode* cur = $4;
    while(cur!=nullptr)
    {
        if(cur->nodeType == NODE_TYPE)
            node->type->addParam(cur->type);
        cur = cur->sibling;
    }
    node->addChild($1);
    node->addChild($2);
    node->addChild($4);
    node->addChild($7);
    $$ = node;
}
| T IDENTIFIER LPAREN RPAREN LBRACE statements RBRACE {
    TreeNode* node = new TreeNode($1->lineno, NODE_FUNC);
    node->type = new Type(COMPOSE_FUNCTION);
    node->type->addRet($1->type);
    node->addChild($1);
    node->addChild($2);
    node->addChild($6);
    $$ = node;
}
;

params
: T IDENTIFIER {
    $$ = $1;
    $1->addSibling($2);
}
| params COMMA T IDENTIFIER {
    $$ = $1;
    $$->addSibling($3);
    $$->addSibling($4);
}
;

ASSIGN_stmt
: IDENTIFIER LOP_ASSIGN expr SEMICOLON {
    TreeNode* node = new TreeNode($1->lineno, NODE_STMT);
    node->stype = STMT_ASSIGN;
    node->addChild($1);
    node->addChild($3);
    $$ = node;
}
;

RETURN_stmt
: RETURN expr {
    $$ = $1;
    $$->addChild($2);
}
;

declaration
: T id_list { // declare and init
    TreeNode* node = new TreeNode($1->lineno, NODE_STMT);
    node->stype = STMT_DECL;
    node->addChild($1);
    node->addChild($2);
    $$ = node;   
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
    $$->addChild($6);
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
}
| FOR LPAREN ASSIGN_stmt SEMICOLON expr SEMICOLON expr RPAREN LBRACE statements RBRACE {
    $$ = $1;
    $$->addChild($3);
    $$->addChild($5);
    $$->addChild($7);
    $$->addChild($10);
}
| FOR LPAREN declaration SEMICOLON expr SEMICOLON expr RPAREN LBRACE statements RBRACE {
    $$ = $1;
    $$->addChild($3);
    $$->addChild($5);
    $$->addChild($7);
    $$->addChild($10);
}
;

if_else_stmt
: IF LPAREN expr RPAREN statement {
    $$ = $1;
    $$->addChild($3);
    $$->addChild($5);
}
| IF LPAREN expr RPAREN LBRACE statements RBRACE{
    $$ = $1;
    $$->addChild($3);
    $$->addChild($6);
}
;

printf_stmt
: PRINTF LPAREN expr RPAREN {
    $$ = $1;
    $$->addChild($3);
}
| PRINTF LPAREN STRING COMMA id_list RPAREN {
    $$ = $1;
    $$->addChild($3);
    $$->addChild($5);
}
;

scanf_stmt
: SCANF LPAREN STRING COMMA id_list RPAREN {
    $$ = $1;
    $$->addChild($3);
    $$->addChild($5);
}

expr
: expr MOD expr {
    TreeNode* node = new TreeNode($1->lineno, NODE_EXPR);
    node->addChild($1);
    node->addChild($3);
    $$ = node;
}
| expr PLUS expr {
    TreeNode* node = new TreeNode($1->lineno, NODE_EXPR);
    node->addChild($1);
    node->addChild($3);
    $$ = node;
}
| expr MINUS expr{
    TreeNode* node = new TreeNode($1->lineno, NODE_EXPR);
    node->addChild($1);
    node->addChild($3);
    $$ = node;
}
| expr STAR expr{
    TreeNode* node = new TreeNode($1->lineno, NODE_EXPR);
    node->addChild($1);
    node->addChild($3);
    $$ = node;
}
| expr DIV expr{
    TreeNode* node = new TreeNode($1->lineno, NODE_EXPR);
    node->addChild($1);
    node->addChild($3);
    $$ = node;
}
| expr AND expr{
    TreeNode* node = new TreeNode($1->lineno, NODE_EXPR);
    node->addChild($1);
    node->addChild($3);
    $$ = node;
}
| expr OR expr{
    TreeNode* node = new TreeNode($1->lineno, NODE_EXPR);
    node->addChild($1);
    node->addChild($3);
    $$ = node;
}
| expr RELOP expr{
    TreeNode* node = new TreeNode($1->lineno, NODE_EXPR);
    node->addChild($1);
    node->addChild($3);
    $$ = node;
}
| DPLUS expr {$$ = $2;}
| expr DPLUS {$$ = $1;}
| DMINUS expr {$$ = $2;}
| expr DMINUS {$$ = $1;}
| NOT expr {$$ = $2;}
| MINUS expr %prec UMINUS { $$ = $2;}
| LPAREN expr RPAREN {$$ = $2;}
| term {$$ = $1;}
;

term
: IDENTIFIER {
    $$ = $1;
}
| INTEGER {
    $$ = $1;
}
| CHAR {
    $$ = $1;
}
| STRING {
    $$ = $1;
}
;

id_list
: expr {$$ = $1;}
| POS expr {$$ = $2;} 
| IDENTIFIER LOP_ASSIGN expr {
    TreeNode* node = new TreeNode($1->lineno, NODE_INIT);
    node->addChild($1);
    node->addChild($3);
    $$ = node;
}
| id_list COMMA expr {$$ = $1; $$->addSibling($3);}
| id_list COMMA IDENTIFIER LOP_ASSIGN expr {
    $$ = $1;
    TreeNode* node = new TreeNode($3->lineno, NODE_INIT);
    node->addChild($3);
    node->addChild($5);
    $$->addSibling(node);
}
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