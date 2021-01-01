/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "src/main.y"

    #include "common.h"
    #define YYSTYPE  Node *  
     Node* root;
    extern int lineno;
    extern table Table;
    // extern function_decl func_list;
    // extern struct_decl struct_list;
    extern  Node* cur;
    int yylex();
    int yyerror( char const * );

#line 83 "src/main.tab.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  61
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1493

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  107
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  235

#define YYUNDEFTOK  2
#define YYMAXUTOK   314


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    65,    65,    68,    69,    73,    74,    75,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    92,    96,
     117,   132,   137,   143,   150,   157,   170,   176,   186,   187,
     188,   189,   196,   197,   204,   211,   220,   227,   234,   241,
     248,   258,   265,   274,   312,   322,   328,   334,   335,   340,
     344,   351,   356,   366,   373,   391,   400,   420,   426,   438,
     445,   454,   461,   473,   480,   489,   494,   504,   508,   518,
     527,   528,   532,   541,   547,   553,   559,   565,   571,   577,
     583,   589,   594,   599,   604,   607,   614,   619,   625,   631,
     637,   638,   639,   640,   641,   645,   654,   658,   659,   660,
     661,   662,   666,   667,   673,   674,   675,   676
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_CHAR", "T_INT", "T_STRING", "T_BOOL",
  "VOID", "EQ_ASSIGN", "PLUS_ASSIGN", "SUB_ASSIGN", "MULT_ASSIGN",
  "DIV_ASSIGN", "WHILE", "FOR", "IF", "ELSE", "RETURN", "PRINTF", "SCANF",
  "TRUE", "FALSE", "STRUCT", "the_CONST", "LPAREN", "RPAREN", "LBRACE",
  "RBRACE", "COMMA", "POS", "LBRACKET", "RBRACKET", "MOD", "PLUS", "MINUS",
  "MULT", "DIV", "AND", "OR", "NOT", "DMINUS", "DPLUS", "RELOP", "DOT",
  "ARROW", "IDENTIFIER", "INTEGER", "CHAR", "BOOL", "STRING", "SEMICOLON",
  "IFX", "AFTER_COMMA", "BEFORE_COMMA", "UDMINUS", "UDPLUS", "UMINUS",
  "POINTER", "FXL", "BIGGEST", "$accept", "program", "statements",
  "statement", "matched_stmt", "unmatched_stmt", "function", "params",
  "struct_decl", "members", "no_init_id_list", "IDENTIFIER_list", "ARRAY",
  "ASSIGN_stmt", "RETURN_stmt", "declaration", "declare_id_list",
  "must_init_declare_id_list", "while_stmt", "for_stmt", "matched_if_stmt",
  "unmatched_if_stmt", "printf_stmt", "scanf_stmt", "expr_stmt", "expr",
  "term", "CONST", "expr_list", "T", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314
};
# endif

