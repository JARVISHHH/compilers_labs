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

    // Node* decl = new Node(0, DECL_NODE, COMP_DECL, *(new NodeAttr), Notype, 0);

#line 88 "src/main.tab.cpp"

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
#define YYFINAL  59
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1301

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  90
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  192

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
       0,    71,    71,    79,    80,    84,    94,    95,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   111,   115,   125,
     144,   158,   170,   177,   182,   187,   192,   197,   205,   212,
     220,   233,   242,   248,   253,   260,   267,   272,   283,   290,
     308,   318,   339,   345,   358,   365,   375,   386,   404,   411,
     422,   427,   438,   444,   450,   462,   477,   478,   481,   489,
     495,   501,   507,   513,   519,   525,   531,   537,   543,   553,
     556,   560,   564,   568,   569,   570,   571,   572,   576,   586,
     590,   591,   592,   597,   598,   602,   603,   609,   613,   617,
     621
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
  "funtion_head", "params", "ASSIGN_stmt", "RETURN_stmt", "declaration",
  "declare_id_list", "must_init_declare_id_list", "while_stmt", "for_stmt",
  "matched_if_stmt", "unmatched_if_stmt", "printf_stmt", "scanf_stmt",
  "expr_stmt", "expr", "term", "CONST", "expr_list", "T", YY_NULLPTR
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

