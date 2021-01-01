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
    T_VOID = 262,
    EQ_ASSIGN = 263,
    PLUS_ASSIGN = 264,
    SUB_ASSIGN = 265,
    MULT_ASSIGN = 266,
    DIV_ASSIGN = 267,
    WHILE = 268,
    FOR = 269,
    IF = 270,
    ELSE = 271,
    RETURN = 272,
    PRINTF = 273,
    SCANF = 274,
    TRUE = 275,
    FALSE = 276,
    STRUCT = 277,
    the_CONST = 278,
    LPAREN = 279,
    RPAREN = 280,
    LBRACE = 281,
    RBRACE = 282,
    COMMA = 283,
    POS = 284,
    LBRACKET = 285,
    RBRACKET = 286,
    MOD = 287,
    PLUS = 288,
    MINUS = 289,
    MULT = 290,
    DIV = 291,
    AND = 292,
    OR = 293,
    NOT = 294,
    DMINUS = 295,
    DPLUS = 296,
    RELOP = 297,
    DOT = 298,
    ARROW = 299,
    IDENTIFIER = 300,
    INTEGER = 301,
    CHAR = 302,
    BOOL = 303,
    STRING = 304,
    SEMICOLON = 305,
    IFX = 306,
    AFTER_COMMA = 307,
    BEFORE_COMMA = 308,
    UDMINUS = 309,
    UDPLUS = 310,
    UMINUS = 311,
    POINTER = 312,
    FXL = 313,
    BIGGEST = 314
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
