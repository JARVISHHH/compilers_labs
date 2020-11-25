%option nounput
%{
#include "common.h"
#include "main.tab.h"  // yacc header
int lineno = 1;  // 行号
%}

WHILE           while
FOR             for
IF              if
ELSE            else
RETURN          return
PRINTF          printf
SCANF           scanf

BLOCKCOMMENT \/\*([^\*^\/]*|[\*^\/*]*|[^\**\/]*)*\*\/
LINECOMMENT \/\/[^\n]*
EOL	(\r\n|\r|\n)
WHILTESPACE [[:blank:]]

ASSIGN          [=]|[*][=]|[+][=]|[-][=]|[/][=]
RELOP           [>]|[<]|[>][=]|[<][=]|[=][=]|[!][=]

INTEGER [0-9]+

CHAR \'.?\'
STRING \".+\"

IDENTIFIER [[:alpha:]_][[:alpha:][:digit:]_]*

%%

{BLOCKCOMMENT}  /* do nothing */
{LINECOMMENT}  /* do nothing */


"int" return T_INT;
"bool" return T_BOOL;
"char" return T_CHAR;
"void" return VOID;

"++" return DPLUS;
"--" return DMINUS;

"(" return LPAREN;
")" return RPAREN;
"{" return LBRACE;
"}" return RBRACE;
"," return COMMA;
";" return  SEMICOLON;
"+" return PLUS;
"-" return MINUS;
"*" return STAR;
"/" return DIV;
"&&" return AND;
"||" return OR;
"!" return NOT;
"&" return POS;
"%" return MOD;


{WHILE} {
    TreeNode* node = new TreeNode(lineno, NODE_STMT);
    node->stype = STMT_WHILE;
    yylval = node;
    return WHILE;
}

{RETURN} {
    TreeNode* node = new TreeNode(lineno, NODE_STMT);
    yylval = node;
    return RETURN;
}

{FOR} {
    TreeNode* node = new TreeNode(lineno, NODE_STMT);
    node->stype = STMT_FOR;
    yylval = node;
    return FOR;
}

{IF} {
    TreeNode* node = new TreeNode(lineno, NODE_STMT);
    node->stype = STMT_IF_ELSE;
    yylval = node;
    return IF;
}

{PRINTF} {
    TreeNode* node = new TreeNode(lineno, NODE_STMT);
    node->stype = STMT_PRINTF;
    yylval = node;
    return PRINTF;
}

{SCANF} {
    TreeNode* node = new TreeNode(lineno, NODE_STMT);
    node->stype = STMT_SCANF;
    yylval = node;
    return SCANF;
}

{ASSIGN} return LOP_ASSIGN;
{RELOP} return RELOP;

{INTEGER} {
    TreeNode* node = new TreeNode(lineno, NODE_CONST);
    node->type = TYPE_INT;
    node->int_val = atoi(yytext);
    yylval = node;
    return INTEGER;
}

{CHAR} {
    TreeNode* node = new TreeNode(lineno, NODE_CONST);
    node->type = TYPE_CHAR;
    node->int_val = yytext[1];
    yylval = node;
    return CHAR;
}

{IDENTIFIER} {
    TreeNode* node = new TreeNode(lineno, NODE_VAR);
    node->var_name = string(yytext);
    yylval = node;
    return IDENTIFIER;
}

{STRING} {
    TreeNode* node = new TreeNode(lineno, NODE_CONST);
    node->type = TYPE_STRING;
    node->str_val = yytext;
    yylval = node;
    return STRING;
}

{WHILTESPACE} /* do nothing */

{EOL} lineno++;

. {
    cerr << "[line "<< lineno <<" ] unknown character:" << yytext << endl;
}
%%