#define YYPACT_NINF (-157)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-33)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     784,  -157,  -157,  -157,  -157,     1,    14,    25,  1022,    29,
      33,  -157,  -157,    10,  1022,  1022,  1022,  1022,  1022,  1022,
    -157,  -157,  -157,  -157,  -157,    68,   784,  -157,  -157,  -157,
    -157,    43,  -157,   -24,    27,  -157,  -157,  -157,  -157,    48,
      53,   -16,   969,  -157,  -157,  1052,  1022,   832,  1022,    77,
    1082,    55,  1022,    -6,     0,     0,     0,     0,     0,  -157,
    -157,   784,  -157,  -157,  -157,  -157,  1022,  -157,  1022,  1022,
    1022,  1022,  1022,   992,  1022,  1022,  1022,  1022,  1022,  1022,
    1022,  -157,  -157,  1022,   -17,  -157,    79,   969,  1168,  1022,
      58,    70,  1112,  1187,    -5,    77,    17,    95,  -157,    96,
    -157,   160,  -157,    77,    77,    77,    77,    77,  -157,    18,
     162,   827,   827,     0,     0,    38,  1259,   951,     2,  1112,
     208,   808,  1022,  1022,   -13,   256,  -157,  1022,  -157,  1022,
    1022,  1022,  -157,  -157,  -157,    19,    31,  -157,   784,  -157,
    1022,  1130,  1149,   784,  -157,   109,    26,  -157,    72,  -157,
    -157,    10,  -157,   304,  1206,  1022,  1022,   352,   880,  -157,
    -157,  -157,  -157,   400,  1225,  1244,   110,   784,  -157,  -157,
     784,  -157,   448,   496,   927,   544,   592,   784,  -157,   784,
    -157,   784,  -157,  -157,  -157,  -157,   640,   688,   736,  -157,
    -157,  -157
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    88,    87,    89,    90,     0,     0,     0,     0,     0,
       0,    83,    84,     0,     0,     0,     0,     0,     0,     0,
      78,    80,    81,    82,     5,     0,     2,     3,     6,     7,
       8,     0,    57,     0,     0,     9,    10,    16,    17,     0,
       0,     0,    56,    77,    79,     0,     0,     0,     0,    28,
       0,     0,     0,     0,    73,    75,    74,    71,    69,     1,
       4,     0,    11,    15,    12,    13,     0,    14,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    72,    70,     0,    78,    31,    29,     0,     0,     0,
       0,     0,     0,     0,    82,    85,     0,     0,    34,    30,
      76,     0,    58,    27,    23,    24,    25,    26,    67,     0,
      59,    60,    61,    62,    63,    64,    65,    66,     0,     0,
       0,     0,     0,     0,    78,     0,    53,     0,    52,     0,
       0,     0,    18,    68,    20,     0,     0,    33,     0,    36,
       0,     0,     0,     0,    50,     6,     0,    86,     0,    35,
      19,     0,    21,     0,     0,     0,     0,     0,     0,    54,
      55,    22,    37,     0,     0,     0,    51,     0,    44,    48,
       0,    42,     0,     0,     0,     0,     0,     0,    38,     0,
      39,     0,    45,    49,    46,    43,     0,     0,     0,    40,
      41,    47
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -157,  -157,   -22,   -26,  -122,  -156,  -157,  -157,   -23,     3,
    -157,    82,    11,     7,  -157,  -157,  -157,  -157,  -157,  -157,
     -10,    13,  -157,  -157,   -63,   -12
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    25,    26,    27,    28,    29,    30,    31,   135,    32,
      33,    34,    86,    99,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    96,    45
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      60,    52,   169,   145,    53,     1,     2,   118,     3,     4,
     109,   -32,    66,     1,     2,   -32,     3,     4,   183,   100,
     126,    49,    66,   127,    73,    46,    62,   134,    54,    55,
      56,    57,    58,   -32,    67,    92,   168,   -32,    47,   101,
      81,    82,   128,   133,   150,   129,   129,   151,    85,    48,
      90,   159,   182,    50,   129,    98,   102,    51,    87,    88,
      87,    93,    73,    95,   146,    87,   147,   148,    59,    61,
      74,    75,    76,    77,    78,    60,   152,    63,    81,    82,
      83,   103,   104,   105,   106,   107,    95,   110,   111,   112,
     113,   114,   115,   116,   139,    85,   117,   160,    64,   144,
     129,    73,   121,    65,    97,    87,   136,   119,   122,    74,
      75,    76,    77,    78,    79,    80,   153,    81,    82,    83,
     123,   157,    85,   130,   131,   158,   174,    60,   161,    91,
     137,    60,    87,     0,    98,   141,   142,   171,   149,   136,
      95,     0,    95,    95,    87,   175,   178,   180,   176,    60,
      60,     0,     0,   154,     0,   186,     0,   187,     0,   188,
      60,    60,    60,     1,     2,     0,     3,     4,   164,   165,
       0,     0,     0,     5,     6,     7,     0,     8,     9,    10,
      11,    12,     0,    13,    14,     0,    73,   132,     0,    15,
       0,     0,     0,     0,    16,     0,     0,    77,    78,    17,
      18,    19,    81,    82,     0,    20,    21,    22,     0,    23,
      24,     1,     2,     0,     3,     4,     0,     0,     0,     0,
       0,     5,     6,     7,     0,     8,     9,    10,    11,    12,
       0,    13,    14,     0,   138,     0,     0,    15,     0,     0,
       0,     0,    16,     0,     0,     0,     0,    17,    18,    19,
       0,     0,     0,    20,    21,    22,     0,    23,    24,     1,
       2,     0,     3,     4,     0,     0,     0,     0,     0,     5,
       6,     7,     0,     8,     9,    10,    11,    12,     0,    13,
      14,     0,   143,     0,     0,    15,     0,     0,     0,     0,
      16,     0,     0,     0,     0,    17,    18,    19,     0,     0,
       0,    20,    21,    22,     0,    23,    24,     1,     2,     0,
       3,     4,     0,     0,     0,     0,     0,     5,     6,     7,
       0,     8,     9,    10,    11,    12,     0,    13,    14,     0,
       0,   162,     0,    15,     0,     0,     0,     0,    16,     0,
       0,     0,     0,    17,    18,    19,     0,     0,     0,    20,
      21,    22,     0,    23,    24,     1,     2,     0,     3,     4,
       0,     0,     0,     0,     0,     5,     6,     7,     0,     8,
       9,    10,    11,    12,     0,    13,    14,     0,     0,   166,
       0,    15,     0,     0,     0,     0,    16,     0,     0,     0,
       0,    17,    18,    19,     0,     0,     0,    20,    21,    22,
       0,    23,    24,     1,     2,     0,     3,     4,     0,     0,
       0,     0,     0,     5,     6,     7,     0,     8,     9,    10,
      11,    12,     0,    13,    14,     0,   170,     0,     0,    15,
       0,     0,     0,     0,    16,     0,     0,     0,     0,    17,
      18,    19,     0,     0,     0,    20,    21,    22,     0,    23,
      24,     1,     2,     0,     3,     4,     0,     0,     0,     0,
       0,     5,     6,     7,     0,     8,     9,    10,    11,    12,
       0,    13,    14,     0,   177,     0,     0,    15,     0,     0,
       0,     0,    16,     0,     0,     0,     0,    17,    18,    19,
       0,     0,     0,    20,    21,    22,     0,    23,    24,     1,
       2,     0,     3,     4,     0,     0,     0,     0,     0,     5,
       6,     7,     0,     8,     9,    10,    11,    12,     0,    13,
      14,     0,   179,     0,     0,    15,     0,     0,     0,     0,
      16,     0,     0,     0,     0,    17,    18,    19,     0,     0,
       0,    20,    21,    22,     0,    23,    24,     1,     2,     0,
       3,     4,     0,     0,     0,     0,     0,     5,     6,     7,
       0,     8,     9,    10,    11,    12,     0,    13,    14,     0,
       0,   184,     0,    15,     0,     0,     0,     0,    16,     0,
       0,     0,     0,    17,    18,    19,     0,     0,     0,    20,
      21,    22,     0,    23,    24,     1,     2,     0,     3,     4,
       0,     0,     0,     0,     0,     5,     6,     7,     0,     8,
       9,    10,    11,    12,     0,    13,    14,     0,     0,   185,
       0,    15,     0,     0,     0,     0,    16,     0,     0,     0,
       0,    17,    18,    19,     0,     0,     0,    20,    21,    22,
       0,    23,    24,     1,     2,     0,     3,     4,     0,     0,
       0,     0,     0,     5,     6,     7,     0,     8,     9,    10,
      11,    12,     0,    13,    14,     0,     0,   189,     0,    15,
       0,     0,     0,     0,    16,     0,     0,     0,     0,    17,
      18,    19,     0,     0,     0,    20,    21,    22,     0,    23,
      24,     1,     2,     0,     3,     4,     0,     0,     0,     0,
       0,     5,     6,     7,     0,     8,     9,    10,    11,    12,
       0,    13,    14,     0,     0,   190,     0,    15,     0,     0,
       0,     0,    16,     0,     0,     0,     0,    17,    18,    19,
       0,     0,     0,    20,    21,    22,     0,    23,    24,     1,
       2,     0,     3,     4,     0,     0,     0,     0,     0,     5,
       6,     7,     0,     8,     9,    10,    11,    12,     0,    13,
      14,     0,     0,   191,     0,    15,     0,     0,     0,     0,
      16,     0,     0,     0,     0,    17,    18,    19,     0,     0,
       0,    20,    21,    22,     0,    23,    24,     1,     2,     0,
       3,     4,     0,     0,     0,     0,     0,     5,     6,     7,
       0,     8,     9,    10,    11,    12,     0,    13,    14,     0,
       0,     0,     0,    15,     0,     0,     0,     0,    16,     0,
       0,     0,     0,    17,    18,    19,     0,     0,     0,    20,
      21,    22,    73,    23,    24,     1,     2,     0,     3,     4,
      74,    75,    76,    77,    78,    79,    80,     0,    81,    82,
      83,    73,    11,    12,     0,    13,    14,     0,   140,    74,
       0,    15,    77,    78,     0,     0,    16,    81,    82,     0,
       0,    17,    18,    19,     0,     0,     0,    20,    21,    22,
       0,    23,    89,     1,     2,     0,     3,     4,     0,     0,
       0,     0,     0,     5,     6,     7,     0,     8,     9,    10,
      11,    12,     0,    13,    14,     0,   167,     0,     0,    15,
       0,     0,     0,     0,    16,     0,     0,     0,     0,    17,
      18,    19,     0,     0,     0,    20,    21,    22,     0,    23,
       1,     2,     0,     3,     4,     0,     0,     0,     0,     0,
       5,     6,     7,     0,     8,     9,    10,    11,    12,     0,
      13,    14,     0,   181,     0,     0,    15,     0,     0,     0,
       0,    16,     0,     0,     0,     0,    17,    18,    19,     0,
       0,     0,    20,    21,    22,    73,    23,    68,    69,    70,
      71,    72,     0,    74,    75,    76,    77,    78,     0,     0,
       0,    81,    82,    73,     0,     0,     0,     0,     0,     0,
       0,    74,    75,    76,    77,    78,    79,    80,     0,    81,
      82,    83,    11,    12,     0,     0,    14,   108,     0,     0,
       0,    15,     0,     0,     0,     0,    16,     0,     0,     0,
       0,    17,    18,    19,     0,     0,     0,    20,    21,    22,
       0,    23,    11,    12,     0,     0,    14,     0,     0,     0,
       0,    15,     0,     0,     0,     0,    16,     0,     0,     0,
       0,    17,    18,    19,     0,     0,     0,    20,    21,    22,
       0,    23,    11,    12,     0,     0,    14,     0,     0,     0,
       0,    15,     0,     0,     0,     0,    16,     0,     0,     0,
       0,    17,    18,    19,     0,     0,     0,    84,    21,    22,
       0,    23,    11,    12,     0,     0,    14,     0,     0,     0,
       0,    15,     0,     0,     0,     0,    16,     0,     0,     0,
       0,    17,    18,    19,     0,     0,     0,    20,    21,    22,
       0,    94,    11,    12,     0,     0,    14,     0,     0,     0,
       0,    15,     0,     0,     0,     0,    16,     0,     0,     0,
       0,    17,    18,    19,    73,     0,     0,   124,    21,    22,
       0,    23,    74,    75,    76,    77,    78,    79,    80,     0,
      81,    82,    83,    73,     0,     0,     0,     0,     0,     0,
     155,    74,    75,    76,    77,    78,    79,    80,     0,    81,
      82,    83,    73,   120,     0,     0,     0,     0,     0,   156,
      74,    75,    76,    77,    78,    79,    80,     0,    81,    82,
      83,    73,   125,     0,     0,     0,     0,     0,     0,    74,
      75,    76,    77,    78,    79,    80,     0,    81,    82,    83,
      73,   163,     0,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,    79,    80,     0,    81,    82,    83,    73,
     172,     0,     0,     0,     0,     0,     0,    74,    75,    76,
      77,    78,    79,    80,     0,    81,    82,    83,    73,   173,
       0,     0,     0,     0,     0,     0,    74,    75,    76,    77,
      78,    79,    80,    73,    81,    82,    83,     0,     0,     0,
       0,    74,    75,    76,    77,    78,    79,     0,     0,    81,
      82,    83
};

