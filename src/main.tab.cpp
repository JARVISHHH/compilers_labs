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

#line 89 "src/main.tab.cpp"

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
#define YYFINAL  65
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1334

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  102
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  211

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
       0,    72,    72,    82,    83,    87,    97,    98,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   114,   118,   135,
     154,   169,   183,   190,   203,   212,   217,   222,   227,   232,
     237,   244,   251,   258,   265,   275,   282,   290,   303,   312,
     318,   328,   351,   356,   363,   370,   375,   386,   394,   416,
     427,   452,   461,   477,   484,   494,   505,   524,   531,   542,
     547,   558,   564,   570,   582,   597,   601,   606,   614,   621,
     628,   635,   642,   649,   656,   663,   671,   678,   688,   692,
     696,   700,   704,   710,   717,   724,   730,   731,   734,   739,
     743,   753,   757,   758,   761,   766,   767,   771,   772,   778,
     782,   786,   790
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_CHAR", "T_INT", "T_STRING", "T_BOOL",
  "T_VOID", "EQ_ASSIGN", "PLUS_ASSIGN", "SUB_ASSIGN", "MULT_ASSIGN",
  "DIV_ASSIGN", "WHILE", "FOR", "IF", "ELSE", "RETURN", "PRINTF", "SCANF",
  "TRUE", "FALSE", "STRUCT", "the_CONST", "LPAREN", "RPAREN", "LBRACE",
  "RBRACE", "COMMA", "POS", "LBRACKET", "RBRACKET", "MOD", "PLUS", "MINUS",
  "MULT", "DIV", "AND", "OR", "NOT", "DMINUS", "DPLUS", "RELOP", "DOT",
  "ARROW", "IDENTIFIER", "INTEGER", "CHAR", "BOOL", "STRING", "SEMICOLON",
  "IFX", "AFTER_COMMA", "BEFORE_COMMA", "UDMINUS", "UDPLUS", "UMINUS",
  "POINTER", "FXL", "BIGGEST", "$accept", "program", "statements",
  "statement", "matched_stmt", "unmatched_stmt", "function",
  "funtion_head", "params", "ARRAY", "ASSIGN_stmt", "RETURN_stmt",
  "declaration", "declare_id_list", "must_init_declare_id_list",
  "while_stmt", "for_stmt", "matched_if_stmt", "unmatched_if_stmt",
  "printf_stmt", "scanf_stmt", "expr_stmt", "expr", "term", "CONST",
  "expr_list", "T", YY_NULLPTR
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