#define YYPACT_NINF (-167)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-47)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     864,  -167,  -167,  -167,  -167,    -4,    -3,    -2,  1164,     9,
      19,  -167,  -167,    14,   100,  1164,  1164,  1164,  1164,  1164,
    1164,  -167,  -167,  -167,  -167,  -167,    60,   864,  -167,  -167,
    -167,  -167,  -167,  -167,    52,    62,  -167,  -167,  -167,  -167,
      71,    75,   -20,  1049,  -167,  -167,  1074,  1164,   912,  1164,
    1389,  1194,    70,   103,  1164,    25,   150,   150,   150,   150,
     150,  -167,  -167,  -167,  -167,  -167,  -167,  1164,  -167,  1164,
    1164,  1164,  1164,  1164,  1104,  1164,  1164,  1164,  1164,  1164,
    1164,  1164,  1164,  -167,  -167,  1164,    87,    91,    93,    -5,
     109,  -167,   113,  1049,  1275,  1164,    94,    95,  1134,  1296,
     114,  1389,    69,   119,   100,  -167,   121,  -167,  -167,  1389,
    1389,  1389,  1389,  1389,  -167,    73,  1311,   116,  1449,  1449,
     150,   150,  1419,  1404,  1434,  -167,  -167,  -167,    83,     8,
       8,  1134,   192,  1212,  1164,  1164,    49,   240,  1164,  -167,
    1164,  1164,    31,   -28,  1164,  -167,  -167,   129,    86,   118,
     127,   136,  -167,   864,  -167,  1164,  1233,  1254,   864,  -167,
     152,    92,  -167,    98,     1,   -28,   124,   141,    33,   109,
    -167,   864,   149,   100,   168,  -167,  -167,   288,  1332,  1164,
    1164,   336,   960,  -167,  -167,  -167,  -167,    65,    68,  -167,
     -28,  -167,   384,   864,  -167,     8,  -167,   432,  1353,  1374,
     161,   864,  -167,  -167,   133,  -167,  -167,  -167,  -167,   480,
    -167,   864,  -167,   528,   576,  1007,   624,  -167,  -167,   672,
     864,  -167,   864,  -167,   864,  -167,  -167,  -167,  -167,   720,
     768,   816,  -167,  -167,  -167
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,   105,   104,   106,   107,     0,     0,     0,     0,     0,
       0,   100,   101,     0,     0,     0,     0,     0,     0,     0,
       0,    95,    97,    98,    99,     5,     0,     2,     3,     6,
       7,     8,     9,    71,     0,     0,    10,    11,    17,    18,
       0,     0,     0,    70,    94,    96,     0,     0,     0,     0,
      41,     0,     0,     0,     0,     0,    90,    92,    91,    88,
      86,     1,     4,    12,    13,    14,    15,     0,    16,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    89,    87,     0,     0,     0,     0,    95,
      47,    44,    42,     0,     0,     0,     0,     0,     0,     0,
      99,   102,     0,     0,     0,    49,    43,    93,    72,    40,
      36,    37,    38,    39,    84,     0,     0,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    45,     0,     0,
       0,     0,     0,     0,     0,     0,    95,     0,     0,    67,
       0,     0,     0,     0,     0,    85,    83,     0,     0,     0,
       0,     0,    48,     0,    51,     0,     0,     0,     0,    65,
       6,     0,   103,     0,     0,     0,     0,    29,     0,    30,
      50,     0,     0,     0,    21,    34,    35,     0,     0,     0,
       0,     0,     0,    68,    69,    32,    24,     0,     0,    28,
       0,    26,     0,     0,    23,     0,    52,     0,     0,     0,
      66,     0,    59,    63,     0,    25,    27,    31,    20,     0,
      22,     0,    57,     0,     0,     0,     0,    33,    19,     0,
       0,    53,     0,    54,     0,    60,    64,    61,    58,     0,
       0,     0,    55,    56,    62
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -167,  -167,   -58,   -27,  -134,  -166,  -167,     6,  -167,  -167,
    -159,   -23,  -138,   -22,  -167,   135,    53,    41,  -167,  -167,
    -167,  -167,  -167,  -167,   -11,    -7,  -167,  -115,   -56,   -12
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    26,    27,    28,    29,    30,    31,   148,    32,   142,
     168,   187,    90,    33,    34,    35,    92,   106,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,   102,    46
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      62,    50,    54,   160,    55,   169,   188,   166,    67,    56,
      57,    58,    59,    60,   150,   151,   203,   167,   115,   128,
      47,    48,    49,   -46,    91,   129,    96,   169,    11,    12,
      68,   207,   105,    51,     1,     2,    98,     3,     4,    93,
      94,    93,    99,    52,   101,   -46,   185,    93,   202,   226,
     107,   186,   169,    67,    22,    23,   108,    24,   164,    53,
      61,   190,   109,   110,   111,   112,   113,   101,   116,   117,
     118,   119,   120,   121,   122,   123,    91,   -46,   124,   129,
     210,   225,   161,   191,   162,   163,     1,     2,   133,     3,
       4,    93,   143,   204,   139,   177,   190,   140,   145,   -46,
     181,   140,    63,     1,     2,   154,     3,     4,   147,    91,
     159,   172,    64,   192,   173,   205,   149,   183,   206,   103,
     140,    65,   105,   184,    93,    66,   140,   156,   157,   104,
     165,   101,   125,   101,   101,   209,   126,    93,   127,   130,
      74,   131,   138,   216,   134,   135,    75,   141,   178,   144,
      62,    79,    80,   219,    62,   171,    83,    84,   175,    86,
      87,   149,   229,   174,   230,    62,   231,   176,   182,   189,
     212,   129,   198,   199,    74,   193,   195,   215,   185,   194,
      75,   217,    62,    97,   152,   170,   221,   223,     0,    62,
      83,    84,    62,    86,    87,     1,     2,     0,     3,     4,
       0,     0,    62,    62,    62,     5,     6,     7,     0,     8,
       9,    10,    11,    12,    13,    14,    15,     0,   153,     0,
       0,    16,     0,     0,     0,     0,    17,     0,     0,     0,
       0,    18,    19,    20,     0,     0,     0,    21,    22,    23,
       0,    24,    25,     1,     2,     0,     3,     4,     0,     0,
       0,     0,     0,     5,     6,     7,     0,     8,     9,    10,
      11,    12,    13,    14,    15,     0,   158,     0,     0,    16,
       0,     0,     0,     0,    17,     0,     0,     0,     0,    18,
      19,    20,     0,     0,     0,    21,    22,    23,     0,    24,
      25,     1,     2,     0,     3,     4,     0,     0,     0,     0,
       0,     5,     6,     7,     0,     8,     9,    10,    11,    12,
      13,    14,    15,     0,     0,   196,     0,    16,     0,     0,
       0,     0,    17,     0,     0,     0,     0,    18,    19,    20,
       0,     0,     0,    21,    22,    23,     0,    24,    25,     1,
       2,     0,     3,     4,     0,     0,     0,     0,     0,     5,
       6,     7,     0,     8,     9,    10,    11,    12,    13,    14,
      15,     0,     0,   200,     0,    16,     0,     0,     0,     0,
      17,     0,     0,     0,     0,    18,    19,    20,     0,     0,
       0,    21,    22,    23,     0,    24,    25,     1,     2,     0,
       3,     4,     0,     0,     0,     0,     0,     5,     6,     7,
       0,     8,     9,    10,    11,    12,    13,    14,    15,     0,
       0,   208,     0,    16,     0,     0,     0,     0,    17,     0,
       0,     0,     0,    18,    19,    20,     0,     0,     0,    21,
      22,    23,     0,    24,    25,     1,     2,     0,     3,     4,
       0,     0,     0,     0,     0,     5,     6,     7,     0,     8,
       9,    10,    11,    12,    13,    14,    15,     0,   211,     0,
       0,    16,     0,     0,     0,     0,    17,     0,     0,     0,
       0,    18,    19,    20,     0,     0,     0,    21,    22,    23,
       0,    24,    25,     1,     2,     0,     3,     4,     0,     0,
       0,     0,     0,     5,     6,     7,     0,     8,     9,    10,
      11,    12,    13,    14,    15,     0,     0,   218,     0,    16,
       0,     0,     0,     0,    17,     0,     0,     0,     0,    18,
      19,    20,     0,     0,     0,    21,    22,    23,     0,    24,
      25,     1,     2,     0,     3,     4,     0,     0,     0,     0,
       0,     5,     6,     7,     0,     8,     9,    10,    11,    12,
      13,    14,    15,     0,   220,     0,     0,    16,     0,     0,
       0,     0,    17,     0,     0,     0,     0,    18,    19,    20,
       0,     0,     0,    21,    22,    23,     0,    24,    25,     1,
       2,     0,     3,     4,     0,     0,     0,     0,     0,     5,
       6,     7,     0,     8,     9,    10,    11,    12,    13,    14,
      15,     0,   222,     0,     0,    16,     0,     0,     0,     0,
      17,     0,     0,     0,     0,    18,    19,    20,     0,     0,
       0,    21,    22,    23,     0,    24,    25,     1,     2,     0,
       3,     4,     0,     0,     0,     0,     0,     5,     6,     7,
       0,     8,     9,    10,    11,    12,    13,    14,    15,     0,
       0,   227,     0,    16,     0,     0,     0,     0,    17,     0,
       0,     0,     0,    18,    19,    20,     0,     0,     0,    21,
      22,    23,     0,    24,    25,     1,     2,     0,     3,     4,
       0,     0,     0,     0,     0,     5,     6,     7,     0,     8,
       9,    10,    11,    12,    13,    14,    15,     0,     0,   228,
       0,    16,     0,     0,     0,     0,    17,     0,     0,     0,
       0,    18,    19,    20,     0,     0,     0,    21,    22,    23,
       0,    24,    25,     1,     2,     0,     3,     4,     0,     0,
       0,     0,     0,     5,     6,     7,     0,     8,     9,    10,
      11,    12,    13,    14,    15,     0,     0,   232,     0,    16,
       0,     0,     0,     0,    17,     0,     0,     0,     0,    18,
      19,    20,     0,     0,     0,    21,    22,    23,     0,    24,
      25,     1,     2,     0,     3,     4,     0,     0,     0,     0,
       0,     5,     6,     7,     0,     8,     9,    10,    11,    12,
      13,    14,    15,     0,     0,   233,     0,    16,     0,     0,
       0,     0,    17,     0,     0,     0,     0,    18,    19,    20,
       0,     0,     0,    21,    22,    23,     0,    24,    25,     1,
       2,     0,     3,     4,     0,     0,     0,     0,     0,     5,
       6,     7,     0,     8,     9,    10,    11,    12,    13,    14,
      15,     0,     0,   234,     0,    16,     0,     0,     0,     0,
      17,     0,     0,     0,     0,    18,    19,    20,     0,     0,
       0,    21,    22,    23,     0,    24,    25,     1,     2,     0,
       3,     4,     0,     0,     0,     0,     0,     5,     6,     7,
       0,     8,     9,    10,    11,    12,    13,    14,    15,     0,
       0,     0,     0,    16,     0,     0,     0,     0,    17,     0,
       0,     0,     0,    18,    19,    20,     0,     0,     0,    21,
      22,    23,     0,    24,    25,     1,     2,     0,     3,     4,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,    12,     0,    14,    15,     0,     0,     0,
       0,    16,     0,     0,     0,     0,    17,     0,     0,     0,
       0,    18,    19,    20,     0,     0,     0,    21,    22,    23,
       0,    24,    95,     1,     2,     0,     3,     4,     0,     0,
       0,     0,     0,     5,     6,     7,     0,     8,     9,    10,
      11,    12,    13,    14,    15,     0,   201,     0,     0,    16,
       0,     0,     0,     0,    17,     0,     0,     0,     0,    18,
      19,    20,     0,     0,     0,    21,    22,    23,     0,    24,
       1,     2,     0,     3,     4,     0,     0,     0,     0,     0,
       5,     6,     7,     0,     8,     9,    10,    11,    12,    13,
      14,    15,     0,   224,     0,     0,    16,     0,     0,     0,
       0,    17,     0,     0,     0,     0,    18,    19,    20,     0,
       0,     0,    21,    22,    23,     0,    24,    69,    70,    71,
      72,    73,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    74,     0,     0,     0,     0,     0,    75,
       0,    76,    77,    78,    79,    80,    81,    82,     0,    83,
      84,    85,    86,    87,    11,    12,     0,     0,    15,     0,
       0,     0,     0,    16,     0,     0,     0,     0,    17,    88,
       0,     0,     0,    18,    19,    20,     0,     0,     0,    89,
      22,    23,     0,    24,    11,    12,     0,     0,    15,   114,
       0,     0,     0,    16,     0,     0,     0,     0,    17,     0,
       0,     0,     0,    18,    19,    20,     0,     0,     0,    21,
      22,    23,     0,    24,    11,    12,     0,     0,    15,     0,
       0,     0,     0,    16,     0,     0,     0,     0,    17,    88,
       0,     0,     0,    18,    19,    20,     0,     0,     0,   136,
      22,    23,     0,    24,    11,    12,     0,     0,    15,     0,
       0,     0,     0,    16,     0,     0,     0,     0,    17,     0,
       0,     0,     0,    18,    19,    20,     0,     0,     0,    21,
      22,    23,     0,    24,    11,    12,     0,     0,    15,     0,
       0,     0,     0,    16,     0,     0,     0,     0,    17,     0,
       0,     0,     0,    18,    19,    20,    74,     0,     0,    21,
      22,    23,    75,   100,    76,    77,    78,    79,    80,    81,
      82,     0,    83,    84,    85,    86,    87,    74,     0,     0,
       0,     0,   155,    75,     0,    76,    77,    78,    79,    80,
      81,    82,     0,    83,    84,    85,    86,    87,    74,     0,
       0,     0,     0,   179,    75,     0,    76,    77,    78,    79,
      80,    81,    82,     0,    83,    84,    85,    86,    87,    74,
     132,     0,     0,     0,   180,    75,     0,    76,    77,    78,
      79,    80,    81,    82,     0,    83,    84,    85,    86,    87,
      74,   137,     0,     0,     0,     0,    75,     0,    76,    77,
      78,    79,    80,    81,    82,    74,    83,    84,    85,    86,
      87,    75,   146,    76,    77,    78,    79,    80,    81,    82,
       0,    83,    84,    85,    86,    87,    74,   197,     0,     0,
       0,     0,    75,     0,    76,    77,    78,    79,    80,    81,
      82,     0,    83,    84,    85,    86,    87,    74,   213,     0,
       0,     0,     0,    75,     0,    76,    77,    78,    79,    80,
      81,    82,     0,    83,    84,    85,    86,    87,    74,   214,
       0,     0,     0,     0,    75,     0,    76,    77,    78,    79,
      80,    81,    82,    74,    83,    84,    85,    86,    87,    75,
       0,    76,    77,    78,    79,    80,    81,    82,    74,    83,
      84,    85,    86,    87,    75,     0,    76,    77,    78,    79,
      80,    81,     0,    74,    83,    84,    85,    86,    87,    75,
       0,    76,    77,    78,    79,    80,     0,     0,    74,    83,
      84,    85,    86,    87,    75,     0,    76,    77,    78,    79,
      80,     0,     0,    74,    83,    84,     0,    86,    87,    75,
       0,    76,     0,     0,    79,    80,     0,     0,     0,    83,
      84,     0,    86,    87
};

