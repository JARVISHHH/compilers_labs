/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_SRC_MAIN_TAB_H_INCLUDED
# define YY_YY_SRC_MAIN_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_CHAR = 258,
    T_INT = 259,
    T_STRING = 260,
    T_BOOL = 261,
    VOID = 262,
    LOP_ASSIGN = 263,
    WHILE = 264,
    FOR = 265,
    IF = 266,
    ELSE = 267,
    RETURN = 268,
    PRINTF = 269,
    SCANF = 270,
    TRUE = 271,
    FALSE = 272,
    STRUCT = 273,
    the_CONST = 274,
    LPAREN = 275,
    RPAREN = 276,
    LBRACE = 277,
    RBRACE = 278,
    COMMA = 279,
    POS = 280,
    LBRACKET = 281,
    RBRACKET = 282,
    MOD = 283,
    PLUS = 284,
    MINUS = 285,
    MULT = 286,
    DIV = 287,
    AND = 288,
    OR = 289,
    NOT = 290,
    DMINUS = 291,
    DPLUS = 292,
    RELOP = 293,
    DOT = 294,
    ARROW = 295,
    IDENTIFIER = 296,
    INTEGER = 297,
    CHAR = 298,
    BOOL = 299,
    STRING = 300,
    SEMICOLON = 301,
    IFX = 302,
    AFTER_COMMA = 303,
    BEFORE_COMMA = 304,
    EQ_ASSIGN = 305,
    UDMINUS = 306,
    UDPLUS = 307,
    UMINUS = 308,
    POINTER = 309,
    FXL = 310,
    BIGGEST = 311
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_MAIN_TAB_H_INCLUDED  */