#define YYPACT_NINF (-172)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-42)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     804,  -172,  -172,  -172,  -172,   -20,   -16,   -15,  1042,    -7,
      13,  -172,  -172,    58,  1042,  1042,  1042,  1042,  1042,  1042,
    1042,  1042,   -12,  -172,  -172,  -172,  -172,    29,   804,  -172,
    -172,  -172,  -172,    25,    27,  -172,     8,    17,  -172,  -172,
    -172,  -172,    18,    34,    -3,   989,  -172,  -172,  1072,  1042,
     852,  1042,  1263,  1102,    56,  1042,    41,    12,    12,    12,
      12,    12,    12,    12,  1042,  -172,  -172,   804,  1042,  -172,
    -172,  -172,  -172,  1042,  -172,  1042,  1042,  1042,  1042,  1042,
    1012,  1042,  1042,  1042,  1042,  1042,  1042,  1042,  -172,  -172,
    1042,  1132,    -4,    -9,  -172,    99,   989,  1218,  1042,    82,
      83,  1162,    63,    73,  1263,    78,   109,  -172,   123,  -172,
    1233,   180,  1248,  -172,  -172,   989,  -172,   989,  -172,   989,
    -172,   989,  -172,   989,  -172,    79,   133,    76,    76,    12,
      12,  1292,  1278,   971,     4,    24,  1162,   228,   828,  1042,
    1042,     5,   276,  -172,  1042,  -172,  1042,  1042,  1042,  -172,
    -172,  -172,  -172,  -172,    85,   110,  -172,   804,  -172,  1042,
    1180,  1199,   804,  -172,   142,    90,  -172,   100,  -172,  -172,
      58,  -172,   324,   122,  1042,  1042,   372,   900,  -172,  -172,
    -172,  -172,   420,   124,   128,   144,   804,  -172,  -172,   804,
    -172,   468,   516,   947,   564,   612,   804,  -172,   804,  -172,
     804,  -172,  -172,  -172,  -172,   660,   708,   756,  -172,  -172,
    -172
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,   100,    99,   101,   102,     0,     0,     0,     0,     0,
       0,    95,    96,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    90,    92,    93,    94,     5,     0,     2,     3,
       6,     7,     8,     0,    88,    66,     0,     0,     9,    10,
      16,    17,     0,     0,     0,    65,    89,    91,     0,     0,
       0,     0,    35,     0,     0,     0,     0,    82,    86,    85,
      83,    84,    80,    78,     0,     1,     4,     0,     0,    11,
      15,    12,    13,     0,    14,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    81,    79,
       0,     0,    90,    88,    38,    36,     0,     0,     0,     0,
       0,     0,     0,    94,    97,     0,     0,    43,    37,    87,
       0,     0,     0,    67,    34,    29,    30,    25,    31,    26,
      32,    27,    33,    28,    76,     0,    68,    69,    70,    71,
      72,    73,    74,    75,    90,     0,     0,     0,     0,     0,
       0,    90,     0,    62,     0,    61,     0,     0,     0,    23,
      18,    24,    77,    20,     0,     0,    42,     0,    45,     0,
       0,     0,     0,    59,     6,     0,    98,     0,    44,    19,
       0,    21,     0,     0,     0,     0,     0,     0,    63,    64,
      22,    46,     0,     0,     0,    60,     0,    53,    57,     0,
      51,     0,     0,     0,     0,     0,     0,    47,     0,    48,
       0,    54,    58,    55,    52,     0,     0,     0,    49,    50,
      56
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -172,  -172,   -60,   -28,  -137,  -171,  -172,  -172,     0,    -6,
      44,  -172,   115,    35,    28,  -172,  -172,  -172,  -172,  -172,
    -172,   -13,    -5,  -172,  -172,   -57,   -11
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    27,    28,    29,    30,    31,    32,    33,   154,    34,
      35,    36,    37,    95,   108,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,   105,    48
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      66,    56,    55,    52,    49,   164,   188,   111,    50,    51,
      57,    58,    59,    60,    61,    62,    63,    53,    64,   -41,
     135,    68,   202,   125,   -39,    73,    64,     1,     2,    65,
       3,     4,   -40,   -39,    64,    64,    80,    54,   102,   101,
     187,   -41,    93,    96,    97,    96,   -39,    74,   104,   153,
      96,    67,    88,    89,   -40,   -39,   201,    68,    69,   110,
     113,     1,     2,   112,     3,     4,   109,    70,    71,    73,
     115,   117,   119,   121,   123,   104,   126,   127,   128,   129,
     130,   131,   132,    66,    72,   133,    60,   165,   142,   166,
     167,    73,    94,   138,    99,    93,    96,   172,   143,   107,
      80,   144,   176,   145,   152,   106,   146,   146,    81,   158,
     169,    84,    85,   170,   163,   178,    88,    89,   146,   114,
     116,   118,   120,   122,   155,   179,   194,   136,   146,   195,
      93,    96,   139,   140,   160,   161,   205,   147,   206,   104,
     207,   104,   104,    96,    66,    94,   173,   182,    66,   191,
      73,   148,    73,   192,   190,   171,    73,    80,   177,   155,
     193,   183,   184,   197,   199,   100,    66,    66,    84,    85,
     180,   156,     0,    88,    89,     0,   168,    66,    66,    66,
      94,     0,     0,     1,     2,     0,     3,     4,     0,     0,
       0,     0,   107,     5,     6,     7,     0,     8,     9,    10,
      11,    12,     0,    13,    14,     0,     0,   150,     0,    15,
       0,     0,     0,    16,    17,    18,     0,     0,     0,    19,
      20,    21,     0,     0,     0,    22,    23,    24,     0,    25,
      26,     1,     2,     0,     3,     4,     0,     0,     0,     0,
       0,     5,     6,     7,     0,     8,     9,    10,    11,    12,
       0,    13,    14,     0,   157,     0,     0,    15,     0,     0,
       0,    16,    17,    18,     0,     0,     0,    19,    20,    21,
       0,     0,     0,    22,    23,    24,     0,    25,    26,     1,
       2,     0,     3,     4,     0,     0,     0,     0,     0,     5,
       6,     7,     0,     8,     9,    10,    11,    12,     0,    13,
      14,     0,   162,     0,     0,    15,     0,     0,     0,    16,
      17,    18,     0,     0,     0,    19,    20,    21,     0,     0,
       0,    22,    23,    24,     0,    25,    26,     1,     2,     0,
       3,     4,     0,     0,     0,     0,     0,     5,     6,     7,
       0,     8,     9,    10,    11,    12,     0,    13,    14,     0,
       0,   181,     0,    15,     0,     0,     0,    16,    17,    18,
       0,     0,     0,    19,    20,    21,     0,     0,     0,    22,
      23,    24,     0,    25,    26,     1,     2,     0,     3,     4,
       0,     0,     0,     0,     0,     5,     6,     7,     0,     8,
       9,    10,    11,    12,     0,    13,    14,     0,     0,   185,
       0,    15,     0,     0,     0,    16,    17,    18,     0,     0,
       0,    19,    20,    21,     0,     0,     0,    22,    23,    24,
       0,    25,    26,     1,     2,     0,     3,     4,     0,     0,
       0,     0,     0,     5,     6,     7,     0,     8,     9,    10,
      11,    12,     0,    13,    14,     0,   189,     0,     0,    15,
       0,     0,     0,    16,    17,    18,     0,     0,     0,    19,
      20,    21,     0,     0,     0,    22,    23,    24,     0,    25,
      26,     1,     2,     0,     3,     4,     0,     0,     0,     0,
       0,     5,     6,     7,     0,     8,     9,    10,    11,    12,
       0,    13,    14,     0,   196,     0,     0,    15,     0,     0,
       0,    16,    17,    18,     0,     0,     0,    19,    20,    21,
       0,     0,     0,    22,    23,    24,     0,    25,    26,     1,
       2,     0,     3,     4,     0,     0,     0,     0,     0,     5,
       6,     7,     0,     8,     9,    10,    11,    12,     0,    13,
      14,     0,   198,     0,     0,    15,     0,     0,     0,    16,
      17,    18,     0,     0,     0,    19,    20,    21,     0,     0,
       0,    22,    23,    24,     0,    25,    26,     1,     2,     0,
       3,     4,     0,     0,     0,     0,     0,     5,     6,     7,
       0,     8,     9,    10,    11,    12,     0,    13,    14,     0,
       0,   203,     0,    15,     0,     0,     0,    16,    17,    18,
       0,     0,     0,    19,    20,    21,     0,     0,     0,    22,
      23,    24,     0,    25,    26,     1,     2,     0,     3,     4,
       0,     0,     0,     0,     0,     5,     6,     7,     0,     8,
       9,    10,    11,    12,     0,    13,    14,     0,     0,   204,
       0,    15,     0,     0,     0,    16,    17,    18,     0,     0,
       0,    19,    20,    21,     0,     0,     0,    22,    23,    24,
       0,    25,    26,     1,     2,     0,     3,     4,     0,     0,
       0,     0,     0,     5,     6,     7,     0,     8,     9,    10,
      11,    12,     0,    13,    14,     0,     0,   208,     0,    15,
       0,     0,     0,    16,    17,    18,     0,     0,     0,    19,
      20,    21,     0,     0,     0,    22,    23,    24,     0,    25,
      26,     1,     2,     0,     3,     4,     0,     0,     0,     0,
       0,     5,     6,     7,     0,     8,     9,    10,    11,    12,
       0,    13,    14,     0,     0,   209,     0,    15,     0,     0,
       0,    16,    17,    18,     0,     0,     0,    19,    20,    21,
       0,     0,     0,    22,    23,    24,     0,    25,    26,     1,
       2,     0,     3,     4,     0,     0,     0,     0,     0,     5,
       6,     7,     0,     8,     9,    10,    11,    12,     0,    13,
      14,     0,     0,   210,     0,    15,     0,     0,     0,    16,
      17,    18,     0,     0,     0,    19,    20,    21,     0,     0,
       0,    22,    23,    24,     0,    25,    26,     1,     2,     0,
       3,     4,     0,     0,     0,     0,     0,     5,     6,     7,
       0,     8,     9,    10,    11,    12,     0,    13,    14,     0,
       0,     0,     0,    15,     0,     0,     0,    16,    17,    18,
       0,     0,     0,    19,    20,    21,     0,     0,     0,    22,
      23,    24,    80,    25,    26,     1,     2,     0,     3,     4,
      81,    82,    83,    84,    85,    86,    87,     0,    88,    89,
      90,     0,    11,    12,     0,    13,    14,     0,   159,     0,
       0,    15,     0,     0,     0,    16,    17,    18,     0,     0,
       0,    19,    20,    21,     0,     0,     0,    22,    23,    24,
       0,    25,    98,     1,     2,     0,     3,     4,     0,     0,
       0,     0,     0,     5,     6,     7,     0,     8,     9,    10,
      11,    12,     0,    13,    14,     0,   186,     0,     0,    15,
       0,     0,     0,    16,    17,    18,     0,     0,     0,    19,
      20,    21,     0,     0,     0,    22,    23,    24,     0,    25,
       1,     2,     0,     3,     4,     0,     0,     0,     0,     0,
       5,     6,     7,     0,     8,     9,    10,    11,    12,     0,
      13,    14,     0,   200,     0,     0,    15,     0,     0,     0,
      16,    17,    18,     0,     0,     0,    19,    20,    21,     0,
       0,     0,    22,    23,    24,    80,    25,    75,    76,    77,
      78,    79,     0,    81,    82,    83,    84,    85,     0,     0,
       0,    88,    89,    80,     0,     0,     0,     0,     0,     0,
       0,    81,    82,    83,    84,    85,    86,    87,     0,    88,
      89,    90,    11,    12,     0,     0,    14,   124,     0,     0,
       0,    15,     0,     0,     0,    16,    17,    18,     0,     0,
       0,    19,    20,    21,     0,     0,     0,    22,    23,    24,
       0,    25,    11,    12,     0,     0,    14,     0,     0,     0,
       0,    15,     0,     0,     0,    16,    17,    18,     0,     0,
       0,    19,    20,    21,     0,     0,     0,    22,    23,    24,
       0,    25,    11,    12,     0,     0,    14,     0,     0,     0,
       0,    15,     0,     0,     0,    16,    17,    91,     0,     0,
       0,    19,    20,    21,     0,     0,     0,    92,    23,    24,
       0,    25,    11,    12,     0,     0,    14,     0,     0,     0,
       0,    15,     0,     0,     0,    16,    17,    18,     0,     0,
       0,    19,    20,    21,     0,     0,     0,    22,    23,    24,
       0,   103,    11,    12,     0,     0,    14,     0,     0,     0,
       0,    15,     0,     0,     0,    16,    17,    18,     0,     0,
       0,    19,    20,    21,     0,     0,     0,   134,    23,    24,
       0,    25,    11,    12,     0,     0,    14,     0,     0,     0,
       0,    15,     0,     0,     0,    16,    17,    91,     0,     0,
       0,    19,    20,    21,    80,     0,     0,   141,    23,    24,
       0,    25,    81,    82,    83,    84,    85,    86,    87,     0,
      88,    89,    90,    80,     0,     0,     0,     0,     0,     0,
     174,    81,    82,    83,    84,    85,    86,    87,     0,    88,
      89,    90,    80,   137,     0,     0,     0,     0,     0,   175,
      81,    82,    83,    84,    85,    86,    87,    80,    88,    89,
      90,     0,     0,     0,   149,    81,    82,    83,    84,    85,
      86,    87,    80,    88,    89,    90,     0,     0,     0,   151,
      81,    82,    83,    84,    85,    86,    87,    80,    88,    89,
      90,     0,     0,     0,     0,    81,    82,    83,    84,    85,
      86,    87,    80,    88,    89,    90,     0,     0,     0,     0,
      81,    82,    83,    84,    85,    86,    80,     0,    88,    89,
      90,     0,     0,     0,    81,    82,    83,    84,    85,     0,
       0,     0,    88,    89,    90
};