static const yytype_int16 yycheck[] =
{
      27,     8,    14,   137,    15,   143,   165,    35,    28,    16,
      17,    18,    19,    20,   129,   130,   182,    45,    74,    24,
      24,    24,    24,    28,    46,    30,    48,   165,    20,    21,
      50,   190,    54,    24,     3,     4,    48,     6,     7,    46,
      47,    48,    49,    24,    51,    50,    45,    54,   182,   215,
      25,    50,   190,    28,    46,    47,    67,    49,    27,    45,
       0,    28,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    98,    28,    85,    30,
     195,   215,   138,    50,   140,   141,     3,     4,    95,     6,
       7,    98,   104,    28,    25,   153,    28,    28,    25,    50,
     158,    28,    50,     3,     4,   132,     6,     7,    25,   131,
     137,    25,    50,   171,    28,    50,   128,    25,    50,    49,
      28,    50,   144,    25,   131,    50,    28,   134,   135,    26,
     142,   138,    45,   140,   141,   193,    45,   144,    45,    30,
      24,    28,    28,   201,    50,    50,    30,    28,   155,    28,
     177,    35,    36,   211,   181,    26,    40,    41,    31,    43,
      44,   173,   220,    45,   222,   192,   224,    31,    16,    45,
     197,    30,   179,   180,    24,    26,     8,    16,    45,   173,
      30,   204,   209,    48,   131,   144,   213,   214,    -1,   216,
      40,    41,   219,    43,    44,     3,     4,    -1,     6,     7,
      -1,    -1,   229,   230,   231,    13,    14,    15,    -1,    17,
      18,    19,    20,    21,    22,    23,    24,    -1,    26,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    -1,    45,    46,    47,
      -1,    49,    50,     3,     4,    -1,     6,     7,    -1,    -1,
      -1,    -1,    -1,    13,    14,    15,    -1,    17,    18,    19,
      20,    21,    22,    23,    24,    -1,    26,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    -1,    45,    46,    47,    -1,    49,
      50,     3,     4,    -1,     6,     7,    -1,    -1,    -1,    -1,
      -1,    13,    14,    15,    -1,    17,    18,    19,    20,    21,
      22,    23,    24,    -1,    -1,    27,    -1,    29,    -1,    -1,
      -1,    -1,    34,    -1,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    -1,    45,    46,    47,    -1,    49,    50,     3,
       4,    -1,     6,     7,    -1,    -1,    -1,    -1,    -1,    13,
      14,    15,    -1,    17,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    27,    -1,    29,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
      -1,    45,    46,    47,    -1,    49,    50,     3,     4,    -1,
       6,     7,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,
      -1,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    27,    -1,    29,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    -1,    45,
      46,    47,    -1,    49,    50,     3,     4,    -1,     6,     7,
      -1,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,    17,
      18,    19,    20,    21,    22,    23,    24,    -1,    26,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    -1,    45,    46,    47,
      -1,    49,    50,     3,     4,    -1,     6,     7,    -1,    -1,
      -1,    -1,    -1,    13,    14,    15,    -1,    17,    18,    19,
      20,    21,    22,    23,    24,    -1,    -1,    27,    -1,    29,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    -1,    45,    46,    47,    -1,    49,
      50,     3,     4,    -1,     6,     7,    -1,    -1,    -1,    -1,
      -1,    13,    14,    15,    -1,    17,    18,    19,    20,    21,
      22,    23,    24,    -1,    26,    -1,    -1,    29,    -1,    -1,
      -1,    -1,    34,    -1,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    -1,    45,    46,    47,    -1,    49,    50,     3,
       4,    -1,     6,     7,    -1,    -1,    -1,    -1,    -1,    13,
      14,    15,    -1,    17,    18,    19,    20,    21,    22,    23,
      24,    -1,    26,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
      -1,    45,    46,    47,    -1,    49,    50,     3,     4,    -1,
       6,     7,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,
      -1,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    27,    -1,    29,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    -1,    45,
      46,    47,    -1,    49,    50,     3,     4,    -1,     6,     7,
      -1,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,    17,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,    27,
      -1,    29,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    -1,    45,    46,    47,
      -1,    49,    50,     3,     4,    -1,     6,     7,    -1,    -1,
      -1,    -1,    -1,    13,    14,    15,    -1,    17,    18,    19,
      20,    21,    22,    23,    24,    -1,    -1,    27,    -1,    29,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    -1,    45,    46,    47,    -1,    49,
      50,     3,     4,    -1,     6,     7,    -1,    -1,    -1,    -1,
      -1,    13,    14,    15,    -1,    17,    18,    19,    20,    21,
      22,    23,    24,    -1,    -1,    27,    -1,    29,    -1,    -1,
      -1,    -1,    34,    -1,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    -1,    45,    46,    47,    -1,    49,    50,     3,
       4,    -1,     6,     7,    -1,    -1,    -1,    -1,    -1,    13,
      14,    15,    -1,    17,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    27,    -1,    29,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
      -1,    45,    46,    47,    -1,    49,    50,     3,     4,    -1,
       6,     7,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,
      -1,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    -1,    45,
      46,    47,    -1,    49,    50,     3,     4,    -1,     6,     7,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    21,    -1,    23,    24,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    -1,    45,    46,    47,
      -1,    49,    50,     3,     4,    -1,     6,     7,    -1,    -1,
      -1,    -1,    -1,    13,    14,    15,    -1,    17,    18,    19,
      20,    21,    22,    23,    24,    -1,    26,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    -1,    45,    46,    47,    -1,    49,
       3,     4,    -1,     6,     7,    -1,    -1,    -1,    -1,    -1,
      13,    14,    15,    -1,    17,    18,    19,    20,    21,    22,
      23,    24,    -1,    26,    -1,    -1,    29,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    -1,    45,    46,    47,    -1,    49,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    -1,    40,
      41,    42,    43,    44,    20,    21,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    34,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    -1,    45,
      46,    47,    -1,    49,    20,    21,    -1,    -1,    24,    25,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    -1,    45,
      46,    47,    -1,    49,    20,    21,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    34,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    -1,    45,
      46,    47,    -1,    49,    20,    21,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    -1,    45,
      46,    47,    -1,    49,    20,    21,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    39,    40,    41,    24,    -1,    -1,    45,
      46,    47,    30,    49,    32,    33,    34,    35,    36,    37,
      38,    -1,    40,    41,    42,    43,    44,    24,    -1,    -1,
      -1,    -1,    50,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    -1,    40,    41,    42,    43,    44,    24,    -1,
      -1,    -1,    -1,    50,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    -1,    40,    41,    42,    43,    44,    24,
      25,    -1,    -1,    -1,    50,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    -1,    40,    41,    42,    43,    44,
      24,    25,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    24,    40,    41,    42,    43,
      44,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      -1,    40,    41,    42,    43,    44,    24,    25,    -1,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    -1,    40,    41,    42,    43,    44,    24,    25,    -1,
      -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    -1,    40,    41,    42,    43,    44,    24,    25,
      -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    24,    40,    41,    42,    43,    44,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    24,    40,
      41,    42,    43,    44,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    24,    40,    41,    42,    43,    44,    30,
      -1,    32,    33,    34,    35,    36,    -1,    -1,    24,    40,
      41,    42,    43,    44,    30,    -1,    32,    33,    34,    35,
      36,    -1,    -1,    24,    40,    41,    -1,    43,    44,    30,
      -1,    32,    -1,    -1,    35,    36,    -1,    -1,    -1,    40,
      41,    -1,    43,    44
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     6,     7,    13,    14,    15,    17,    18,
      19,    20,    21,    22,    23,    24,    29,    34,    39,    40,
      41,    45,    46,    47,    49,    50,    61,    62,    63,    64,
      65,    66,    68,    73,    74,    75,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    89,    24,    24,    24,
      85,    24,    24,    45,    89,    84,    85,    85,    85,    85,
      85,     0,    63,    50,    50,    50,    50,    28,    50,     8,
       9,    10,    11,    12,    24,    30,    32,    33,    34,    35,
      36,    37,    38,    40,    41,    42,    43,    44,    35,    45,
      72,    73,    76,    85,    85,    50,    73,    75,    89,    85,
      49,    85,    88,    49,    26,    73,    77,    25,    84,    85,
      85,    85,    85,    85,    25,    88,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    45,    45,    45,    24,    30,
      30,    28,    25,    85,    50,    50,    45,    25,    28,    25,
      28,    28,    69,    89,    28,    25,    31,    25,    67,    89,
      87,    87,    76,    26,    63,    50,    85,    85,    26,    63,
      64,    88,    88,    88,    27,    89,    35,    45,    70,    72,
      77,    26,    25,    28,    45,    31,    31,    62,    85,    50,
      50,    62,    16,    25,    25,    45,    50,    71,    70,    45,
      28,    50,    62,    26,    67,     8,    27,    25,    85,    85,
      27,    26,    64,    65,    28,    50,    50,    70,    27,    62,
      87,    26,    63,    25,    25,    16,    62,    71,    27,    62,
      26,    63,    26,    63,    26,    64,    65,    27,    27,    62,
      62,    62,    27,    27,    27
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    60,    61,    62,    62,    63,    63,    63,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    65,    66,
      66,    67,    67,    67,    68,    68,    69,    69,    70,    70,
      70,    70,    71,    71,    72,    72,    73,    73,    73,    73,
      73,    74,    75,    75,    76,    76,    76,    76,    76,    77,
      77,    78,    78,    79,    79,    79,    79,    79,    79,    80,
      80,    80,    80,    81,    81,    81,    81,    82,    82,    83,
      84,    84,    84,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    86,    86,    87,    87,    87,
      87,    87,    88,    88,    89,    89,    89,    89
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     2,     1,     1,     8,
       7,     2,     4,     3,     6,     7,     3,     4,     2,     1,
       1,     3,     1,     3,     4,     4,     3,     3,     3,     3,
       3,     2,     2,     3,     1,     2,     1,     1,     3,     1,
       3,     5,     7,     9,     9,    11,    11,     8,    10,     7,
       9,     9,    11,     7,     9,     5,     7,     4,     6,     6,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     4,     3,     4,     2,     2,     2,     2,
       2,     2,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 65 "src/main.y"
             {root = new  Node(0, NODE_PROG); root->addChild(yyvsp[0]);}
#line 1777 "src/main.tab.cpp"
    break;

  case 3:
#line 68 "src/main.y"
             {yyval=yyvsp[0];}
#line 1783 "src/main.tab.cpp"
    break;

  case 4:
#line 69 "src/main.y"
                        {yyval=yyvsp[-1]; yyval->addSibling(yyvsp[0]);}
#line 1789 "src/main.tab.cpp"
    break;

  case 5:
#line 73 "src/main.y"
             {yyval = new  Node(lineno, NODE_STMT); yyval->stype = STMT_SKIP;}
#line 1795 "src/main.tab.cpp"
    break;

  case 6:
#line 74 "src/main.y"
                        {yyval = yyvsp[0];}
#line 1801 "src/main.tab.cpp"
    break;

  case 7:
#line 75 "src/main.y"
                 {yyval = yyvsp[0];}
#line 1807 "src/main.tab.cpp"
    break;

  case 8:
#line 79 "src/main.y"
           {yyval = yyvsp[0];}
#line 1813 "src/main.tab.cpp"
    break;

  case 9:
#line 80 "src/main.y"
              {yyval = yyvsp[0];}
#line 1819 "src/main.tab.cpp"
    break;

  case 10:
#line 81 "src/main.y"
             {yyval = yyvsp[0];}
#line 1825 "src/main.tab.cpp"
    break;

  case 11:
#line 82 "src/main.y"
           {yyval = yyvsp[0];}
#line 1831 "src/main.tab.cpp"
    break;

  case 12:
#line 83 "src/main.y"
                        {yyval = yyvsp[-1];}
#line 1837 "src/main.tab.cpp"
    break;

  case 13:
#line 84 "src/main.y"
                        {yyval = yyvsp[-1];}
#line 1843 "src/main.tab.cpp"
    break;

  case 14:
#line 85 "src/main.y"
                        {yyval = yyvsp[-1];}
#line 1849 "src/main.tab.cpp"
    break;

  case 15:
#line 86 "src/main.y"
                       {yyval = yyvsp[-1];}
#line 1855 "src/main.tab.cpp"
    break;

  case 16:
#line 87 "src/main.y"
                      {yyval = yyvsp[-1];}
#line 1861 "src/main.tab.cpp"
    break;

  case 17:
#line 88 "src/main.y"
                  {yyval = yyvsp[0];}
#line 1867 "src/main.tab.cpp"
    break;

  case 18:
#line 92 "src/main.y"
                    {yyval = yyvsp[0];}
#line 1873 "src/main.tab.cpp"
    break;

  case 19:
#line 96 "src/main.y"
                                                             {
    yyvsp[-6]->nodeType = NODE_FUNC_NAME;
     Node* node = new  Node(yyvsp[-7]->lineno, NODE_FUNC);
    node->type = new Type(COMPOSE_FUNCTION);
    node->type->addRet(yyvsp[-7]->type);
     Node* cur = yyvsp[-4];
    while(cur != nullptr)
    {
        node->type->addParam(cur->type);
        cur = cur->sibling;
    }
    node->addChild(yyvsp[-7]);
    node->addChild(yyvsp[-6]);
     Node* child3 = new  Node(yyvsp[-4]->lineno, NODE_LIST);
     Node* child4 = new  Node(yyvsp[-1]->lineno, NODE_LIST);
    child3->addChild(yyvsp[-4]);
    child4->addChild(yyvsp[-1]);
    node->addChild(child3);
    node->addChild(child4);
    yyval = node;
}
#line 1899 "src/main.tab.cpp"
    break;

  case 20:
#line 117 "src/main.y"
                                                      {
    yyvsp[-5]->nodeType = NODE_FUNC_NAME;
     Node* node = new  Node(yyvsp[-6]->lineno, NODE_FUNC);
    node->type = new Type(COMPOSE_FUNCTION);
    node->type->addRet(yyvsp[-6]->type);
     Node* child3 = new  Node(yyvsp[-1]->lineno, NODE_LIST);
    child3->addChild(yyvsp[-1]);
    node->addChild(yyvsp[-6]);
    node->addChild(yyvsp[-5]);
    node->addChild(child3);
    yyval = node;
}
#line 1916 "src/main.tab.cpp"
    break;

  case 21:
#line 132 "src/main.y"
               {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[0]);
    yyvsp[0]->type = cur->type;
}
#line 1926 "src/main.tab.cpp"
    break;

  case 22:
#line 137 "src/main.y"
                               {
    yyval = yyvsp[-3];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
    yyvsp[-2]->type = cur->type;
}
#line 1937 "src/main.tab.cpp"
    break;

  case 23:
#line 143 "src/main.y"
                      {
    yyval = yyvsp[-2];
    yyval->addSibling(yyvsp[0]);
}
#line 1946 "src/main.tab.cpp"
    break;

  case 24:
#line 150 "src/main.y"
                                                   {
    yyval = yyvsp[-5];
    yyval->addChild(yyvsp[-4]);
     Node* child2 = new  Node(yyvsp[-2]->lineno, NODE_LIST);
    child2->addChild(yyvsp[-2]);
    yyval->addChild(child2);
}
#line 1958 "src/main.tab.cpp"
    break;

  case 25:
#line 157 "src/main.y"
                                                                   {
    yyval = yyvsp[-6];
    yyval->addChild(yyvsp[-5]);
     Node* child2 = new  Node(yyvsp[-3]->lineno, NODE_LIST);
    child2->addChild(yyvsp[-3]);
    yyval->addChild(child2);
     Node* child3 = new  Node(yyvsp[-1]->lineno, NODE_LIST);
    child3->addChild(yyvsp[-1]);
    yyval->addChild(child3);
}
#line 1973 "src/main.tab.cpp"
    break;

  case 26:
#line 170 "src/main.y"
                             {
    yyval = yyvsp[-2];
     Node* child1 = new  Node(yyvsp[-1]->lineno, NODE_LIST);
    child1->addChild(yyvsp[-1]);
    yyval->addChild(child1);
}
#line 1984 "src/main.tab.cpp"
    break;

  case 27:
#line 176 "src/main.y"
                                      {
    yyval = yyvsp[-3];
    yyval->addSibling(yyvsp[-2]);
     Node* child1 = new  Node(yyvsp[-1]->lineno, NODE_LIST);
    child1->addChild(yyvsp[-1]);
    yyvsp[-2]->addChild(child1);
}
#line 1996 "src/main.tab.cpp"
    break;

  case 28:
#line 186 "src/main.y"
                               {yyval = yyvsp[0]; yyvsp[0]->type = cur->type;}
#line 2002 "src/main.tab.cpp"
    break;

  case 29:
#line 187 "src/main.y"
             {yyval = yyvsp[0]; yyvsp[0]->type = cur->type;}
#line 2008 "src/main.tab.cpp"
    break;

  case 30:
#line 188 "src/main.y"
        {yyval = yyvsp[0]; }
#line 2014 "src/main.tab.cpp"
    break;

  case 31:
#line 189 "src/main.y"
                                        {
    yyval = yyvsp[-2];
    yyval->addSibling(yyvsp[0]);
}
#line 2023 "src/main.tab.cpp"
    break;

  case 32:
#line 196 "src/main.y"
             {yyval = yyvsp[0];}
#line 2029 "src/main.tab.cpp"
    break;

  case 33:
#line 197 "src/main.y"
                                        {
    yyval = yyvsp[-2];
    yyval->addSibling(yyvsp[0]);
}
#line 2038 "src/main.tab.cpp"
    break;

  case 34:
#line 204 "src/main.y"
                                     {
    yyval = yyvsp[-3];
    yyval->addChild(yyvsp[-2]);
    yyvsp[-2]->addChild(yyvsp[-1]);
    yyvsp[-2]->nodeType = NODE_ARRAY;
    yyvsp[-3]->type = cur->type;
}
#line 2050 "src/main.tab.cpp"
    break;

  case 35:
#line 211 "src/main.y"
                                {
    yyval = yyvsp[-3];
    yyval->addChild(yyvsp[-2]);
    yyvsp[-2]->addChild(yyvsp[-1]);
    yyvsp[-2]->nodeType = NODE_ARRAY;
}
#line 2061 "src/main.tab.cpp"
    break;

  case 36:
#line 220 "src/main.y"
                        {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
    yyvsp[-2]->int_val = yyvsp[-2]->int_val + yyvsp[0]->int_val;
    yyvsp[-2]->given = 1;
}
#line 2073 "src/main.tab.cpp"
    break;

  case 37:
#line 227 "src/main.y"
                       {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
    yyvsp[-2]->int_val = yyvsp[-2]->int_val - yyvsp[0]->int_val;
    yyvsp[-2]->given = 1;
}
#line 2085 "src/main.tab.cpp"
    break;

  case 38:
#line 234 "src/main.y"
                        {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
    yyvsp[-2]->int_val = yyvsp[-2]->int_val * yyvsp[0]->int_val;
    yyvsp[-2]->given = 1;
}
#line 2097 "src/main.tab.cpp"
    break;

  case 39:
#line 241 "src/main.y"
                       {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
    yyvsp[-2]->int_val = yyvsp[-2]->int_val / yyvsp[0]->int_val;
    yyvsp[-2]->given = 1;
}
#line 2109 "src/main.tab.cpp"
    break;

  case 40:
#line 248 "src/main.y"
                      {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
    yyvsp[-2]->int_val = yyvsp[0]->int_val;
    yyvsp[-2]->given = 1;
}
#line 2121 "src/main.tab.cpp"
    break;

  case 41:
#line 258 "src/main.y"
              {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[0]);
}
#line 2130 "src/main.tab.cpp"
    break;

  case 42:
#line 265 "src/main.y"
                    { // declare and init
     Node* node = new  Node(yyvsp[-1]->lineno, NODE_STMT);
    node->stype = STMT_DECL;
    node->addChild(yyvsp[-1]);
     Node* child2 = new  Node(yyvsp[0]->lineno, NODE_LIST);
    child2->addChild(yyvsp[0]);
    node->addChild(child2);
    yyval = node; 
}
#line 2144 "src/main.tab.cpp"
    break;

  case 43:
#line 274 "src/main.y"
                                        {
     Node* node = new  Node(yyvsp[-1]->lineno, NODE_STMT);
    node->stype = STMT_DECL;
    node->addChild(yyvsp[-1]);
     Node* child3 = new  Node(yyvsp[0]->lineno, NODE_LIST);
    child3->addChild(yyvsp[0]);
    node->addChild(child3);
     Node* child = yyvsp[0];
    while(child != nullptr)
    {
        if(child->child->nodeType == NODE_VAR)
        {
            child->child->nodeType = NODE_CONST_VAR;
            child->child->type = yyvsp[-1]->type;
            switch(yyvsp[-1]->type->type) {
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
    yyval = node;
}
#line 2184 "src/main.tab.cpp"
    break;

  case 44:
#line 312 "src/main.y"
              {
    if(yyvsp[0]->optype != OP_ASSIGN) yyerror("初始化错误");
    yyval = yyvsp[0];
    yyval->nodeType = NODE_INIT;
    yyvsp[0]->child->given = 1;
    Table.add_symbol(yyvsp[0]->child);
    yyvsp[0]->type = cur->type;
    yyvsp[0]->child->type = cur->type;
    Table.change(yyvsp[0]->child->var_name, yyvsp[0]->child->int_val);
}
#line 2199 "src/main.tab.cpp"
    break;

  case 45:
#line 322 "src/main.y"
                                {
    yyval = yyvsp[0];
    yyvsp[0]->given = 0;
    Table.add_symbol(yyvsp[0]);
    yyvsp[0]->type = cur->type;
}
#line 2210 "src/main.tab.cpp"
    break;

  case 46:
#line 328 "src/main.y"
             {
    yyval = yyvsp[0];
    yyvsp[0]->given = 0;
    Table.add_symbol(yyvsp[0]);
    yyvsp[0]->type = cur->type;
}
#line 2221 "src/main.tab.cpp"
    break;

  case 47:
#line 334 "src/main.y"
        {yyval = yyvsp[0]; yyvsp[0]->given = 0; }
#line 2227 "src/main.tab.cpp"
    break;

  case 48:
#line 335 "src/main.y"
                                        {yyval = yyvsp[-2]; yyval->addSibling(yyvsp[0]);}
#line 2233 "src/main.tab.cpp"
    break;

  case 49:
#line 340 "src/main.y"
              {
    yyval = yyvsp[0];
    yyval->nodeType = NODE_INIT;
}
#line 2242 "src/main.tab.cpp"
    break;

  case 50:
#line 344 "src/main.y"
                                                            {
    yyval = yyvsp[-2];
    yyval->addSibling(yyvsp[0]);
}
#line 2251 "src/main.tab.cpp"
    break;

  case 51:
#line 351 "src/main.y"
                                     {
    yyval = yyvsp[-4];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
}
#line 2261 "src/main.tab.cpp"
    break;

  case 52:
#line 356 "src/main.y"
                                                    {
    yyval = yyvsp[-6];
    yyval->addChild(yyvsp[-4]);
     Node* child2 = new  Node(yyvsp[-1]->lineno, NODE_LIST);
    child2->addChild(yyvsp[-1]);
    yyval->addChild(child2);
}
#line 2273 "src/main.tab.cpp"
    break;

  case 53:
#line 366 "src/main.y"
                                                                        {
    yyval = yyvsp[-8];
    yyval->addChild(yyvsp[-6]);
    yyval->addChild(yyvsp[-4]);
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
}
#line 2285 "src/main.tab.cpp"
    break;

  case 54:
#line 373 "src/main.y"
                                                                        {
    yyval = yyvsp[-8];
    yyval->addChild(yyvsp[-6]);
    yyval->addChild(yyvsp[-4]);
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
     Node* child = yyvsp[-6]->child->sibling->child;
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
#line 2308 "src/main.tab.cpp"
    break;

  case 55:
#line 391 "src/main.y"
                                                                                       {
    yyval = yyvsp[-10];
    yyval->addChild(yyvsp[-8]);
    yyval->addChild(yyvsp[-6]);
    yyval->addChild(yyvsp[-4]);
     Node* child4 = new  Node(yyvsp[-1]->lineno, NODE_LIST);
    child4->addChild(yyvsp[-1]);
    yyval->addChild(child4);
}
#line 2322 "src/main.tab.cpp"
    break;

  case 56:
#line 400 "src/main.y"
                                                                                       {
    yyval = yyvsp[-10];
    yyval->addChild(yyvsp[-8]);
    yyval->addChild(yyvsp[-6]);
    yyval->addChild(yyvsp[-4]);
     Node* child4 = new  Node(yyvsp[-1]->lineno, NODE_LIST);
    child4->addChild(yyvsp[-1]);
    yyval->addChild(child4);
     Node* child = yyvsp[-8]->child->sibling->child;
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
#line 2347 "src/main.tab.cpp"
    break;

  case 57:
#line 420 "src/main.y"
                                                            {
    yyval = yyvsp[-7];
    yyval->addChild(yyvsp[-4]);
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
}
#line 2358 "src/main.tab.cpp"
    break;

  case 58:
#line 426 "src/main.y"
                                                                           {
    yyval = yyvsp[-9];
    yyval->addChild(yyvsp[-6]);
    yyval->addChild(yyvsp[-4]);
     Node* child3 = new  Node(yyvsp[-1]->lineno, NODE_LIST);
    child3->addChild(yyvsp[-1]);
    yyval->addChild(child3);
}
#line 2371 "src/main.tab.cpp"
    break;

  case 59:
#line 438 "src/main.y"
                                                       {
    yyval = yyvsp[-6];
    yyval->addChild(yyvsp[-4]);
    yyval->addChild(yyvsp[-2]);
    yyval->addSibling(yyvsp[-1]);
    yyvsp[-1]->addChild(yyvsp[0]);
}
#line 2383 "src/main.tab.cpp"
    break;

  case 60:
#line 445 "src/main.y"
                                                                   {
    yyval = yyvsp[-8];
    yyval->addChild(yyvsp[-6]);
     Node* child2 = new  Node(yyvsp[-3]->lineno, NODE_LIST);
    child2->addChild(yyvsp[-3]);
    yyval->addChild(child2);
    yyval->addSibling(yyvsp[-1]);
    yyvsp[-1]->addChild(yyvsp[0]);
}
#line 2397 "src/main.tab.cpp"
    break;

  case 61:
#line 454 "src/main.y"
                                                                   {
    yyval = yyvsp[-8];
    yyval->addChild(yyvsp[-6]);
    yyval->addChild(yyvsp[-4]);
    yyval->addSibling(yyvsp[-3]);
    yyvsp[-3]->addChild(yyvsp[-1]);
}
#line 2409 "src/main.tab.cpp"
    break;

  case 62:
#line 461 "src/main.y"
                                                                               {
    yyval = yyvsp[-10];
    yyval->addChild(yyvsp[-8]);
     Node* child2 = new  Node(yyvsp[-5]->lineno, NODE_LIST);
    child2->addChild(yyvsp[-5]);
    yyval->addChild(child2);
    yyval->addSibling(yyvsp[-3]);
    yyvsp[-3]->addChild(yyvsp[-1]);
}
#line 2423 "src/main.tab.cpp"
    break;

  case 63:
#line 473 "src/main.y"
                                                         {
    yyval = yyvsp[-6];
    yyval->addChild(yyvsp[-4]);
    yyval->addChild(yyvsp[-2]);
    yyval->addSibling(yyvsp[-1]);
    yyvsp[-1]->addChild(yyvsp[0]);
}
#line 2435 "src/main.tab.cpp"
    break;

  case 64:
#line 480 "src/main.y"
                                                                     {
    yyval = yyvsp[-8];
    yyval->addChild(yyvsp[-6]);
     Node* child2 = new  Node(yyvsp[-3]->lineno, NODE_LIST);
    child2->addChild(yyvsp[-3]);
    yyval->addChild(child2);
    yyval->addSibling(yyvsp[-1]);
    yyvsp[-1]->addChild(yyvsp[0]);
}
#line 2449 "src/main.tab.cpp"
    break;

  case 65:
#line 489 "src/main.y"
                                  {
    yyval = yyvsp[-4];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
}
#line 2459 "src/main.tab.cpp"
    break;

  case 66:
#line 494 "src/main.y"
                                                           {
    yyval = yyvsp[-6];
    yyval->addChild(yyvsp[-4]);
     Node* child2 = new  Node(yyvsp[-1]->lineno, NODE_LIST);
    child2->addChild(yyvsp[-1]);
    yyval->addChild(child2);
}
#line 2471 "src/main.tab.cpp"
    break;

  case 67:
#line 504 "src/main.y"
                                 {
    yyval = yyvsp[-3];
    yyval->addChild(yyvsp[-1]);
}
#line 2480 "src/main.tab.cpp"
    break;

  case 68:
#line 508 "src/main.y"
                                              {
    yyval = yyvsp[-5];
    yyval->addChild(yyvsp[-3]);
     Node* child2 = new  Node(yyvsp[-1]->lineno, NODE_LIST);
    child2->addChild(yyvsp[-1]);
    yyval->addChild(child2);
}
#line 2492 "src/main.tab.cpp"
    break;

  case 69:
#line 518 "src/main.y"
                                             {
    yyval = yyvsp[-5];
    yyval->addChild(yyvsp[-3]);
     Node* child2 = new  Node(yyvsp[-1]->lineno, NODE_LIST);
    child2->addChild(yyvsp[-1]);
    yyval->addChild(child2);
}
#line 2504 "src/main.tab.cpp"
    break;

  case 70:
#line 527 "src/main.y"
       {yyval = yyvsp[0];}
#line 2510 "src/main.tab.cpp"
    break;

  case 71:
#line 528 "src/main.y"
              {
    yyval = yyvsp[0];
    Table.change(yyvsp[0]->child->var_name, yyvsp[0]->child->sibling->int_val);
}
#line 2519 "src/main.tab.cpp"
    break;

  case 72:
#line 532 "src/main.y"
                            {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
    yyval->int_val = yyvsp[0]->int_val;
}
#line 2530 "src/main.tab.cpp"
    break;

  case 73:
#line 541 "src/main.y"
                {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
    yyval->int_val = yyvsp[-2]->int_val % yyvsp[0]->int_val;
}
#line 2541 "src/main.tab.cpp"
    break;

  case 74:
#line 547 "src/main.y"
                 {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
    yyval->int_val = yyvsp[-2]->int_val + yyvsp[0]->int_val;
}
#line 2552 "src/main.tab.cpp"
    break;

  case 75:
#line 553 "src/main.y"
                 {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
    yyval->int_val = yyvsp[-2]->int_val - yyvsp[0]->int_val;
}
#line 2563 "src/main.tab.cpp"
    break;

  case 76:
#line 559 "src/main.y"
                {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
    yyval->int_val = yyvsp[-2]->int_val * yyvsp[0]->int_val;
}
#line 2574 "src/main.tab.cpp"
    break;

  case 77:
#line 565 "src/main.y"
               {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
    yyval->int_val = yyvsp[-2]->int_val / yyvsp[0]->int_val;
}
#line 2585 "src/main.tab.cpp"
    break;

  case 78:
#line 571 "src/main.y"
               {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
    yyval->int_val = yyvsp[-2]->int_val && yyvsp[0]->int_val;
}
#line 2596 "src/main.tab.cpp"
    break;

  case 79:
#line 577 "src/main.y"
              {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
    yyval->int_val = yyvsp[-2]->int_val || yyvsp[0]->int_val;
}
#line 2607 "src/main.tab.cpp"
    break;

  case 80:
#line 583 "src/main.y"
                 {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
    yyval->int_val = 1;
}
#line 2618 "src/main.tab.cpp"
    break;

  case 81:
#line 589 "src/main.y"
                      {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
}
#line 2628 "src/main.tab.cpp"
    break;

  case 82:
#line 594 "src/main.y"
                        {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
}
#line 2638 "src/main.tab.cpp"
    break;

  case 83:
#line 599 "src/main.y"
                              {
    yyval = yyvsp[-2];
    yyval->addChild(yyvsp[-3]);
    yyval->addChild(yyvsp[-1]);
}
#line 2648 "src/main.tab.cpp"
    break;

  case 84:
#line 604 "src/main.y"
                     {
    yyval = yyvsp[-2];
}
#line 2656 "src/main.tab.cpp"
    break;

  case 85:
#line 607 "src/main.y"
                               {
    yyval = yyvsp[-3];
    yyval->nodeType = NODE_FUNC;
     Node* child1 = new  Node(yyvsp[-1]->lineno, NODE_LIST);
    child1->addChild(yyvsp[-1]);
    yyval->addChild(child1);
}
#line 2668 "src/main.tab.cpp"
    break;

  case 86:
#line 614 "src/main.y"
                          {
    yyval = yyvsp[0]; yyval->addChild(yyvsp[-1]); 
    yyval->int_val = yyvsp[0]->int_val + 1; 
    //$2->int_val = $2->int_val + 1;
}
#line 2678 "src/main.tab.cpp"
    break;

  case 87:
#line 619 "src/main.y"
             {
    yyval = yyvsp[0]; 
    yyval->addChild(yyvsp[-1]); 
    yyval->int_val = yyvsp[-1]->int_val + 1; 
    //$1->int_val = $1->int_val + 1;
}
#line 2689 "src/main.tab.cpp"
    break;

  case 88:
#line 625 "src/main.y"
                            {
    yyval = yyvsp[0]; 
    yyval->addChild(yyvsp[-1]); 
    yyval->int_val = yyvsp[0]->int_val - 1; 
    //$2->int_val = $2->int_val - 1;
}
#line 2700 "src/main.tab.cpp"
    break;

  case 89:
#line 631 "src/main.y"
              {
    yyval = yyvsp[0]; 
    yyval->addChild(yyvsp[-1]); 
    yyval->int_val = yyvsp[-1]->int_val - 1; 
    //$1->int_val = $1->int_val - 1;
}
#line 2711 "src/main.tab.cpp"
    break;

  case 90:
#line 637 "src/main.y"
           {yyval = yyvsp[-1];yyval->addChild(yyvsp[0]);}
#line 2717 "src/main.tab.cpp"
    break;

  case 91:
#line 638 "src/main.y"
           {yyval = yyvsp[-1]; yyval->addChild(yyvsp[0]); yyval->int_val = !(yyvsp[-1]->int_val);}
#line 2723 "src/main.tab.cpp"
    break;

  case 92:
#line 639 "src/main.y"
                          { yyval = yyvsp[-1]; yyval->addChild(yyvsp[0]); yyval->int_val = -(yyvsp[-1]->int_val);}
#line 2729 "src/main.tab.cpp"
    break;

  case 93:
#line 640 "src/main.y"
                          {yyval = yyvsp[-2]; yyval->addChild(yyvsp[-1]); yyval->int_val = yyvsp[-1]->int_val;}
#line 2735 "src/main.tab.cpp"
    break;

  case 94:
#line 641 "src/main.y"
       {yyval = yyvsp[0];}
#line 2741 "src/main.tab.cpp"
    break;

  case 95:
#line 645 "src/main.y"
                       { 
    scope* this_scope = Table.find_symbol(yyvsp[0]->var_name);
    if(this_scope != nullptr)
    {    
        this_scope->copy_to(yyvsp[0]);
        //cout<<$1->int_val<<endl;
    }
    yyval = yyvsp[0];
}
#line 2755 "src/main.tab.cpp"
    break;

  case 96:
#line 654 "src/main.y"
        {yyval = yyvsp[0];}
#line 2761 "src/main.tab.cpp"
    break;

  case 97:
#line 658 "src/main.y"
          {yyval = yyvsp[0];}
#line 2767 "src/main.tab.cpp"
    break;

  case 98:
#line 659 "src/main.y"
       {yyval = yyvsp[0];}
#line 2773 "src/main.tab.cpp"
    break;

  case 99:
#line 660 "src/main.y"
                           {yyval = yyvsp[0];}
#line 2779 "src/main.tab.cpp"
    break;

  case 100:
#line 661 "src/main.y"
       {yyval = yyvsp[0];}
#line 2785 "src/main.tab.cpp"
    break;

  case 101:
#line 662 "src/main.y"
        {yyval = yyvsp[0];}
#line 2791 "src/main.tab.cpp"
    break;

  case 102:
#line 666 "src/main.y"
       {yyval = yyvsp[0];}
#line 2797 "src/main.tab.cpp"
    break;

  case 103:
#line 667 "src/main.y"
                            {
    yyval = yyvsp[-2];
    yyval->addSibling(yyvsp[0]);
}
#line 2806 "src/main.tab.cpp"
    break;

  case 104:
#line 673 "src/main.y"
         {yyval = new  Node(lineno, NODE_TYPE); yyval->type = TYPE_INT; cur = yyval;}
#line 2812 "src/main.tab.cpp"
    break;

  case 105:
#line 674 "src/main.y"
         {yyval = new  Node(lineno, NODE_TYPE); yyval->type = TYPE_CHAR; cur = yyval;}
#line 2818 "src/main.tab.cpp"
    break;

  case 106:
#line 675 "src/main.y"
         {yyval = new  Node(lineno, NODE_TYPE); yyval->type = TYPE_BOOL; cur = yyval;}
#line 2824 "src/main.tab.cpp"
    break;

  case 107:
#line 676 "src/main.y"
       {yyval = new  Node(lineno, NODE_TYPE); yyval->type = TYPE_VOID; cur = yyval;}
#line 2830 "src/main.tab.cpp"
    break;


#line 2834 "src/main.tab.cpp"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 680 "src/main.y"


int yyerror(char const* message)
{
    cout << message << " at line " << lineno << endl;
    return -1;
}
