%option nounput
%{
#include "common.h"
#include "main.tab.h"  // yacc header
int lineno = 1;  // 行号
extern tree parse_tree;
extern symbol_table symtbl;
extern int STACK_SIZE;
Node* cur;
%}

WHILE           while
FOR             for
IF              if
ELSE            else
RETURN          return
PRINTF          printf
SCANF           scanf
TRUE            true
FALSE           false
STRUCT          struct
the_CONST       const

BLOCKCOMMENT \/\*([^\*^\/]*|[\*^\/*]*|[^\**\/]*)*\*\/
LINECOMMENT \/\/[^\n]*
EOL	(\r\n|\r|\n)
WHILTESPACE [[:blank:]]

RELOP           [>]|[<]|[>][=]|[<][=]|[=][=]|[!][=]

INTEGER [0-9]+

CHAR [\'].[\']|[\']\\n[\']|[\']\\t[\']
STRING \".+\"

IDENTIFIER [[:alpha:]_][[:alpha:][:digit:]_]*

%%

{BLOCKCOMMENT}  /* do nothing */
{LINECOMMENT}  /* do nothing */


"int" {
    NodeAttr* NA = new NodeAttr;
    Node* node = new Node(lineno, EXPR_NODE, TYPE_EXPR, *NA, Integer, parse_tree.node_seq++);
    yylval = node;
    return T_INT;
}
"bool" {
    NodeAttr* NA = new NodeAttr;
    Node* node = new Node(lineno, EXPR_NODE, TYPE_EXPR, *NA, Boolean, parse_tree.node_seq++);
    yylval = node;
    return T_BOOL;
}
"char" {
    NodeAttr* NA = new NodeAttr;
    Node* node = new Node(lineno, EXPR_NODE, TYPE_EXPR, *NA, Char, parse_tree.node_seq++);
    yylval = node;
    return T_CHAR;
}
"void" {
    NodeAttr* NA = new NodeAttr;
    Node* node = new Node(lineno, EXPR_NODE, TYPE_EXPR, *NA, Notype, parse_tree.node_seq++);
    yylval = node;
    return T_VOID;
}

"++" {
    NodeAttr* NA = new NodeAttr(OP_DPLUS);
    Node* node = new Node(lineno, EXPR_NODE, OP_EXPR, *NA, Integer, parse_tree.node_seq++);
    yylval = node;
    return DPLUS;
}
"--" {
    NodeAttr* NA = new NodeAttr(OP_DMINUS);
    Node* node = new Node(lineno, EXPR_NODE, OP_EXPR, *NA, Integer, parse_tree.node_seq++);
    yylval = node;
    return DMINUS;
}

"[" {
    NodeAttr* NA = new NodeAttr(OP_BRCKET);
    Node* node = new Node(lineno, EXPR_NODE, OP_EXPR, *NA, Notype, parse_tree.node_seq++);
    yylval = node;
    return LBRACKET;
}
"]" return RBRACKET;

"(" {
    NodeAttr* NA = new NodeAttr(OP_P);
    Node* node = new Node(lineno, EXPR_NODE, OP_EXPR, *NA, Notype, parse_tree.node_seq++);
    yylval = node;
    return LPAREN;
}
")" return RPAREN;
"{" {
    symtbl.unmatch();
    return LBRACE;
}
"}" {
    symtbl.match();
    return RBRACE;
}
"," {
    NodeAttr* NA = new NodeAttr(OP_COMMA);
    Node* node = new Node(lineno, EXPR_NODE, OP_EXPR, *NA, Notype, parse_tree.node_seq++);
    yylval = node;
    return COMMA;
}
";" return  SEMICOLON;
"+" {
    NodeAttr* NA = new NodeAttr(OP_PLUS);
    Node* node = new Node(lineno, EXPR_NODE, OP_EXPR, *NA, Integer, parse_tree.node_seq++);
    yylval = node;
    return PLUS;
}
"-" {
    NodeAttr* NA = new NodeAttr(OP_MINUS);
    Node* node = new Node(lineno, EXPR_NODE, OP_EXPR, *NA, Integer, parse_tree.node_seq++);
    yylval = node;
    return MINUS;
}
"*" {
    NodeAttr* NA = new NodeAttr(OP_MULT);
    Node* node = new Node(lineno, EXPR_NODE, OP_EXPR, *NA, Integer, parse_tree.node_seq++);
    yylval = node;
    return MULT;
}
"/" {
        NodeAttr* NA = new NodeAttr(OP_DIV);
    Node* node = new Node(lineno, EXPR_NODE, OP_EXPR, *NA, Integer, parse_tree.node_seq++);
    yylval = node;
    return DIV;
}
"&&" {
    // cout<<"读到了&&"<<endl;
    NodeAttr* NA = new NodeAttr(OP_AND);
    Node* node = new Node(lineno, EXPR_NODE, OP_EXPR, *NA, Boolean, parse_tree.node_seq++);
    yylval = node;
    return AND;
}
"||" {
        NodeAttr* NA = new NodeAttr(OP_OR);
    Node* node = new Node(lineno, EXPR_NODE, OP_EXPR, *NA, Boolean, parse_tree.node_seq++);
    yylval = node;
    return OR;
}
"!" {
    NodeAttr* NA = new NodeAttr(OP_NOT);
    Node* node = new Node(lineno, EXPR_NODE, OP_EXPR, *NA, Boolean, parse_tree.node_seq++);
    yylval = node;
    return NOT;
}
"&" {
    NodeAttr* NA = new NodeAttr(OP_POS);
    Node* node = new Node(lineno, EXPR_NODE, OP_EXPR, *NA, Integer, parse_tree.node_seq++);
    yylval = node;
    return POS;
}
"%" {
    NodeAttr* NA = new NodeAttr(OP_MOD);
    Node* node = new Node(lineno, EXPR_NODE, OP_EXPR, *NA, Integer, parse_tree.node_seq++);
    yylval = node;
    return MOD;
}
"." {
    NodeAttr* NA = new NodeAttr(OP_DOT);
    Node* node = new Node(lineno, EXPR_NODE, OP_EXPR, *NA, Notype, parse_tree.node_seq++);
    yylval = node;
    return DOT;
}
"->" {
    NodeAttr* NA = new NodeAttr(OP_ARROW);
    Node* node = new Node(lineno, EXPR_NODE, OP_EXPR, *NA, Notype, parse_tree.node_seq++);
    yylval = node;
    return ARROW;
}


{WHILE} {
    NodeAttr* NA = new NodeAttr;
    Node* node = new Node(lineno, STMT_NODE, WHILE_STMT, *NA, Notype, parse_tree.node_seq++);
    yylval = node;
    return WHILE;
}

{RETURN} {
    NodeAttr* NA = new NodeAttr;
    Node* node = new Node(lineno, STMT_NODE, RETURN_STMT, *NA, Notype, parse_tree.node_seq++);
    yylval = node;
    return RETURN;
}

{FOR} {
    NodeAttr* NA = new NodeAttr;
    Node* node = new Node(lineno, STMT_NODE, FOR_STMT, *NA, Notype, parse_tree.node_seq++);
    yylval = node;
    return FOR;
}

{IF} {
    NodeAttr* NA = new NodeAttr;
    Node* node = new Node(lineno, STMT_NODE, IF_STMT, *NA, Notype, parse_tree.node_seq++);
    yylval = node;
    return IF;
}

{ELSE} {
    NodeAttr* NA = new NodeAttr;
    Node* node = new Node(lineno, STMT_NODE, ELSE_STMT, *NA, Notype, parse_tree.node_seq++);
    yylval = node;
    return ELSE;
}

{PRINTF} {
    NodeAttr* NA = new NodeAttr;
    Node* node = new Node(lineno, STMT_NODE, PRINT_STMT, *NA, Notype, parse_tree.node_seq++);
    yylval = node;
    return PRINTF;
}

{SCANF} {
    NodeAttr* NA = new NodeAttr;
    Node* node = new Node(lineno, STMT_NODE, SCAN_STMT, *NA, Notype, parse_tree.node_seq++);
    yylval = node;
    return SCANF;
}

{the_CONST} return the_CONST;

{TRUE} {
    NodeAttr* NA = new NodeAttr;
    Node* node = new Node(lineno, EXPR_NODE, CONST_EXPR, *NA, Boolean, parse_tree.node_seq++);
    yylval = node;
    return TRUE;
}

{FALSE} {
    NodeAttr* NA = new NodeAttr;
    Node* node = new Node(lineno, EXPR_NODE, CONST_EXPR, *NA, Boolean, parse_tree.node_seq++);
    yylval = node;
    return FALSE;
}

{STRUCT} {
    // Node* node = new Node(lineno, NODE_TYPE);
    // node->type = new Type(COMPOSE_STRUCT);
    // yylval = node;
    return STRUCT;
}

"+=" {
    NodeAttr* NA = new NodeAttr(OP_PLUSASSIGN);
    Node* node = new Node(lineno, EXPR_NODE, OP_EXPR, *NA, Integer, parse_tree.node_seq++);
    yylval = node;
    return PLUS_ASSIGN;
}

"-=" {
    NodeAttr* NA = new NodeAttr(OP_MINUSASSIGN);
    Node* node = new Node(lineno, EXPR_NODE, OP_EXPR, *NA, Integer, parse_tree.node_seq++);
    yylval = node;
    return SUB_ASSIGN;
}

"*=" {
    NodeAttr* NA = new NodeAttr(OP_MULASSIGN);
    Node* node = new Node(lineno, EXPR_NODE, OP_EXPR, *NA, Integer, parse_tree.node_seq++);
    yylval = node;
    return MULT_ASSIGN;
}

"/=" {
    NodeAttr* NA = new NodeAttr(OP_DIVASSIGN);
    Node* node = new Node(lineno, EXPR_NODE, OP_EXPR, *NA, Integer, parse_tree.node_seq++);
    yylval = node;
    return DIV_ASSIGN;
}

"=" {
    NodeAttr* NA = new NodeAttr(OP_ASSIGN);
    Node* node = new Node(lineno, EXPR_NODE, OP_EXPR, *NA, Notype, parse_tree.node_seq++);
    yylval = node;
    return EQ_ASSIGN;
}

{RELOP} {
    NodeAttr* NA = new NodeAttr;
    if(yytext[0] == '=' && yytext[1] == '=')
        NA->op = OP_EQ;
    else if(yytext[0] == '!' && yytext[1] == '=')
    {
        // cout << "检测到!=" << endl;
        NA->op = OP_NEQ;
    }
    else if(yytext[0] == '>' && strlen(yytext) == 1)
        NA->op = OP_L;
    else if(yytext[0] == '>' && strlen(yytext) == 2 && yytext[1] == '=')
        NA->op = OP_LEQ;
    else if(yytext[0] == '<' && strlen(yytext) == 1)
        NA->op = OP_S;
    else if(yytext[0] == '<' && strlen(yytext) == 2 && yytext[1] == '=')
        NA->op = OP_SEQ;

    Node* node = new Node(lineno, EXPR_NODE, OP_EXPR, *NA, Boolean, parse_tree.node_seq++);
    yylval = node;

    return RELOP;
}

{INTEGER} {
    NodeAttr* NA = new NodeAttr;
    NA->vali = atoi(yytext);
    Node* node = new Node(lineno, EXPR_NODE, CONST_EXPR, *NA, Integer, parse_tree.node_seq++);
    yylval = node;
    return INTEGER;
}

{CHAR} {
    NodeAttr* NA;
    if((yytext[1] == char(92)) && (yytext[2] != char(39)))
    {
        if(yytext[2] == 'n')
        {
            NA = new NodeAttr('\n');
        }
        else if(yytext[2] == 't')
        {
            NA = new NodeAttr('\t');
        }
    }
    else
    {
        NA = new NodeAttr(yytext[1]);
    }
    // cout << NA->valc << endl;
    Node* node = new Node(lineno, EXPR_NODE, CONST_EXPR, *NA, Char, parse_tree.node_seq++);
    yylval = node;
    return CHAR;
}

{IDENTIFIER} {
    NodeAttr* NA = new NodeAttr;
    NA->name = string(yytext);
    Node* node = new Node(lineno, EXPR_NODE, ID_EXPR, *NA, Notype, parse_tree.node_seq++);
    yylval = node;
    return IDENTIFIER;
}

{STRING} {
    NodeAttr* NA = new NodeAttr;
    NA->valstr = string(yytext);
    Node* node = new Node(lineno, EXPR_NODE, CONST_EXPR, *NA, String, parse_tree.node_seq++);
    yylval = node;
    // cout<<"检测到string"<<endl;
    return STRING;
}

{WHILTESPACE} /* do nothing */

{EOL} lineno++;

. {
    cerr << "[line "<< lineno <<" ] unknown character:" << yytext << endl;
}

%%