static const yytype_int16 yycheck[] =
{
      28,    14,    13,     8,    24,   142,   177,    67,    24,    24,
      15,    16,    17,    18,    19,    20,    21,    24,    30,    28,
      24,    30,   193,    80,    28,    28,    30,     3,     4,     0,
       6,     7,    28,    28,    30,    30,    24,    24,    51,    50,
     177,    50,    48,    48,    49,    50,    50,    50,    53,    25,
      55,    26,    40,    41,    50,    50,   193,    30,    50,    64,
      73,     3,     4,    68,     6,     7,    25,    50,    50,    28,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,   111,    50,    90,    91,   144,    25,   146,
     147,    28,    48,    98,    50,   101,   101,   157,    25,    55,
      24,    28,   162,    25,    25,    49,    28,    28,    32,   137,
      25,    35,    36,    28,   142,    25,    40,    41,    28,    75,
      76,    77,    78,    79,   135,    25,   186,    28,    28,   189,
     136,   136,    50,    50,   139,   140,   196,    28,   198,   144,
     200,   146,   147,   148,   172,   101,   159,    25,   176,    25,
      28,    28,    28,    25,   182,    45,    28,    24,    16,   170,
      16,   174,   175,   191,   192,    50,   194,   195,    35,    36,
     170,   136,    -1,    40,    41,    -1,   148,   205,   206,   207,
     136,    -1,    -1,     3,     4,    -1,     6,     7,    -1,    -1,
      -1,    -1,   148,    13,    14,    15,    -1,    17,    18,    19,
      20,    21,    -1,    23,    24,    -1,    -1,    27,    -1,    29,
      -1,    -1,    -1,    33,    34,    35,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    -1,    45,    46,    47,    -1,    49,
      50,     3,     4,    -1,     6,     7,    -1,    -1,    -1,    -1,
      -1,    13,    14,    15,    -1,    17,    18,    19,    20,    21,
      -1,    23,    24,    -1,    26,    -1,    -1,    29,    -1,    -1,
      -1,    33,    34,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    -1,    45,    46,    47,    -1,    49,    50,     3,
       4,    -1,     6,     7,    -1,    -1,    -1,    -1,    -1,    13,
      14,    15,    -1,    17,    18,    19,    20,    21,    -1,    23,
      24,    -1,    26,    -1,    -1,    29,    -1,    -1,    -1,    33,
      34,    35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
      -1,    45,    46,    47,    -1,    49,    50,     3,     4,    -1,
       6,     7,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,
      -1,    17,    18,    19,    20,    21,    -1,    23,    24,    -1,
      -1,    27,    -1,    29,    -1,    -1,    -1,    33,    34,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    -1,    45,
      46,    47,    -1,    49,    50,     3,     4,    -1,     6,     7,
      -1,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,    17,
      18,    19,    20,    21,    -1,    23,    24,    -1,    -1,    27,
      -1,    29,    -1,    -1,    -1,    33,    34,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    -1,    45,    46,    47,
      -1,    49,    50,     3,     4,    -1,     6,     7,    -1,    -1,
      -1,    -1,    -1,    13,    14,    15,    -1,    17,    18,    19,
      20,    21,    -1,    23,    24,    -1,    26,    -1,    -1,    29,
      -1,    -1,    -1,    33,    34,    35,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    -1,    45,    46,    47,    -1,    49,
      50,     3,     4,    -1,     6,     7,    -1,    -1,    -1,    -1,
      -1,    13,    14,    15,    -1,    17,    18,    19,    20,    21,
      -1,    23,    24,    -1,    26,    -1,    -1,    29,    -1,    -1,
      -1,    33,    34,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    -1,    45,    46,    47,    -1,    49,    50,     3,
       4,    -1,     6,     7,    -1,    -1,    -1,    -1,    -1,    13,
      14,    15,    -1,    17,    18,    19,    20,    21,    -1,    23,
      24,    -1,    26,    -1,    -1,    29,    -1,    -1,    -1,    33,
      34,    35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
      -1,    45,    46,    47,    -1,    49,    50,     3,     4,    -1,
       6,     7,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,
      -1,    17,    18,    19,    20,    21,    -1,    23,    24,    -1,
      -1,    27,    -1,    29,    -1,    -1,    -1,    33,    34,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    -1,    45,
      46,    47,    -1,    49,    50,     3,     4,    -1,     6,     7,
      -1,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,    17,
      18,    19,    20,    21,    -1,    23,    24,    -1,    -1,    27,
      -1,    29,    -1,    -1,    -1,    33,    34,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    -1,    45,    46,    47,
      -1,    49,    50,     3,     4,    -1,     6,     7,    -1,    -1,
      -1,    -1,    -1,    13,    14,    15,    -1,    17,    18,    19,
      20,    21,    -1,    23,    24,    -1,    -1,    27,    -1,    29,
      -1,    -1,    -1,    33,    34,    35,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    -1,    45,    46,    47,    -1,    49,
      50,     3,     4,    -1,     6,     7,    -1,    -1,    -1,    -1,
      -1,    13,    14,    15,    -1,    17,    18,    19,    20,    21,
      -1,    23,    24,    -1,    -1,    27,    -1,    29,    -1,    -1,
      -1,    33,    34,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    -1,    45,    46,    47,    -1,    49,    50,     3,
       4,    -1,     6,     7,    -1,    -1,    -1,    -1,    -1,    13,
      14,    15,    -1,    17,    18,    19,    20,    21,    -1,    23,
      24,    -1,    -1,    27,    -1,    29,    -1,    -1,    -1,    33,
      34,    35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
      -1,    45,    46,    47,    -1,    49,    50,     3,     4,    -1,
       6,     7,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,
      -1,    17,    18,    19,    20,    21,    -1,    23,    24,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    33,    34,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    -1,    45,
      46,    47,    24,    49,    50,     3,     4,    -1,     6,     7,
      32,    33,    34,    35,    36,    37,    38,    -1,    40,    41,
      42,    -1,    20,    21,    -1,    23,    24,    -1,    50,    -1,
      -1,    29,    -1,    -1,    -1,    33,    34,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    -1,    45,    46,    47,
      -1,    49,    50,     3,     4,    -1,     6,     7,    -1,    -1,
      -1,    -1,    -1,    13,    14,    15,    -1,    17,    18,    19,
      20,    21,    -1,    23,    24,    -1,    26,    -1,    -1,    29,
      -1,    -1,    -1,    33,    34,    35,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    -1,    45,    46,    47,    -1,    49,
       3,     4,    -1,     6,     7,    -1,    -1,    -1,    -1,    -1,
      13,    14,    15,    -1,    17,    18,    19,    20,    21,    -1,
      23,    24,    -1,    26,    -1,    -1,    29,    -1,    -1,    -1,
      33,    34,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    -1,    45,    46,    47,    24,    49,     8,     9,    10,
      11,    12,    -1,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    40,    41,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    -1,    40,
      41,    42,    20,    21,    -1,    -1,    24,    25,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    33,    34,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    -1,    45,    46,    47,
      -1,    49,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    33,    34,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    -1,    45,    46,    47,
      -1,    49,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    33,    34,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    -1,    45,    46,    47,
      -1,    49,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    33,    34,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    -1,    45,    46,    47,
      -1,    49,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    33,    34,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    -1,    45,    46,    47,
      -1,    49,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    33,    34,    35,    -1,    -1,
      -1,    39,    40,    41,    24,    -1,    -1,    45,    46,    47,
      -1,    49,    32,    33,    34,    35,    36,    37,    38,    -1,
      40,    41,    42,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    32,    33,    34,    35,    36,    37,    38,    -1,    40,
      41,    42,    24,    25,    -1,    -1,    -1,    -1,    -1,    50,
      32,    33,    34,    35,    36,    37,    38,    24,    40,    41,
      42,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    24,    40,    41,    42,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    24,    40,    41,
      42,    -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    24,    40,    41,    42,    -1,    -1,    -1,    -1,
      32,    33,    34,    35,    36,    37,    24,    -1,    40,    41,
      42,    -1,    -1,    -1,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    40,    41,    42
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     6,     7,    13,    14,    15,    17,    18,
      19,    20,    21,    23,    24,    29,    33,    34,    35,    39,
      40,    41,    45,    46,    47,    49,    50,    61,    62,    63,
      64,    65,    66,    67,    69,    70,    71,    72,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    86,    24,
      24,    24,    82,    24,    24,    86,    81,    82,    82,    82,
      82,    82,    82,    82,    30,     0,    63,    26,    30,    50,
      50,    50,    50,    28,    50,     8,     9,    10,    11,    12,
      24,    32,    33,    34,    35,    36,    37,    38,    40,    41,
      42,    35,    45,    69,    70,    73,    82,    82,    50,    70,
      72,    86,    81,    49,    82,    85,    49,    70,    74,    25,
      82,    62,    82,    81,    70,    82,    70,    82,    70,    82,
      70,    82,    70,    82,    25,    85,    82,    82,    82,    82,
      82,    82,    82,    82,    45,    24,    28,    25,    82,    50,
      50,    45,    25,    25,    28,    25,    28,    28,    28,    31,
      27,    31,    25,    25,    68,    86,    73,    26,    63,    50,
      82,    82,    26,    63,    64,    85,    85,    85,    74,    25,
      28,    45,    62,    81,    50,    50,    62,    16,    25,    25,
      68,    27,    25,    81,    81,    27,    26,    64,    65,    26,
      63,    25,    25,    16,    62,    62,    26,    63,    26,    63,
      26,    64,    65,    27,    27,    62,    62,    62,    27,    27,
      27
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    60,    61,    62,    62,    63,    63,    63,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    65,    66,    67,
      67,    68,    68,    69,    69,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    71,    72,    72,    73,    73,
      73,    73,    73,    74,    74,    75,    75,    76,    76,    76,
      76,    76,    76,    77,    77,    77,    77,    78,    78,    78,
      78,    79,    79,    79,    80,    81,    81,    81,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      83,    83,    84,    84,    84,    84,    84,    85,    85,    86,
      86,    86,    86
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     2,     1,     1,     4,     5,
       4,     2,     3,     4,     4,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     3,     1,     1,
       2,     1,     3,     1,     3,     5,     7,     9,     9,    11,
      11,     8,    10,     7,     9,     9,    11,     7,     9,     5,
       7,     4,     4,     6,     6,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     4,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     1
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
#line 73 "src/main.y"
{
    // cout << "开始生成树根" << endl;
    NodeAttr *NA = new NodeAttr;
    root = parse_tree.NewRoot(STMT_NODE, COMP_STMT, *NA, Notype, yyvsp[0]);
    // cout << "树根生成完毕" << endl;
}
#line 1750 "src/main.tab.cpp"
    break;

  case 3:
#line 82 "src/main.y"
             {yyval=yyvsp[0];}
#line 1756 "src/main.tab.cpp"
    break;

  case 4:
#line 83 "src/main.y"
                        {yyval=yyvsp[-1]; yyval->addSibling(yyvsp[0]);}
#line 1762 "src/main.tab.cpp"
    break;

  case 5:
#line 88 "src/main.y"
{
    yyval = new Node;
    yyval->lineno = lineno;
    yyval->kind = STMT_NODE;
    yyval->kind_kind = EMPTY_STMT;
    NodeAttr *NA = new NodeAttr;
    yyval->attr = *NA;
    yyval->seq = parse_tree.node_seq++;
}
#line 1776 "src/main.tab.cpp"
    break;

  case 6:
#line 97 "src/main.y"
                        {yyval = yyvsp[0];}
#line 1782 "src/main.tab.cpp"
    break;

  case 7:
#line 98 "src/main.y"
                 {yyval = yyvsp[0];}
#line 1788 "src/main.tab.cpp"
    break;

  case 8:
#line 102 "src/main.y"
           {yyval = yyvsp[0];}
#line 1794 "src/main.tab.cpp"
    break;

  case 9:
#line 103 "src/main.y"
             {yyval = yyvsp[0];}
#line 1800 "src/main.tab.cpp"
    break;

  case 10:
#line 104 "src/main.y"
           {yyval = yyvsp[0];}
#line 1806 "src/main.tab.cpp"
    break;

  case 11:
#line 105 "src/main.y"
                        {yyval = yyvsp[-1];}
#line 1812 "src/main.tab.cpp"
    break;

  case 12:
#line 106 "src/main.y"
                        {yyval = yyvsp[-1];}
#line 1818 "src/main.tab.cpp"
    break;

  case 13:
#line 107 "src/main.y"
                       {yyval = yyvsp[-1];}
#line 1824 "src/main.tab.cpp"
    break;

  case 14:
#line 108 "src/main.y"
                      {yyval = yyvsp[-1];}
#line 1830 "src/main.tab.cpp"
    break;

  case 15:
#line 109 "src/main.y"
                        {yyval = yyvsp[-1];}
#line 1836 "src/main.tab.cpp"
    break;

  case 16:
#line 110 "src/main.y"
                  {yyval = yyvsp[0];}
#line 1842 "src/main.tab.cpp"
    break;

  case 17:
#line 114 "src/main.y"
                    {yyval = yyvsp[0];}
#line 1848 "src/main.tab.cpp"
    break;

  case 18:
#line 118 "src/main.y"
                                        {
    Node* node = yyval;
    Node* child = new Node(yyvsp[-1]->lineno, STMT_NODE, COMP_STMT, *(new NodeAttr), Notype, parse_tree.node_seq++);
    child->addChild(yyvsp[-1]);
    node->addChild(child);
    yyval = node;
    Node* p = yyvsp[-3]->children[2];
    for(int i = 0; i < size && p; i++)
    {
        symtbl.match(p->children[i]->children[1]->attr.name);
    }
    yyval->temp_stack_size = STACK_SIZE;
    STACK_SIZE = 0;
}
#line 1867 "src/main.tab.cpp"
    break;

  case 19:
#line 135 "src/main.y"
                                    {
    yyvsp[-3]->type = yyvsp[-4]->type;
    yyvsp[-3]->attr.symtbl_seq = symtbl.insert(yyvsp[-3]->attr.name, FUNC);
    symtbl.table[yyvsp[-3]->attr.name][yyvsp[-3]->attr.symtbl_seq].param_size = size;
    symtbl.table[yyvsp[-3]->attr.name][yyvsp[-3]->attr.symtbl_seq].return_type = cur->type;
    for(int i = 0; i < size; i++)
    {
        symtbl.table[yyvsp[-3]->attr.name][yyvsp[-3]->attr.symtbl_seq].param_type[i] = param[i];
    }
    position = 0;

    Node* node = new Node(yyvsp[-4]->lineno, DECL_NODE, FUNC_DECL, *(new NodeAttr), Notype, parse_tree.node_seq++);
    node->addChild(yyvsp[-4]);
    node->addChild(yyvsp[-3]);
    Node* child3 = new Node(yyvsp[-1]->lineno, LIST_NODE, PARAM_LIST, *(new NodeAttr), Notype, parse_tree.node_seq++);
    child3->addChild(yyvsp[-1]);
    node->addChild(child3);
    yyval = node;
}
#line 1891 "src/main.tab.cpp"
    break;

  case 20:
#line 154 "src/main.y"
                             {
    yyvsp[-2]->type = yyvsp[-3]->type;
    yyvsp[-2]->attr.symtbl_seq = symtbl.insert(yyvsp[-2]->attr.name, FUNC);
    symtbl.table[yyvsp[-2]->attr.name][yyvsp[-2]->attr.symtbl_seq].param_size = 0;
    symtbl.table[yyvsp[-2]->attr.name][yyvsp[-2]->attr.symtbl_seq].return_type = cur->type;
    size = 0;
    position = 0;

    Node* node = new Node(yyvsp[-3]->lineno, DECL_NODE, FUNC_DECL, *(new NodeAttr), Notype, parse_tree.node_seq++);
    node->addChild(yyvsp[-3]);
    node->addChild(yyvsp[-2]);
    yyval = node;
}
#line 1909 "src/main.tab.cpp"
    break;

  case 21:
#line 169 "src/main.y"
               {
    parse_tree.max_temp++;
    param[size] = cur->type;
    size++;
    Node* node = new Node(yyvsp[-1]->lineno, DECL_NODE, VAR_DECL, *(new NodeAttr), yyvsp[-1]->type, parse_tree.node_seq++);
    node->addChild(yyvsp[-1]);
    node->addChild(yyvsp[0]);
    yyvsp[0]->attr.symtbl_seq = symtbl.insert(yyvsp[0]->attr.name);
    symtbl.set_type(yyvsp[0]->attr.name, yyvsp[0]->attr.symtbl_seq, cur->type);
    yyvsp[0]->type = cur->type;
    position += 4;
    symtbl.table[yyvsp[0]->attr.name][yyvsp[0]->attr.symtbl_seq].position = position;
    yyval = node; 
}
#line 1928 "src/main.tab.cpp"
    break;

  case 22:
#line 183 "src/main.y"
                      {
    yyval = yyvsp[-2];
    yyval->addSibling(yyvsp[0]);
}
#line 1937 "src/main.tab.cpp"
    break;

  case 23:
#line 190 "src/main.y"
                                    {
    if(symtbl.lookup(yyvsp[-3]->attr.name) != -1)
    {
        yyvsp[-3]->attr.symtbl_seq = symtbl.lookup(yyvsp[-3]->attr.name);
        yyvsp[-3]->type = symtbl.get_type(yyvsp[-3]->attr.name, yyvsp[-3]->attr.symtbl_seq);
    }

    yyval = yyvsp[-3];
    yyvsp[-3]->kind_kind = ARRAY_EXPR;
    yyval->addChild(yyvsp[-2]);
    yyvsp[-2]->addChild(yyvsp[-1]);

}
#line 1955 "src/main.tab.cpp"
    break;

  case 24:
#line 203 "src/main.y"
                               {
    yyval = yyvsp[-3];
    yyval->addChild(yyvsp[-2]);
    yyvsp[-2]->addChild(yyvsp[-1]);
}
#line 1965 "src/main.tab.cpp"
    break;

  case 25:
#line 212 "src/main.y"
                        {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
}
#line 1975 "src/main.tab.cpp"
    break;

  case 26:
#line 217 "src/main.y"
                       {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
}
#line 1985 "src/main.tab.cpp"
    break;

  case 27:
#line 222 "src/main.y"
                        {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
}
#line 1995 "src/main.tab.cpp"
    break;

  case 28:
#line 227 "src/main.y"
                       {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
}
#line 2005 "src/main.tab.cpp"
    break;

  case 29:
#line 232 "src/main.y"
                      {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
}
#line 2015 "src/main.tab.cpp"
    break;

  case 30:
#line 237 "src/main.y"
                               {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
    parse_tree.max_temp++;
    STACK_SIZE += 4;
}
#line 2027 "src/main.tab.cpp"
    break;

  case 31:
#line 244 "src/main.y"
                              {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
    parse_tree.max_temp++;
    STACK_SIZE += 4;
}
#line 2039 "src/main.tab.cpp"
    break;

  case 32:
#line 251 "src/main.y"
                               {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
    parse_tree.max_temp++;
    STACK_SIZE += 4;
}
#line 2051 "src/main.tab.cpp"
    break;

  case 33:
#line 258 "src/main.y"
                              {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
    parse_tree.max_temp++;
    STACK_SIZE += 4;
}
#line 2063 "src/main.tab.cpp"
    break;

  case 34:
#line 265 "src/main.y"
                             {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
    parse_tree.max_temp++;
    STACK_SIZE += 4;
}
#line 2075 "src/main.tab.cpp"
    break;

  case 35:
#line 275 "src/main.y"
              {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[0]);
}
#line 2084 "src/main.tab.cpp"
    break;

  case 36:
#line 282 "src/main.y"
                    { 
    Node* child2 = new Node(yyvsp[0]->lineno, LIST_NODE, DECLARE_LIST, *(new NodeAttr), Notype, parse_tree.node_seq++);
    child2->addChild(yyvsp[0]);
    Node* node = new Node(yyvsp[-1]->lineno, DECL_NODE, VAR_DECL, *(new NodeAttr), yyvsp[-1]->type, parse_tree.node_seq++);
    node->addChild(yyvsp[-1]);
    node->addChild(child2);
    yyval = node; 
}
#line 2097 "src/main.tab.cpp"
    break;

  case 37:
#line 290 "src/main.y"
                                        {
    NodeAttr* NA1 = new NodeAttr;
    NodeAttr* NA2 = new NodeAttr;
    Node* child3 = new Node(yyvsp[0]->lineno, LIST_NODE, DECLARE_LIST, *NA1, Notype, parse_tree.node_seq++);
    child3->addChild(yyvsp[0]);
    Node* node = new Node(yyvsp[-1]->lineno, DECL_NODE, CONST_DECL, *NA2, yyvsp[-1]->type, parse_tree.node_seq++);
    node->addChild(yyvsp[-1]);
    node->addChild(child3);
    yyval = node;
}
#line 2112 "src/main.tab.cpp"
    break;

  case 38:
#line 303 "src/main.y"
              {
    if(yyvsp[0]->attr.op != OP_ASSIGN) yyerror("初始化错误");
    yyval = yyvsp[0];
    yyval->kind = EXPR_NODE;
    yyval->kind_kind = OP_EXPR;
    yyvsp[0]->children[0]->attr.symtbl_seq = symtbl.insert(yyvsp[0]->children[0]->attr.name, VAR_VAR);
    symtbl.set_type(yyvsp[0]->children[0]->attr.name, yyvsp[0]->children[0]->attr.symtbl_seq, cur->type);
    yyvsp[0]->children[0]->type = cur->type;
}
#line 2126 "src/main.tab.cpp"
    break;

  case 39:
#line 312 "src/main.y"
             {
    yyval = yyvsp[0];
    yyval->attr.symtbl_seq = symtbl.insert(yyvsp[0]->attr.name, VAR_VAR);
    symtbl.set_type(yyvsp[0]->attr.name, yyvsp[0]->attr.symtbl_seq, cur->type);
    yyvsp[0]->type = cur->type;
}
#line 2137 "src/main.tab.cpp"
    break;

  case 40:
#line 318 "src/main.y"
                  {
    yyval = yyvsp[-1];
    yyvsp[-1]->attr.op = OP_STAR;
    yyval->addChild(yyvsp[0]);
    yyvsp[0]->attr.symtbl_seq = symtbl.insert(yyvsp[0]->attr.name, VAR_VAR);
    symtbl.set_type(yyvsp[0]->attr.name, yyvsp[0]->attr.symtbl_seq, cur->type);
    yyvsp[0]->type = cur->type;
    yyvsp[0]->stars = 1;
    symtbl.table[yyvsp[0]->attr.name][yyvsp[0]->attr.symtbl_seq].stars = yyvsp[0]->stars;
}
#line 2152 "src/main.tab.cpp"
    break;

  case 41:
#line 328 "src/main.y"
        {
    yyval = yyvsp[0];
    yyval->attr.symtbl_seq = symtbl.insert(yyvsp[0]->attr.name, VAR_VAR);
    // cout << "名字为" << $1->attr.name << endl;
    // cout << "号码为" << $$->attr.symtbl_seq << endl;
    symtbl.set_type(yyvsp[0]->attr.name, yyvsp[0]->attr.symtbl_seq, cur->type);
    yyvsp[0]->type = cur->type;
    int i = 0;
    for(Node* p = yyvsp[0]->children[0]; p; p = p->sibling, i++)
    {
        // $1->stars += 1;
        yyvsp[0]->numbers *= p->children[0]->attr.vali;
        symtbl.table[yyvsp[0]->attr.name][yyval->attr.symtbl_seq].dimension.push_back(p->children[0]->attr.vali);
        symtbl.table[yyvsp[0]->attr.name][yyval->attr.symtbl_seq].adds.push_back(1);
        // cout << symtbl.table[$1->attr.name][$$->attr.symtbl_seq].adds[i] << endl;
        for(int j = 0; j < i; j++)
        {
            symtbl.table[yyvsp[0]->attr.name][yyval->attr.symtbl_seq].adds[j] *= p->children[0]->attr.vali;
        }
    }
    // symtbl.table[$1->attr.name][$$->attr.symtbl_seq].stars = $1->stars;
    symtbl.table[yyvsp[0]->attr.name][yyval->attr.symtbl_seq].numbers = yyvsp[0]->numbers;
}
#line 2180 "src/main.tab.cpp"
    break;

  case 42:
#line 351 "src/main.y"
                                        {yyval = yyvsp[-2]; yyval->addSibling(yyvsp[0]);}
#line 2186 "src/main.tab.cpp"
    break;

  case 43:
#line 356 "src/main.y"
              {
    yyval = yyvsp[0];
    yyval->kind = EXPR_NODE;
    yyval->kind_kind = OP_EXPR;
    yyvsp[0]->children[0]->attr.symtbl_seq = symtbl.insert(yyvsp[0]->children[0]->attr.name, CONST_VAR);
    yyvsp[0]->children[0]->type = cur->type;
}
#line 2198 "src/main.tab.cpp"
    break;

  case 44:
#line 363 "src/main.y"
                                                            {
    yyval = yyvsp[-2];
    yyval->addSibling(yyvsp[0]);
}
#line 2207 "src/main.tab.cpp"
    break;

  case 45:
#line 370 "src/main.y"
                                     {
    yyval = yyvsp[-4];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
}
#line 2217 "src/main.tab.cpp"
    break;

  case 46:
#line 375 "src/main.y"
                                                    {
    yyval = yyvsp[-6];
    yyval->addChild(yyvsp[-4]);
    NodeAttr* NA = new NodeAttr;
    Node* child2 = new Node(yyvsp[-1]->lineno, STMT_NODE, COMP_STMT, *NA, Notype, parse_tree.node_seq++);
    child2->addChild(yyvsp[-1]);
    yyval->addChild(child2);
}
#line 2230 "src/main.tab.cpp"
    break;

  case 47:
#line 386 "src/main.y"
                                                                             {
    for_seq++;
    yyval = yyvsp[-8];
    yyval->addChild(yyvsp[-6]);
    yyval->addChild(yyvsp[-4]);
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
}
#line 2243 "src/main.tab.cpp"
    break;

  case 48:
#line 394 "src/main.y"
                                                                             {
    for_seq++;
    yyval = yyvsp[-8];
    yyval->addChild(yyvsp[-6]);
    yyval->addChild(yyvsp[-4]);
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
    Node* child = yyvsp[-6]->children[1]->children[0];
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
#line 2270 "src/main.tab.cpp"
    break;

  case 49:
#line 416 "src/main.y"
                                                                                            {
    for_seq++;
    yyval = yyvsp[-10];
    yyval->addChild(yyvsp[-8]);
    yyval->addChild(yyvsp[-6]);
    yyval->addChild(yyvsp[-4]);
    NodeAttr* NA = new NodeAttr;
    Node* child4 = new Node(yyvsp[-1]->lineno, STMT_NODE, COMP_STMT, *NA, Notype, parse_tree.node_seq++);
    child4->addChild(yyvsp[-1]);
    yyval->addChild(child4);
}
#line 2286 "src/main.tab.cpp"
    break;

  case 50:
#line 427 "src/main.y"
                                                                                            {
    for_seq++;
    yyval = yyvsp[-10];
    yyval->addChild(yyvsp[-8]);
    yyval->addChild(yyvsp[-6]);
    yyval->addChild(yyvsp[-4]);
    NodeAttr* NA = new NodeAttr;
    Node* child4 = new Node(yyvsp[-1]->lineno, STMT_NODE, COMP_STMT, *NA, Notype, parse_tree.node_seq++);
    child4->addChild(yyvsp[-1]);
    yyval->addChild(child4);
    Node* child = yyvsp[-8]->children[1]->children[0];
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
#line 2316 "src/main.tab.cpp"
    break;

  case 51:
#line 452 "src/main.y"
                                                                 {
    for_seq++;
    yyval = yyvsp[-7];
    Node* node = new Node(yyvsp[-7]->lineno, EMPTY_NODE, 0, *(new NodeAttr), Notype, parse_tree.node_seq++);
    yyval->addChild(node);
    yyval->addChild(yyvsp[-4]);
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
}
#line 2330 "src/main.tab.cpp"
    break;

  case 52:
#line 461 "src/main.y"
                                                                                {
    for_seq++;
    yyval = yyvsp[-9];
    Node* node = new Node(yyvsp[-9]->lineno, EMPTY_NODE, 0, *(new NodeAttr), Notype, parse_tree.node_seq++);
    yyval->addChild(node);
    yyval->addChild(yyvsp[-6]);
    yyval->addChild(yyvsp[-4]);
    NodeAttr* NA = new NodeAttr;
    Node* child3 = new Node(yyvsp[-1]->lineno, STMT_NODE, COMP_STMT, *NA, Notype, parse_tree.node_seq++);
    child3->addChild(yyvsp[-1]);
    yyval->addChild(child3);
}
#line 2347 "src/main.tab.cpp"
    break;

  case 53:
#line 477 "src/main.y"
                                                            {
    yyval = yyvsp[-6];
    yyval->addChild(yyvsp[-4]);
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[-1]);
    yyvsp[-1]->addChild(yyvsp[0]);
}
#line 2359 "src/main.tab.cpp"
    break;

  case 54:
#line 484 "src/main.y"
                                                                        {
    yyval = yyvsp[-8];
    yyval->addChild(yyvsp[-6]);
    NodeAttr* NA = new NodeAttr;
    Node* child2 = new Node(yyvsp[-3]->lineno, STMT_NODE, COMP_STMT, *NA, Notype, parse_tree.node_seq++);
    child2->addChild(yyvsp[-3]);
    yyval->addChild(child2);
    yyval->addChild(yyvsp[-1]);
    yyvsp[-1]->addChild(yyvsp[0]);
}
#line 2374 "src/main.tab.cpp"
    break;

  case 55:
#line 494 "src/main.y"
                                                                        {
    yyval = yyvsp[-8];
    yyval->addChild(yyvsp[-6]);
    yyval->addChild(yyvsp[-4]);

    NodeAttr* NA = new NodeAttr;
    Node* child3 = new Node(yyvsp[-1]->lineno, STMT_NODE, COMP_STMT, *NA, Notype, parse_tree.node_seq++);
    child3->addChild(yyvsp[-1]);
    yyvsp[-3]->addChild(child3);
    yyval->addChild(yyvsp[-3]);
}
#line 2390 "src/main.tab.cpp"
    break;

  case 56:
#line 505 "src/main.y"
                                                                                    {
    // cout << "进入了一个完整的ifelse" << endl;
    yyval = yyvsp[-10];
    yyval->addChild(yyvsp[-8]);

    NodeAttr* NA1 = new NodeAttr;
    Node* child2 = new Node(yyvsp[-5]->lineno, STMT_NODE, COMP_STMT, *NA1, Notype, parse_tree.node_seq++);
    child2->addChild(yyvsp[-5]);
    yyval->addChild(child2);
    
    NodeAttr* NA2 = new NodeAttr;
    Node* child3 = new Node(yyvsp[-1]->lineno, STMT_NODE, COMP_STMT, *NA2, Notype, parse_tree.node_seq++);
    child3->addChild(yyvsp[-1]);
    yyvsp[-3]->addChild(child3);
    yyval->addChild(yyvsp[-3]);
}
#line 2411 "src/main.tab.cpp"
    break;

  case 57:
#line 524 "src/main.y"
                                                              {
    yyval = yyvsp[-6];
    yyval->addChild(yyvsp[-4]);
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[-1]);
    yyvsp[-1]->addChild(yyvsp[0]);
}
#line 2423 "src/main.tab.cpp"
    break;

  case 58:
#line 531 "src/main.y"
                                                                          {
    yyval = yyvsp[-8];
    yyval->addChild(yyvsp[-6]);

    NodeAttr* NA = new NodeAttr;
    Node* child2 = new Node(yyvsp[-3]->lineno, STMT_NODE, COMP_STMT, *NA, Notype, parse_tree.node_seq++);
    child2->addChild(yyvsp[-3]);
    yyval->addChild(child2);
    yyval->addChild(yyvsp[-1]);
    yyvsp[-1]->addChild(yyvsp[0]);
}
#line 2439 "src/main.tab.cpp"
    break;

  case 59:
#line 542 "src/main.y"
                                       {
    yyval = yyvsp[-4];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
}
#line 2449 "src/main.tab.cpp"
    break;

  case 60:
#line 547 "src/main.y"
                                                                {
    yyval = yyvsp[-6];
    yyval->addChild(yyvsp[-4]);
    NodeAttr* NA = new NodeAttr;
    Node* child2 = new Node(yyvsp[-1]->lineno, STMT_NODE, COMP_STMT, *NA, Notype, parse_tree.node_seq++);
    child2->addChild(yyvsp[-1]);
    yyval->addChild(child2);
}
#line 2462 "src/main.tab.cpp"
    break;

  case 61:
#line 558 "src/main.y"
                                 {
    yyval = yyvsp[-3];
    Node* child1 = new Node(yyvsp[-1]->lineno, LIST_NODE, PRINT_LIST, *(new NodeAttr), Notype, parse_tree.node_seq++);
    child1->addChild(yyvsp[-1]);
    yyval->addChild(child1);
}
#line 2473 "src/main.tab.cpp"
    break;

  case 62:
#line 564 "src/main.y"
                             {
    yyval = yyvsp[-3];
    yyval->addChild(yyvsp[-1]);
    yyvsp[-1]->attr.symtbl_seq = symtbl.insert(print_content, yyvsp[-1]->attr.valstr);
    symtbl.set_type(print_content, yyvsp[-1]->attr.symtbl_seq, String);
}
#line 2484 "src/main.tab.cpp"
    break;

  case 63:
#line 570 "src/main.y"
                                              {
    yyval = yyvsp[-5];
    yyvsp[-3]->attr.symtbl_seq = symtbl.insert(print_content, yyvsp[-3]->attr.valstr);
    symtbl.set_type(print_content, yyvsp[-3]->attr.symtbl_seq, String);
    yyval->addChild(yyvsp[-3]);
    Node* child2 = new Node(yyvsp[-1]->lineno, LIST_NODE, PRINT_LIST, *(new NodeAttr), Notype, parse_tree.node_seq++);
    child2->addChild(yyvsp[-1]);
    yyval->addChild(child2);
}
#line 2498 "src/main.tab.cpp"
    break;

  case 64:
#line 582 "src/main.y"
                                             {
    yyval = yyvsp[-5];
    yyvsp[-3]->attr.symtbl_seq = symtbl.insert(scan_content, yyvsp[-3]->attr.valstr);
    symtbl.set_type(scan_content, yyvsp[-3]->attr.symtbl_seq, String);
    yyval->addChild(yyvsp[-3]);
    Node* child2 = new Node(yyvsp[-1]->lineno, LIST_NODE, SCAN_LIST, *(new NodeAttr), Notype, parse_tree.node_seq++);
    for(Node* p = yyvsp[-1]; p; p = p->sibling)
    {
        child2->addChild(p->children[0]);
    }
    yyval->addChild(child2);
}
#line 2515 "src/main.tab.cpp"
    break;

  case 65:
#line 597 "src/main.y"
       {
    yyval = yyvsp[0]; 
    // cout << "生成了表达式语句" << endl;
}
#line 2524 "src/main.tab.cpp"
    break;

  case 66:
#line 601 "src/main.y"
              {
    yyval = yyvsp[0];
    parse_tree.max_temp++;
    STACK_SIZE += 4;
}
#line 2534 "src/main.tab.cpp"
    break;

  case 67:
#line 606 "src/main.y"
                            {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
}
#line 2544 "src/main.tab.cpp"
    break;

  case 68:
#line 614 "src/main.y"
                {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
    parse_tree.max_temp++;
    STACK_SIZE += 4;
}
#line 2556 "src/main.tab.cpp"
    break;

  case 69:
#line 621 "src/main.y"
                 {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
    parse_tree.max_temp++;
    STACK_SIZE += 4;
}
#line 2568 "src/main.tab.cpp"
    break;

  case 70:
#line 628 "src/main.y"
                 {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
    parse_tree.max_temp++;
    STACK_SIZE += 4;
}
#line 2580 "src/main.tab.cpp"
    break;

  case 71:
#line 635 "src/main.y"
                {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
    parse_tree.max_temp++;
    STACK_SIZE += 4;
}
#line 2592 "src/main.tab.cpp"
    break;

  case 72:
#line 642 "src/main.y"
               {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
    parse_tree.max_temp++;
    STACK_SIZE += 4;
}
#line 2604 "src/main.tab.cpp"
    break;

  case 73:
#line 649 "src/main.y"
               {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
    parse_tree.max_temp++;
    STACK_SIZE += 4;
}
#line 2616 "src/main.tab.cpp"
    break;

  case 74:
#line 656 "src/main.y"
              {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
    parse_tree.max_temp++;
    STACK_SIZE += 4;
}
#line 2628 "src/main.tab.cpp"
    break;

  case 75:
#line 663 "src/main.y"
                 {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
    parse_tree.max_temp++;
    STACK_SIZE += 4;
    // cout << "检测到不等号" << endl;
}
#line 2641 "src/main.tab.cpp"
    break;

  case 76:
#line 671 "src/main.y"
                     {
    Node* node = new Node(yyvsp[-2]->lineno, EXPR_NODE, FUNC_EXPR, *(new NodeAttr), symtbl.table[yyvsp[-2]->attr.name][yyvsp[-2]->attr.symtbl_seq].return_type, parse_tree.node_seq++);
    node->addChild(yyvsp[-2]);
    yyval = node;
    parse_tree.max_temp++;
    STACK_SIZE += 4;
}
#line 2653 "src/main.tab.cpp"
    break;

  case 77:
#line 678 "src/main.y"
                               {
    Node* node = new Node(yyvsp[-3]->lineno, EXPR_NODE, FUNC_EXPR, *(new NodeAttr), symtbl.table[yyvsp[-3]->attr.name][yyvsp[-3]->attr.symtbl_seq].return_type, parse_tree.node_seq++);
    node->addChild(yyvsp[-3]);
    Node* child2 = new Node(yyvsp[-1]->lineno, LIST_NODE, PARAM_LIST, *(new NodeAttr), Notype, parse_tree.node_seq++);
    child2->addChild(yyvsp[-1]);
    node->addChild(child2);
    yyval = node;
    parse_tree.max_temp++;
    STACK_SIZE += 4;
}
#line 2668 "src/main.tab.cpp"
    break;

  case 78:
#line 688 "src/main.y"
                          {
    yyval = yyvsp[0]; 
    yyval->addChild(yyvsp[-1]); 
}
#line 2677 "src/main.tab.cpp"
    break;

  case 79:
#line 692 "src/main.y"
             {
    yyval = yyvsp[0]; 
    yyval->addChild(yyvsp[-1]);
}
#line 2686 "src/main.tab.cpp"
    break;

  case 80:
#line 696 "src/main.y"
                            {
    yyval = yyvsp[0]; 
    yyval->addChild(yyvsp[-1]); 
}
#line 2695 "src/main.tab.cpp"
    break;

  case 81:
#line 700 "src/main.y"
              {
    yyval = yyvsp[0]; 
    yyval->addChild(yyvsp[-1]); 
}
#line 2704 "src/main.tab.cpp"
    break;

  case 82:
#line 704 "src/main.y"
           {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[0]);
    parse_tree.max_temp++;
    STACK_SIZE += 4;
}
#line 2715 "src/main.tab.cpp"
    break;

  case 83:
#line 710 "src/main.y"
            {
    yyvsp[-1]->attr.op = OP_STAR;
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[0]);
    parse_tree.max_temp++;
    STACK_SIZE += 4;
}
#line 2727 "src/main.tab.cpp"
    break;

  case 84:
#line 717 "src/main.y"
           {
    yyval = yyvsp[-1]; 
    yyval->addChild(yyvsp[0]);
    parse_tree.max_temp++;
    STACK_SIZE += 4;
    // cout << "检测到非" << endl;
}
#line 2739 "src/main.tab.cpp"
    break;

  case 85:
#line 724 "src/main.y"
                          { 
    yyval = yyvsp[-1]; 
    yyval->addChild(yyvsp[0]);
    parse_tree.max_temp++;
    STACK_SIZE += 4;
}
#line 2750 "src/main.tab.cpp"
    break;

  case 86:
#line 730 "src/main.y"
                         { yyval = yyvsp[0];}
#line 2756 "src/main.tab.cpp"
    break;

  case 87:
#line 731 "src/main.y"
                          {
    yyval = yyvsp[-1]; // $$->addChild($2); 
}
#line 2764 "src/main.tab.cpp"
    break;

  case 88:
#line 734 "src/main.y"
        {
    yyval = yyvsp[0];
    parse_tree.max_temp++;
    STACK_SIZE += 4;
}
#line 2774 "src/main.tab.cpp"
    break;

  case 89:
#line 739 "src/main.y"
       {yyval = yyvsp[0];}
#line 2780 "src/main.tab.cpp"
    break;

  case 90:
#line 743 "src/main.y"
                       {
    // 查找符号表中是否已经有了这个符号
    if(symtbl.lookup(yyvsp[0]->attr.name) != -1)
    {
        // 有了的话就把这个符号的序号给当前节点
        yyvsp[0]->attr.symtbl_seq = symtbl.lookup(yyvsp[0]->attr.name);
        yyvsp[0]->type = symtbl.get_type(yyvsp[0]->attr.name, yyvsp[0]->attr.symtbl_seq);
    }
    yyval = yyvsp[0];
}
#line 2795 "src/main.tab.cpp"
    break;

  case 91:
#line 753 "src/main.y"
        {yyval = yyvsp[0];}
#line 2801 "src/main.tab.cpp"
    break;

  case 92:
#line 757 "src/main.y"
          {yyval = yyvsp[0];}
#line 2807 "src/main.tab.cpp"
    break;

  case 93:
#line 758 "src/main.y"
       {
    yyval = yyvsp[0];
}
#line 2815 "src/main.tab.cpp"
    break;

  case 94:
#line 761 "src/main.y"
                           {
    yyval = yyvsp[0];
    yyvsp[0]->attr.symtbl_seq = symtbl.insert(const_content, yyvsp[0]->attr.valstr);
    symtbl.set_type(const_content, yyvsp[0]->attr.symtbl_seq, String);
}
#line 2825 "src/main.tab.cpp"
    break;

  case 95:
#line 766 "src/main.y"
       {yyval = yyvsp[0];}
#line 2831 "src/main.tab.cpp"
    break;

  case 96:
#line 767 "src/main.y"
        {yyval = yyvsp[0];}
#line 2837 "src/main.tab.cpp"
    break;

  case 97:
#line 771 "src/main.y"
       {yyval = yyvsp[0];}
#line 2843 "src/main.tab.cpp"
    break;

  case 98:
#line 772 "src/main.y"
                            {
    yyval = yyvsp[-2];
    yyval->addSibling(yyvsp[0]);
}
#line 2852 "src/main.tab.cpp"
    break;

  case 99:
#line 778 "src/main.y"
         {
    yyval = yyvsp[0];
    cur = yyval;
}
#line 2861 "src/main.tab.cpp"
    break;

  case 100:
#line 782 "src/main.y"
         {
    yyval = yyvsp[0];
    cur = yyval;
}
#line 2870 "src/main.tab.cpp"
    break;

  case 101:
#line 786 "src/main.y"
         {
    yyval = yyvsp[0];
    cur = yyval;
}
#line 2879 "src/main.tab.cpp"
    break;

  case 102:
#line 790 "src/main.y"
         {
    yyval = yyvsp[0];
    cur = yyval;
}
#line 2888 "src/main.tab.cpp"
    break;


#line 2892 "src/main.tab.cpp"

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
#line 796 "src/main.y"


int yyerror(char const* message)
{
    cout << message << " at line " << lineno << endl;
    return -1;
}