static const yytype_int16 yycheck[] =
{
      26,    13,   158,   125,    14,     3,     4,    24,     6,     7,
      73,    28,    28,     3,     4,    28,     6,     7,   174,    25,
      25,     8,    28,    28,    24,    24,    50,    25,    15,    16,
      17,    18,    19,    50,    50,    47,   158,    50,    24,    61,
      40,    41,    25,    25,    25,    28,    28,    28,    45,    24,
      47,    25,   174,    24,    28,    52,    66,    24,    45,    46,
      47,    48,    24,    50,   127,    52,   129,   130,     0,    26,
      32,    33,    34,    35,    36,   101,    45,    50,    40,    41,
      42,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,   120,    92,    83,    25,    50,   125,
      28,    24,    89,    50,    49,    92,   118,    28,    50,    32,
      33,    34,    35,    36,    37,    38,   138,    40,    41,    42,
      50,   143,   119,    28,    28,    16,    16,   153,   151,    47,
     119,   157,   119,    -1,   131,   122,   123,   163,   131,   151,
     127,    -1,   129,   130,   131,   167,   172,   173,   170,   175,
     176,    -1,    -1,   140,    -1,   177,    -1,   179,    -1,   181,
     186,   187,   188,     3,     4,    -1,     6,     7,   155,   156,
      -1,    -1,    -1,    13,    14,    15,    -1,    17,    18,    19,
      20,    21,    -1,    23,    24,    -1,    24,    27,    -1,    29,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    35,    36,    39,
      40,    41,    40,    41,    -1,    45,    46,    47,    -1,    49,
      50,     3,     4,    -1,     6,     7,    -1,    -1,    -1,    -1,
      -1,    13,    14,    15,    -1,    17,    18,    19,    20,    21,
      -1,    23,    24,    -1,    26,    -1,    -1,    29,    -1,    -1,
      -1,    -1,    34,    -1,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    -1,    45,    46,    47,    -1,    49,    50,     3,
       4,    -1,     6,     7,    -1,    -1,    -1,    -1,    -1,    13,
      14,    15,    -1,    17,    18,    19,    20,    21,    -1,    23,
      24,    -1,    26,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
      -1,    45,    46,    47,    -1,    49,    50,     3,     4,    -1,
       6,     7,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,
      -1,    17,    18,    19,    20,    21,    -1,    23,    24,    -1,
      -1,    27,    -1,    29,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    -1,    45,
      46,    47,    -1,    49,    50,     3,     4,    -1,     6,     7,
      -1,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,    17,
      18,    19,    20,    21,    -1,    23,    24,    -1,    -1,    27,
      -1,    29,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    -1,    45,    46,    47,
      -1,    49,    50,     3,     4,    -1,     6,     7,    -1,    -1,
      -1,    -1,    -1,    13,    14,    15,    -1,    17,    18,    19,
      20,    21,    -1,    23,    24,    -1,    26,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    -1,    45,    46,    47,    -1,    49,
      50,     3,     4,    -1,     6,     7,    -1,    -1,    -1,    -1,
      -1,    13,    14,    15,    -1,    17,    18,    19,    20,    21,
      -1,    23,    24,    -1,    26,    -1,    -1,    29,    -1,    -1,
      -1,    -1,    34,    -1,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    -1,    45,    46,    47,    -1,    49,    50,     3,
       4,    -1,     6,     7,    -1,    -1,    -1,    -1,    -1,    13,
      14,    15,    -1,    17,    18,    19,    20,    21,    -1,    23,
      24,    -1,    26,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
      -1,    45,    46,    47,    -1,    49,    50,     3,     4,    -1,
       6,     7,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,
      -1,    17,    18,    19,    20,    21,    -1,    23,    24,    -1,
      -1,    27,    -1,    29,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    -1,    45,
      46,    47,    -1,    49,    50,     3,     4,    -1,     6,     7,
      -1,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,    17,
      18,    19,    20,    21,    -1,    23,    24,    -1,    -1,    27,
      -1,    29,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    -1,    45,    46,    47,
      -1,    49,    50,     3,     4,    -1,     6,     7,    -1,    -1,
      -1,    -1,    -1,    13,    14,    15,    -1,    17,    18,    19,
      20,    21,    -1,    23,    24,    -1,    -1,    27,    -1,    29,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    -1,    45,    46,    47,    -1,    49,
      50,     3,     4,    -1,     6,     7,    -1,    -1,    -1,    -1,
      -1,    13,    14,    15,    -1,    17,    18,    19,    20,    21,
      -1,    23,    24,    -1,    -1,    27,    -1,    29,    -1,    -1,
      -1,    -1,    34,    -1,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    -1,    45,    46,    47,    -1,    49,    50,     3,
       4,    -1,     6,     7,    -1,    -1,    -1,    -1,    -1,    13,
      14,    15,    -1,    17,    18,    19,    20,    21,    -1,    23,
      24,    -1,    -1,    27,    -1,    29,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
      -1,    45,    46,    47,    -1,    49,    50,     3,     4,    -1,
       6,     7,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,
      -1,    17,    18,    19,    20,    21,    -1,    23,    24,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    -1,    45,
      46,    47,    24,    49,    50,     3,     4,    -1,     6,     7,
      32,    33,    34,    35,    36,    37,    38,    -1,    40,    41,
      42,    24,    20,    21,    -1,    23,    24,    -1,    50,    32,
      -1,    29,    35,    36,    -1,    -1,    34,    40,    41,    -1,
      -1,    39,    40,    41,    -1,    -1,    -1,    45,    46,    47,
      -1,    49,    50,     3,     4,    -1,     6,     7,    -1,    -1,
      -1,    -1,    -1,    13,    14,    15,    -1,    17,    18,    19,
      20,    21,    -1,    23,    24,    -1,    26,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    -1,    45,    46,    47,    -1,    49,
       3,     4,    -1,     6,     7,    -1,    -1,    -1,    -1,    -1,
      13,    14,    15,    -1,    17,    18,    19,    20,    21,    -1,
      23,    24,    -1,    26,    -1,    -1,    29,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    -1,    45,    46,    47,    24,    49,     8,     9,    10,
      11,    12,    -1,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    40,    41,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    -1,    40,
      41,    42,    20,    21,    -1,    -1,    24,    25,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    -1,    45,    46,    47,
      -1,    49,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    -1,    45,    46,    47,
      -1,    49,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    -1,    45,    46,    47,
      -1,    49,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    -1,    45,    46,    47,
      -1,    49,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,
      -1,    39,    40,    41,    24,    -1,    -1,    45,    46,    47,
      -1,    49,    32,    33,    34,    35,    36,    37,    38,    -1,
      40,    41,    42,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    32,    33,    34,    35,    36,    37,    38,    -1,    40,
      41,    42,    24,    25,    -1,    -1,    -1,    -1,    -1,    50,
      32,    33,    34,    35,    36,    37,    38,    -1,    40,    41,
      42,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    37,    38,    -1,    40,    41,    42,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      34,    35,    36,    37,    38,    -1,    40,    41,    42,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,    38,    -1,    40,    41,    42,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    38,    24,    40,    41,    42,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     6,     7,    13,    14,    15,    17,    18,
      19,    20,    21,    23,    24,    29,    34,    39,    40,    41,
      45,    46,    47,    49,    50,    61,    62,    63,    64,    65,
      66,    67,    69,    70,    71,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    85,    24,    24,    24,    81,
      24,    24,    85,    80,    81,    81,    81,    81,    81,     0,
      63,    26,    50,    50,    50,    50,    28,    50,     8,     9,
      10,    11,    12,    24,    32,    33,    34,    35,    36,    37,
      38,    40,    41,    42,    45,    69,    72,    81,    81,    50,
      69,    71,    85,    81,    49,    81,    84,    49,    69,    73,
      25,    62,    80,    81,    81,    81,    81,    81,    25,    84,
      81,    81,    81,    81,    81,    81,    81,    81,    24,    28,
      25,    81,    50,    50,    45,    25,    25,    28,    25,    28,
      28,    28,    27,    25,    25,    68,    85,    72,    26,    63,
      50,    81,    81,    26,    63,    64,    84,    84,    84,    73,
      25,    28,    45,    62,    81,    50,    50,    62,    16,    25,
      25,    68,    27,    25,    81,    81,    27,    26,    64,    65,
      26,    63,    25,    25,    16,    62,    62,    26,    63,    26,
      63,    26,    64,    65,    27,    27,    62,    62,    62,    27,
      27,    27
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    60,    61,    62,    62,    63,    63,    63,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    65,    66,    67,
      67,    68,    68,    69,    69,    69,    69,    69,    70,    71,
      71,    72,    72,    72,    73,    73,    74,    74,    75,    75,
      75,    75,    75,    75,    76,    76,    76,    76,    77,    77,
      77,    77,    78,    78,    78,    79,    80,    80,    80,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    82,    82,
      83,    83,    83,    83,    83,    84,    84,    85,    85,    85,
      85
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     2,     1,     1,     4,     5,
       4,     2,     3,     3,     3,     3,     3,     3,     2,     2,
       3,     1,     1,     3,     1,     3,     5,     7,     9,     9,
      11,    11,     8,    10,     7,     9,     9,    11,     7,     9,
       5,     7,     4,     4,     6,     6,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     4,     2,
       2,     2,     2,     2,     2,     2,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       1
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
#line 72 "src/main.y"
{
    NodeAttr *NA = new NodeAttr;
    root = parse_tree.NewRoot(STMT_NODE, COMP_STMT, *NA, Notype, yyvsp[0]);
}
#line 1731 "src/main.tab.cpp"
    break;

  case 3:
#line 79 "src/main.y"
             {yyval=yyvsp[0];}
#line 1737 "src/main.tab.cpp"
    break;

  case 4:
#line 80 "src/main.y"
                        {yyval=yyvsp[-1]; yyval->addSibling(yyvsp[0]);}
#line 1743 "src/main.tab.cpp"
    break;

  case 5:
#line 85 "src/main.y"
{
    yyval = new Node;
    yyval->lineno = lineno;
    yyval->kind = STMT_NODE;
    yyval->kind_kind = EMPTY_STMT;
    NodeAttr *NA = new NodeAttr;
    yyval->attr = *NA;
    yyval->seq = parse_tree.node_seq++;
}
#line 1757 "src/main.tab.cpp"
    break;

  case 6:
#line 94 "src/main.y"
                        {yyval = yyvsp[0];}
#line 1763 "src/main.tab.cpp"
    break;

  case 7:
#line 95 "src/main.y"
                 {yyval = yyvsp[0];}
#line 1769 "src/main.tab.cpp"
    break;

  case 8:
#line 99 "src/main.y"
           {yyval = yyvsp[0];}
#line 1775 "src/main.tab.cpp"
    break;

  case 9:
#line 100 "src/main.y"
             {yyval = yyvsp[0];}
#line 1781 "src/main.tab.cpp"
    break;

  case 10:
#line 101 "src/main.y"
           {yyval = yyvsp[0];}
#line 1787 "src/main.tab.cpp"
    break;

  case 11:
#line 102 "src/main.y"
                        {yyval = yyvsp[-1];}
#line 1793 "src/main.tab.cpp"
    break;

  case 12:
#line 103 "src/main.y"
                        {yyval = yyvsp[-1];}
#line 1799 "src/main.tab.cpp"
    break;

  case 13:
#line 104 "src/main.y"
                       {yyval = yyvsp[-1];}
#line 1805 "src/main.tab.cpp"
    break;

  case 14:
#line 105 "src/main.y"
                      {yyval = yyvsp[-1];}
#line 1811 "src/main.tab.cpp"
    break;

  case 15:
#line 106 "src/main.y"
                        {yyval = yyvsp[-1];}
#line 1817 "src/main.tab.cpp"
    break;

  case 16:
#line 107 "src/main.y"
                  {yyval = yyvsp[0];}
#line 1823 "src/main.tab.cpp"
    break;

  case 17:
#line 111 "src/main.y"
                    {yyval = yyvsp[0];}
#line 1829 "src/main.tab.cpp"
    break;

  case 18:
#line 115 "src/main.y"
                                        {
    Node* node = yyval;
    Node* child = new Node(yyvsp[-1]->lineno, STMT_NODE, COMP_STMT, *(new NodeAttr), Notype, parse_tree.node_seq++);
    child->addChild(yyvsp[-1]);
    node->addChild(child);
    yyval = node;
}
#line 1841 "src/main.tab.cpp"
    break;

  case 19:
#line 125 "src/main.y"
                                    {
    yyvsp[-3]->type = yyvsp[-4]->type;
    yyvsp[-3]->attr.symtbl_seq = symtbl.insert(yyvsp[-3]->attr.name, FUNC);
    symtbl.table[yyvsp[-3]->attr.name][yyvsp[-3]->attr.symtbl_seq].param_size = size;
    symtbl.table[yyvsp[-3]->attr.name][yyvsp[-3]->attr.symtbl_seq].return_type = cur->type;
    for(int i = 0; i < size; i++)
    {
        symtbl.table[yyvsp[-3]->attr.name][yyvsp[-3]->attr.symtbl_seq].param_type[i] = param[i];
    }
    size = 0;

    Node* node = new Node(yyvsp[-4]->lineno, DECL_NODE, FUNC_DECL, *(new NodeAttr), Notype, parse_tree.node_seq++);
    node->addChild(yyvsp[-4]);
    node->addChild(yyvsp[-3]);
    Node* child3 = new Node(yyvsp[-1]->lineno, LIST_NODE, PARAM_LIST, *(new NodeAttr), Notype, parse_tree.node_seq++);
    child3->addChild(yyvsp[-1]);
    node->addChild(child3);
    yyval = node;
}
#line 1865 "src/main.tab.cpp"
    break;

  case 20:
#line 144 "src/main.y"
                             {
    yyvsp[-2]->type = yyvsp[-3]->type;
    yyvsp[-2]->attr.symtbl_seq = symtbl.insert(yyvsp[-2]->attr.name, FUNC);
    symtbl.table[yyvsp[-2]->attr.name][yyvsp[-2]->attr.symtbl_seq].param_size = 0;
    symtbl.table[yyvsp[-2]->attr.name][yyvsp[-2]->attr.symtbl_seq].return_type = cur->type;
    size = 0;

    Node* node = new Node(yyvsp[-3]->lineno, DECL_NODE, FUNC_DECL, *(new NodeAttr), Notype, parse_tree.node_seq++);
    node->addChild(yyvsp[-3]);
    node->addChild(yyvsp[-2]);
    yyval = node;
}
#line 1882 "src/main.tab.cpp"
    break;

  case 21:
#line 158 "src/main.y"
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
    yyval = node; 
}
#line 1899 "src/main.tab.cpp"
    break;

  case 22:
#line 170 "src/main.y"
                      {
    yyval = yyvsp[-2];
    yyval->addSibling(yyvsp[0]);
}
#line 1908 "src/main.tab.cpp"
    break;

  case 23:
#line 177 "src/main.y"
                        {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
}
#line 1918 "src/main.tab.cpp"
    break;

  case 24:
#line 182 "src/main.y"
                       {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
}
#line 1928 "src/main.tab.cpp"
    break;

  case 25:
#line 187 "src/main.y"
                        {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
}
#line 1938 "src/main.tab.cpp"
    break;

  case 26:
#line 192 "src/main.y"
                       {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
}
#line 1948 "src/main.tab.cpp"
    break;

  case 27:
#line 197 "src/main.y"
                      {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
}
#line 1958 "src/main.tab.cpp"
    break;

  case 28:
#line 205 "src/main.y"
              {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[0]);
}
#line 1967 "src/main.tab.cpp"
    break;

  case 29:
#line 212 "src/main.y"
                    { 
    Node* child2 = new Node(yyvsp[0]->lineno, LIST_NODE, DECLARE_LIST, *(new NodeAttr), Notype, parse_tree.node_seq++);
    child2->addChild(yyvsp[0]);
    Node* node = new Node(yyvsp[-1]->lineno, DECL_NODE, VAR_DECL, *(new NodeAttr), yyvsp[-1]->type, parse_tree.node_seq++);
    node->addChild(yyvsp[-1]);
    node->addChild(child2);
    yyval = node; 
}
#line 1980 "src/main.tab.cpp"
    break;

  case 30:
#line 220 "src/main.y"
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
#line 1995 "src/main.tab.cpp"
    break;

  case 31:
#line 233 "src/main.y"
              {
    if(yyvsp[0]->attr.op != OP_ASSIGN) yyerror("初始化错误");
    yyval = yyvsp[0];
    yyval->kind = EXPR_NODE;
    yyval->kind_kind = OP_EXPR;
    yyvsp[0]->children[0]->attr.symtbl_seq = symtbl.insert(yyvsp[0]->children[0]->attr.name, VAR_VAR);
    symtbl.set_type(yyvsp[0]->children[0]->attr.name, yyvsp[0]->children[0]->attr.symtbl_seq, cur->type);
    yyvsp[0]->children[0]->type = cur->type;
}
#line 2009 "src/main.tab.cpp"
    break;

  case 32:
#line 242 "src/main.y"
             {
    yyval = yyvsp[0];
    yyval->attr.symtbl_seq = symtbl.insert(yyvsp[0]->attr.name, VAR_VAR);
    symtbl.set_type(yyvsp[0]->attr.name, yyvsp[0]->attr.symtbl_seq, cur->type);
    yyvsp[0]->type = cur->type;
}
#line 2020 "src/main.tab.cpp"
    break;

  case 33:
#line 248 "src/main.y"
                                        {yyval = yyvsp[-2]; yyval->addSibling(yyvsp[0]);}
#line 2026 "src/main.tab.cpp"
    break;

  case 34:
#line 253 "src/main.y"
              {
    yyval = yyvsp[0];
    yyval->kind = EXPR_NODE;
    yyval->kind_kind = OP_EXPR;
    yyvsp[0]->children[0]->attr.symtbl_seq = symtbl.insert(yyvsp[0]->children[0]->attr.name, CONST_VAR);
    yyvsp[0]->children[0]->type = cur->type;
}
#line 2038 "src/main.tab.cpp"
    break;

  case 35:
#line 260 "src/main.y"
                                                            {
    yyval = yyvsp[-2];
    yyval->addSibling(yyvsp[0]);
}
#line 2047 "src/main.tab.cpp"
    break;

  case 36:
#line 267 "src/main.y"
                                     {
    yyval = yyvsp[-4];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
}
#line 2057 "src/main.tab.cpp"
    break;

  case 37:
#line 272 "src/main.y"
                                                    {
    yyval = yyvsp[-6];
    yyval->addChild(yyvsp[-4]);
    NodeAttr* NA = new NodeAttr;
    Node* child2 = new Node(yyvsp[-1]->lineno, STMT_NODE, COMP_STMT, *NA, Notype, parse_tree.node_seq++);
    child2->addChild(yyvsp[-1]);
    yyval->addChild(child2);
}
#line 2070 "src/main.tab.cpp"
    break;

  case 38:
#line 283 "src/main.y"
                                                                        {
    yyval = yyvsp[-8];
    yyval->addChild(yyvsp[-6]);
    yyval->addChild(yyvsp[-4]);
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
}
#line 2082 "src/main.tab.cpp"
    break;

  case 39:
#line 290 "src/main.y"
                                                                        {
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
        symtbl.match(name);
        child = child->sibling;
    }
}
#line 2105 "src/main.tab.cpp"
    break;

  case 40:
#line 308 "src/main.y"
                                                                                       {
    yyval = yyvsp[-10];
    yyval->addChild(yyvsp[-8]);
    yyval->addChild(yyvsp[-6]);
    yyval->addChild(yyvsp[-4]);
    NodeAttr* NA = new NodeAttr;
    Node* child4 = new Node(yyvsp[-1]->lineno, STMT_NODE, COMP_STMT, *NA, Notype, parse_tree.node_seq++);
    child4->addChild(yyvsp[-1]);
    yyval->addChild(child4);
}
#line 2120 "src/main.tab.cpp"
    break;

  case 41:
#line 318 "src/main.y"
                                                                                       {
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
        symtbl.match(name);
        child = child->sibling;
    }
}
#line 2146 "src/main.tab.cpp"
    break;

  case 42:
#line 339 "src/main.y"
                                                            {
    yyval = yyvsp[-7];
    yyval->addChild(yyvsp[-4]);
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
}
#line 2157 "src/main.tab.cpp"
    break;

  case 43:
#line 345 "src/main.y"
                                                                           {
    yyval = yyvsp[-9];
    yyval->addChild(yyvsp[-6]);
    yyval->addChild(yyvsp[-4]);
    NodeAttr* NA = new NodeAttr;
    Node* child3 = new Node(yyvsp[-1]->lineno, STMT_NODE, COMP_STMT, *NA, Notype, parse_tree.node_seq++);
    child3->addChild(yyvsp[-1]);
    yyval->addChild(child3);
}
#line 2171 "src/main.tab.cpp"
    break;

  case 44:
#line 358 "src/main.y"
                                                       {
    yyval = yyvsp[-6];
    yyval->addChild(yyvsp[-4]);
    yyval->addChild(yyvsp[-2]);
    yyval->addSibling(yyvsp[-1]);
    yyvsp[-1]->addChild(yyvsp[0]);
}
#line 2183 "src/main.tab.cpp"
    break;

  case 45:
#line 365 "src/main.y"
                                                                   {
    yyval = yyvsp[-8];
    yyval->addChild(yyvsp[-6]);
    NodeAttr* NA = new NodeAttr;
    Node* child2 = new Node(yyvsp[-3]->lineno, STMT_NODE, COMP_STMT, *NA, Notype, parse_tree.node_seq++);
    child2->addChild(yyvsp[-3]);
    yyval->addChild(child2);
    yyval->addSibling(yyvsp[-1]);
    yyvsp[-1]->addChild(yyvsp[0]);
}
#line 2198 "src/main.tab.cpp"
    break;

  case 46:
#line 375 "src/main.y"
                                                                   {
    yyval = yyvsp[-8];
    yyval->addChild(yyvsp[-6]);
    yyval->addChild(yyvsp[-4]);

    NodeAttr* NA = new NodeAttr;
    Node* child3 = new Node(yyvsp[-1]->lineno, STMT_NODE, COMP_STMT, *NA, Notype, parse_tree.node_seq++);
    child3->addChild(yyvsp[-1]);
    yyvsp[-3]->addChild(child3);
    yyval->addSibling(yyvsp[-3]);
}
#line 2214 "src/main.tab.cpp"
    break;

  case 47:
#line 386 "src/main.y"
                                                                               {
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
    yyval->addSibling(yyvsp[-3]);
}
#line 2234 "src/main.tab.cpp"
    break;

  case 48:
#line 404 "src/main.y"
                                                         {
    yyval = yyvsp[-6];
    yyval->addChild(yyvsp[-4]);
    yyval->addChild(yyvsp[-2]);
    yyval->addSibling(yyvsp[-1]);
    yyvsp[-1]->addChild(yyvsp[0]);
}
#line 2246 "src/main.tab.cpp"
    break;

  case 49:
#line 411 "src/main.y"
                                                                     {
    yyval = yyvsp[-8];
    yyval->addChild(yyvsp[-6]);

    NodeAttr* NA = new NodeAttr;
    Node* child2 = new Node(yyvsp[-3]->lineno, STMT_NODE, COMP_STMT, *NA, Notype, parse_tree.node_seq++);
    child2->addChild(yyvsp[-3]);
    yyval->addChild(child2);
    yyval->addSibling(yyvsp[-1]);
    yyvsp[-1]->addChild(yyvsp[0]);
}
#line 2262 "src/main.tab.cpp"
    break;

  case 50:
#line 422 "src/main.y"
                                  {
    yyval = yyvsp[-4];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
}
#line 2272 "src/main.tab.cpp"
    break;

  case 51:
#line 427 "src/main.y"
                                                           {
    yyval = yyvsp[-6];
    yyval->addChild(yyvsp[-4]);
    NodeAttr* NA = new NodeAttr;
    Node* child2 = new Node(yyvsp[-1]->lineno, STMT_NODE, COMP_STMT, *NA, Notype, parse_tree.node_seq++);
    child2->addChild(yyvsp[-1]);
    yyval->addChild(child2);
}
#line 2285 "src/main.tab.cpp"
    break;

  case 52:
#line 438 "src/main.y"
                                 {
    yyval = yyvsp[-3];
    Node* child1 = new Node(yyvsp[-1]->lineno, LIST_NODE, PRINT_LIST, *(new NodeAttr), Notype, parse_tree.node_seq++);
    child1->addChild(yyvsp[-1]);
    yyval->addChild(child1);
}
#line 2296 "src/main.tab.cpp"
    break;

  case 53:
#line 444 "src/main.y"
                             {
    yyval = yyvsp[-3];
    yyval->addChild(yyvsp[-1]);
    yyvsp[-1]->attr.symtbl_seq = symtbl.insert(print_content, yyvsp[-1]->attr.valstr);
    symtbl.set_type(print_content, yyvsp[-1]->attr.symtbl_seq, String);
}
#line 2307 "src/main.tab.cpp"
    break;

  case 54:
#line 450 "src/main.y"
                                              {
    yyval = yyvsp[-5];
    yyvsp[-3]->attr.symtbl_seq = symtbl.insert(print_content, yyvsp[-3]->attr.valstr);
    symtbl.set_type(print_content, yyvsp[-3]->attr.symtbl_seq, String);
    yyval->addChild(yyvsp[-3]);
    Node* child2 = new Node(yyvsp[-1]->lineno, LIST_NODE, PRINT_LIST, *(new NodeAttr), Notype, parse_tree.node_seq++);
    child2->addChild(yyvsp[-1]);
    yyval->addChild(child2);
}
#line 2321 "src/main.tab.cpp"
    break;

  case 55:
#line 462 "src/main.y"
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
#line 2338 "src/main.tab.cpp"
    break;

  case 56:
#line 477 "src/main.y"
       {yyval = yyvsp[0];}
#line 2344 "src/main.tab.cpp"
    break;

  case 57:
#line 478 "src/main.y"
              {
    yyval = yyvsp[0];
}
#line 2352 "src/main.tab.cpp"
    break;

  case 58:
#line 481 "src/main.y"
                            {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
}
#line 2362 "src/main.tab.cpp"
    break;

  case 59:
#line 489 "src/main.y"
                {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
    parse_tree.max_temp++;
}
#line 2373 "src/main.tab.cpp"
    break;

  case 60:
#line 495 "src/main.y"
                 {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
    parse_tree.max_temp++;
}
#line 2384 "src/main.tab.cpp"
    break;

  case 61:
#line 501 "src/main.y"
                 {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
    parse_tree.max_temp++;
}
#line 2395 "src/main.tab.cpp"
    break;

  case 62:
#line 507 "src/main.y"
                {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
    parse_tree.max_temp++;
}
#line 2406 "src/main.tab.cpp"
    break;

  case 63:
#line 513 "src/main.y"
               {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
    parse_tree.max_temp++;
}
#line 2417 "src/main.tab.cpp"
    break;

  case 64:
#line 519 "src/main.y"
               {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
    parse_tree.max_temp++;
}
#line 2428 "src/main.tab.cpp"
    break;

  case 65:
#line 525 "src/main.y"
              {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
    parse_tree.max_temp++;
}
#line 2439 "src/main.tab.cpp"
    break;

  case 66:
#line 531 "src/main.y"
                 {
    yyval = yyvsp[-1];
    yyval->addChild(yyvsp[-2]);
    yyval->addChild(yyvsp[0]);
    parse_tree.max_temp++;
}
#line 2450 "src/main.tab.cpp"
    break;

  case 67:
#line 537 "src/main.y"
                     {
    Node* node = new Node(yyvsp[-2]->lineno, EXPR_NODE, FUNC_EXPR, *(new NodeAttr), symtbl.table[yyvsp[-2]->attr.name][yyvsp[-2]->attr.symtbl_seq].return_type, parse_tree.node_seq++);
    node->addChild(yyvsp[-2]);
    yyval = node;
    parse_tree.max_temp++;
}
#line 2461 "src/main.tab.cpp"
    break;

  case 68:
#line 543 "src/main.y"
                               {
    Node* node = new Node(yyvsp[-3]->lineno, EXPR_NODE, FUNC_EXPR, *(new NodeAttr), symtbl.table[yyvsp[-3]->attr.name][yyvsp[-3]->attr.symtbl_seq].return_type, parse_tree.node_seq++);
    node->addChild(yyvsp[-3]);
    Node* child2 = new Node(yyvsp[-1]->lineno, LIST_NODE, PARAM_LIST, *(new NodeAttr), Notype, parse_tree.node_seq++);
    child2->addChild(yyvsp[-1]);
    node->addChild(child2);
    yyval = node;
    parse_tree.max_temp++;
    parse_tree.max_temp++;
}
#line 2476 "src/main.tab.cpp"
    break;

  case 69:
#line 553 "src/main.y"
                          {
    yyval = yyvsp[0]; yyval->addChild(yyvsp[-1]); 
}
#line 2484 "src/main.tab.cpp"
    break;

  case 70:
#line 556 "src/main.y"
             {
    yyval = yyvsp[0]; 
    yyval->addChild(yyvsp[-1]);
}
#line 2493 "src/main.tab.cpp"
    break;

  case 71:
#line 560 "src/main.y"
                            {
    yyval = yyvsp[0]; 
    yyval->addChild(yyvsp[-1]); 
}
#line 2502 "src/main.tab.cpp"
    break;

  case 72:
#line 564 "src/main.y"
              {
    yyval = yyvsp[0]; 
    yyval->addChild(yyvsp[-1]); 
}
#line 2511 "src/main.tab.cpp"
    break;

  case 73:
#line 568 "src/main.y"
           {yyval = yyvsp[-1];yyval->addChild(yyvsp[0]);}
#line 2517 "src/main.tab.cpp"
    break;

  case 74:
#line 569 "src/main.y"
           {yyval = yyvsp[-1]; yyval->addChild(yyvsp[0]);}
#line 2523 "src/main.tab.cpp"
    break;

  case 75:
#line 570 "src/main.y"
                          { yyval = yyvsp[-1]; yyval->addChild(yyvsp[0]);}
#line 2529 "src/main.tab.cpp"
    break;

  case 76:
#line 571 "src/main.y"
                          {yyval = yyvsp[-2]; yyval->addChild(yyvsp[-1]); }
#line 2535 "src/main.tab.cpp"
    break;

  case 77:
#line 572 "src/main.y"
       {yyval = yyvsp[0];}
#line 2541 "src/main.tab.cpp"
    break;

  case 78:
#line 576 "src/main.y"
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
#line 2556 "src/main.tab.cpp"
    break;

  case 79:
#line 586 "src/main.y"
        {yyval = yyvsp[0];}
#line 2562 "src/main.tab.cpp"
    break;

  case 80:
#line 590 "src/main.y"
          {yyval = yyvsp[0];}
#line 2568 "src/main.tab.cpp"
    break;

  case 81:
#line 591 "src/main.y"
       {yyval = yyvsp[0];}
#line 2574 "src/main.tab.cpp"
    break;

  case 82:
#line 592 "src/main.y"
                           {
    yyval = yyvsp[0];
    yyvsp[0]->attr.symtbl_seq = symtbl.insert(const_content, yyvsp[0]->attr.valstr);
    symtbl.set_type(const_content, yyvsp[0]->attr.symtbl_seq, String);
}
#line 2584 "src/main.tab.cpp"
    break;

  case 83:
#line 597 "src/main.y"
       {yyval = yyvsp[0];}
#line 2590 "src/main.tab.cpp"
    break;

  case 84:
#line 598 "src/main.y"
        {yyval = yyvsp[0];}
#line 2596 "src/main.tab.cpp"
    break;

  case 85:
#line 602 "src/main.y"
       {yyval = yyvsp[0];}
#line 2602 "src/main.tab.cpp"
    break;

  case 86:
#line 603 "src/main.y"
                            {
    yyval = yyvsp[-2];
    yyval->addSibling(yyvsp[0]);
}
#line 2611 "src/main.tab.cpp"
    break;

  case 87:
#line 609 "src/main.y"
         {
    yyval = yyvsp[0];
    cur = yyval;
}
#line 2620 "src/main.tab.cpp"
    break;

  case 88:
#line 613 "src/main.y"
         {
    yyval = yyvsp[0];
    cur = yyval;
}
#line 2629 "src/main.tab.cpp"
    break;

  case 89:
#line 617 "src/main.y"
         {
    yyval = yyvsp[0];
    cur = yyval;
}
#line 2638 "src/main.tab.cpp"
    break;

  case 90:
#line 621 "src/main.y"
         {
    yyval = yyvsp[0];
    cur = yyval;
}
#line 2647 "src/main.tab.cpp"
    break;


#line 2651 "src/main.tab.cpp"

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
#line 627 "src/main.y"


int yyerror(char const* message)
{
    cout << message << " at line " << lineno << endl;
    return -1;
}
