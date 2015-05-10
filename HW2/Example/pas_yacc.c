/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "pas_yacc.y" /* yacc.c:339  */

	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include "pascal.h"

#line 73 "pas_yacc.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "pas_yacc.h".  */
#ifndef YY_YY_PAS_YACC_H_INCLUDED
# define YY_YY_PAS_YACC_H_INCLUDED
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
    PROG = 258,
    PROC = 259,
    BG = 260,
    END = 261,
    INT = 262,
    BOOL = 263,
    TRUE = 264,
    LP = 265,
    RP = 266,
    LSP = 267,
    RSP = 268,
    FALSE = 269,
    CC = 270,
    DOT = 271,
    SEMI = 272,
    VAR = 273,
    ARRAY = 274,
    OF = 275,
    DOTDOT = 276,
    IF = 277,
    THEN = 278,
    READ = 279,
    WRITE = 280,
    WHILE = 281,
    DO = 282,
    ELSE = 283,
    ASSIGN = 284,
    COMMA = 285,
    COLON = 286,
    ID = 287,
    NUM = 288,
    OR = 289,
    AND = 290,
    NOT = 291,
    EQ = 292,
    NE = 293,
    LT = 294,
    GT = 295,
    LE = 296,
    GE = 297,
    ADD = 298,
    MINUS = 299,
    DIV = 300,
    TIMES = 301
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

#endif /* !YY_YY_PAS_YACC_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 171 "pas_yacc.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   109

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  80
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  140

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      45,    46
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    20,    20,    21,    24,    27,    28,    31,    32,    35,
      38,    39,    42,    43,    46,    49,    52,    53,    56,    57,
      60,    63,    66,    69,    70,    73,    74,    77,    78,    79,
      80,    83,    86,    89,    92,    95,    96,    99,   102,   105,
     106,   109,   110,   111,   114,   115,   118,   121,   122,   125,
     128,   129,   132,   135,   136,   139,   140,   141,   142,   145,
     146,   147,   148,   149,   150,   153,   154,   155,   158,   159,
     160,   163,   164,   165,   168,   169,   172,   175,   176,   177,
     178
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PROG", "PROC", "BG", "END", "INT",
  "BOOL", "TRUE", "LP", "RP", "LSP", "RSP", "FALSE", "CC", "DOT", "SEMI",
  "VAR", "ARRAY", "OF", "DOTDOT", "IF", "THEN", "READ", "WRITE", "WHILE",
  "DO", "ELSE", "ASSIGN", "COMMA", "COLON", "ID", "NUM", "OR", "AND",
  "NOT", "EQ", "NE", "LT", "GT", "LE", "GE", "ADD", "MINUS", "DIV",
  "TIMES", "$accept", "prog", "block", "vardecs", "morevd", "vardec",
  "moreid", "type", "arrtype", "inrange", "simtype", "prodecs", "proc",
  "stmts", "comstmt", "morestm", "stmt", "simstmt", "assstmt", "prostmt",
  "reastmt", "inpvar", "moreinp", "wristmt", "outval", "moreout",
  "strstmt", "ifstmt", "whistmt", "expr", "simexpr", "addterm", "term",
  "mulfact", "factor", "relop", "sign", "addop", "mulop", "variab",
  "indvar", "const", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301
};
# endif

#define YYPACT_NINF -86

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-86)))

#define YYTABLE_NINF -75

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      11,   -10,    25,    12,   -86,    17,    -2,    27,    38,    18,
      30,   -86,    21,    39,    32,    22,    19,    -2,    42,    14,
     -86,   -86,    38,    18,     5,   -86,    43,    17,    46,    51,
      59,   -28,    -6,   -86,    53,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,    44,   -86,   -86,   -86,   -86,   -86,    60,
     -86,   -86,   -86,    -2,   -86,   -28,    45,   -28,   -86,   -86,
      48,    26,    -5,   -28,    14,    65,   -28,    47,   -86,    67,
      64,    49,   -86,    52,   -86,    14,   -86,   -86,   -86,   -86,
     -86,   -86,   -28,   -86,   -28,   -86,   -86,   -86,    -5,   -26,
       6,   -86,   -86,    68,    53,   -86,   -86,    62,    71,    63,
      45,    74,   -28,    76,   -86,   -86,    77,   -86,   -86,   -86,
     -86,   -86,    -5,   -86,   -86,   -86,   -86,    -5,   -86,   -86,
      56,    70,    14,    49,   -86,    52,   -86,   -86,   -26,     6,
     -86,    13,    66,   -86,   -86,   -86,   -86,   -86,    14,   -86
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     0,     1,     6,     0,     0,    19,    11,
       0,     2,     0,     0,     0,     0,     0,     8,     0,     0,
       4,    21,    19,    11,     0,     5,     0,     6,     0,     0,
       0,    67,    32,    41,    24,    25,    27,    28,    29,    30,
      26,    42,    43,     0,    75,    18,    10,    16,    17,     0,
       9,    13,    12,     8,    20,    67,     0,    67,    65,    66,
       0,    47,     0,    67,     0,     0,    67,     0,     7,     0,
      74,    36,    34,    40,    38,     0,    59,    60,    61,    63,
      62,    64,    67,    79,    67,    80,    78,    77,     0,    51,
      54,    55,    56,     0,    24,    22,    31,     0,     0,     0,
       0,     0,    67,     0,    46,    48,     0,    58,    70,    68,
      69,    49,     0,    73,    72,    71,    52,     0,    76,    23,
       0,     0,     0,    36,    33,    40,    37,    57,    51,    54,
      15,     0,    44,    35,    39,    50,    53,    14,     0,    45
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -86,   -86,    69,   -86,    40,    85,    72,   -86,   -86,   -86,
     -39,    75,   -86,   -86,    86,     4,   -64,   -86,   -86,   -86,
     -86,     0,   -22,   -86,     1,   -23,   -86,   -86,   -86,   -29,
      23,   -24,    -4,   -20,   -85,   -86,   -86,   -86,   -86,   -55,
     -86,   -86
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     7,     8,    25,    26,    16,    50,    51,    98,
      52,    13,    14,    20,    33,    65,    34,    35,    36,    37,
      38,    71,   101,    39,    73,   103,    40,    41,    42,    74,
      61,   111,    89,   116,    90,    82,    62,   112,   117,    43,
      44,    92
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      94,    72,    60,   107,    83,    84,    63,    91,   108,    85,
      86,   104,    47,    48,     1,    58,    59,   109,   110,    19,
      47,    48,     3,   -74,    49,     4,    69,    70,    87,     5,
       9,    88,   129,    91,    93,     6,    28,    96,    29,    30,
      31,   113,    12,    11,    19,    72,    32,    17,    15,    22,
      24,   114,   115,    18,    23,   106,    55,    91,   132,    27,
      53,    56,    91,    76,    77,    78,    79,    80,    81,    57,
      64,    95,    67,    66,   139,    75,    63,    70,    99,   100,
      97,   118,   102,   120,   121,   124,   122,   126,   127,   130,
     131,    10,   137,    68,   138,    46,    54,    45,   119,    21,
     123,   133,   134,   125,   135,   105,     0,     0,   128,   136
};

static const yytype_int16 yycheck[] =
{
      64,    56,    31,    88,     9,    10,    12,    62,    34,    14,
      15,    75,     7,     8,     3,    43,    44,    43,    44,     5,
       7,     8,    32,    29,    19,     0,    55,    32,    33,    17,
      32,    36,   117,    88,    63,    18,    22,    66,    24,    25,
      26,    35,     4,    16,     5,   100,    32,    17,    30,    17,
      31,    45,    46,    32,    32,    84,    10,   112,   122,    17,
      17,    10,   117,    37,    38,    39,    40,    41,    42,    10,
      17,     6,    12,    29,   138,    27,    12,    32,    11,    30,
      33,    13,    30,    21,    13,    11,    23,    11,    11,    33,
      20,     6,   131,    53,    28,    23,    27,    22,    94,    13,
     100,   123,   125,   102,   128,    82,    -1,    -1,   112,   129
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    48,    32,     0,    17,    18,    49,    50,    32,
      52,    16,     4,    58,    59,    30,    53,    17,    32,     5,
      60,    61,    17,    32,    31,    51,    52,    17,    22,    24,
      25,    26,    32,    61,    63,    64,    65,    66,    67,    70,
      73,    74,    75,    86,    87,    58,    53,     7,     8,    19,
      54,    55,    57,    17,    49,    10,    10,    10,    43,    44,
      76,    77,    83,    12,    17,    62,    29,    12,    51,    76,
      32,    68,    86,    71,    76,    27,    37,    38,    39,    40,
      41,    42,    82,     9,    10,    14,    15,    33,    36,    79,
      81,    86,    88,    76,    63,     6,    76,    33,    56,    11,
      30,    69,    30,    72,    63,    77,    76,    81,    34,    43,
      44,    78,    84,    35,    45,    46,    80,    85,    13,    62,
      21,    13,    23,    68,    11,    71,    11,    11,    79,    81,
      33,    20,    63,    69,    72,    78,    80,    57,    28,    63
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    48,    49,    50,    50,    51,    51,    52,
      53,    53,    54,    54,    55,    56,    57,    57,    58,    58,
      59,    60,    61,    62,    62,    63,    63,    64,    64,    64,
      64,    65,    66,    67,    68,    69,    69,    70,    71,    72,
      72,    73,    73,    73,    74,    74,    75,    76,    76,    77,
      78,    78,    79,    80,    80,    81,    81,    81,    81,    82,
      82,    82,    82,    82,    82,    83,    83,    83,    84,    84,
      84,    85,    85,    85,    86,    86,    87,    88,    88,    88,
      88
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     0,     3,     4,     0,     3,     0,     4,
       3,     0,     1,     1,     6,     3,     1,     1,     3,     0,
       4,     1,     4,     3,     0,     1,     1,     1,     1,     1,
       1,     3,     1,     5,     1,     3,     0,     5,     1,     3,
       0,     1,     1,     1,     6,     8,     4,     1,     3,     3,
       3,     0,     2,     3,     0,     1,     1,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     1,     1,     1,
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

#define YYBACKUP(Token, Value)                                  \
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
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
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
#line 20 "pas_yacc.y" /* yacc.c:1646  */
    {printf("prog => PROG ID SEMI block DOT \n********Parsed OK!**********\n");}
#line 1346 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 3:
#line 21 "pas_yacc.y" /* yacc.c:1646  */
    {printf("********Parsing failed! \n");}
#line 1352 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 4:
#line 24 "pas_yacc.y" /* yacc.c:1646  */
    {printf("block=>vardecs prodecs stmts \n");}
#line 1358 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 5:
#line 27 "pas_yacc.y" /* yacc.c:1646  */
    {printf("vardecs => VAR vardec SEMI morevd \n");}
#line 1364 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 6:
#line 28 "pas_yacc.y" /* yacc.c:1646  */
    {printf("vardecs => Null \n");}
#line 1370 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 7:
#line 31 "pas_yacc.y" /* yacc.c:1646  */
    {printf("morevd => vardec SEMI morevd \n");}
#line 1376 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 8:
#line 32 "pas_yacc.y" /* yacc.c:1646  */
    {printf("morevd => Null \n");}
#line 1382 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 9:
#line 35 "pas_yacc.y" /* yacc.c:1646  */
    {printf("vardec => ID moreid COLON type\n");}
#line 1388 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 10:
#line 38 "pas_yacc.y" /* yacc.c:1646  */
    {printf("moreid	=>	COMMA ID moreid \n");}
#line 1394 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 11:
#line 39 "pas_yacc.y" /* yacc.c:1646  */
    {printf("moreid => Null \n");}
#line 1400 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 12:
#line 42 "pas_yacc.y" /* yacc.c:1646  */
    {printf("type => simtype \n");}
#line 1406 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 13:
#line 43 "pas_yacc.y" /* yacc.c:1646  */
    {printf("type => arrtype \n");}
#line 1412 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 14:
#line 46 "pas_yacc.y" /* yacc.c:1646  */
    {printf("arrtype => ARRAY LSP inrange RSP OF simtype \n");}
#line 1418 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 15:
#line 49 "pas_yacc.y" /* yacc.c:1646  */
    {printf("inrange => NUM DOTDOT NUM \n");}
#line 1424 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 16:
#line 52 "pas_yacc.y" /* yacc.c:1646  */
    {printf("simtype => INT \n");}
#line 1430 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 17:
#line 53 "pas_yacc.y" /* yacc.c:1646  */
    {printf("simtype => BOOL \n");}
#line 1436 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 18:
#line 56 "pas_yacc.y" /* yacc.c:1646  */
    {printf("prodecs => proc SEMI prodecs \n");}
#line 1442 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 19:
#line 57 "pas_yacc.y" /* yacc.c:1646  */
    {printf("prodecs => Null \n");}
#line 1448 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 20:
#line 60 "pas_yacc.y" /* yacc.c:1646  */
    {printf("proc => PROC ID SEMI block \n");}
#line 1454 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 21:
#line 63 "pas_yacc.y" /* yacc.c:1646  */
    {printf("stmts => comstmt \n");}
#line 1460 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 22:
#line 66 "pas_yacc.y" /* yacc.c:1646  */
    {printf("comstmt => BG stmt morestm	END \n");}
#line 1466 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 23:
#line 69 "pas_yacc.y" /* yacc.c:1646  */
    {printf("morestm => SEMI stmt morestm \n");}
#line 1472 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 24:
#line 70 "pas_yacc.y" /* yacc.c:1646  */
    {printf("morestm => Null \n");}
#line 1478 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 25:
#line 73 "pas_yacc.y" /* yacc.c:1646  */
    {printf("stmt => simstmt \n");}
#line 1484 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 26:
#line 74 "pas_yacc.y" /* yacc.c:1646  */
    {printf("stmt => strstmt \n");}
#line 1490 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 27:
#line 77 "pas_yacc.y" /* yacc.c:1646  */
    {printf("simstmt => assstmt \n");}
#line 1496 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 28:
#line 78 "pas_yacc.y" /* yacc.c:1646  */
    {printf("simstmt => prostmt \n");}
#line 1502 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 29:
#line 79 "pas_yacc.y" /* yacc.c:1646  */
    {printf("simstmt => reastmt \n");}
#line 1508 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 30:
#line 80 "pas_yacc.y" /* yacc.c:1646  */
    {printf("simstmt => wristmt \n");}
#line 1514 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 31:
#line 83 "pas_yacc.y" /* yacc.c:1646  */
    {printf("assstmt => variab ASSIGN expr \n");}
#line 1520 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 32:
#line 86 "pas_yacc.y" /* yacc.c:1646  */
    {printf("prostmt => ID \n");}
#line 1526 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 33:
#line 89 "pas_yacc.y" /* yacc.c:1646  */
    {printf("reastmt => READ LP inpvar moreinp RP \n");}
#line 1532 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 34:
#line 92 "pas_yacc.y" /* yacc.c:1646  */
    {printf("inpvar => variab \n");}
#line 1538 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 35:
#line 95 "pas_yacc.y" /* yacc.c:1646  */
    {printf("moreinp => COMMA inpvar moreinp \n");}
#line 1544 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 36:
#line 96 "pas_yacc.y" /* yacc.c:1646  */
    {printf("moreinp => Null \n");}
#line 1550 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 37:
#line 99 "pas_yacc.y" /* yacc.c:1646  */
    {printf("wristmt => WRITE LP outval moreout RP \n");}
#line 1556 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 38:
#line 102 "pas_yacc.y" /* yacc.c:1646  */
    {printf("outval => expr \n");}
#line 1562 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 39:
#line 105 "pas_yacc.y" /* yacc.c:1646  */
    {printf("moreout => COMMA outval moreout \n");}
#line 1568 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 40:
#line 106 "pas_yacc.y" /* yacc.c:1646  */
    {printf("moreout => Null \n");}
#line 1574 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 41:
#line 109 "pas_yacc.y" /* yacc.c:1646  */
    {printf("strstmt => comstmt \n");}
#line 1580 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 42:
#line 110 "pas_yacc.y" /* yacc.c:1646  */
    {printf("moreout => ifstmt \n");}
#line 1586 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 43:
#line 111 "pas_yacc.y" /* yacc.c:1646  */
    {printf("moreout => whistmt \n");}
#line 1592 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 44:
#line 114 "pas_yacc.y" /* yacc.c:1646  */
    {printf("ifstmt => IF LP expr RP THEN stmt \n");}
#line 1598 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 45:
#line 115 "pas_yacc.y" /* yacc.c:1646  */
    {printf("ifstmt => IF LP expr RP THEN stmt ELSE stmt \n");}
#line 1604 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 46:
#line 118 "pas_yacc.y" /* yacc.c:1646  */
    {printf("whistmt => WHILE expr DO stmt \n");}
#line 1610 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 47:
#line 121 "pas_yacc.y" /* yacc.c:1646  */
    {printf("expr => simexpr \n");}
#line 1616 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 48:
#line 122 "pas_yacc.y" /* yacc.c:1646  */
    {printf("expr => simexpr relop simexpr \n");}
#line 1622 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 49:
#line 125 "pas_yacc.y" /* yacc.c:1646  */
    {printf("simexpr => sign term addterm \n");}
#line 1628 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 50:
#line 128 "pas_yacc.y" /* yacc.c:1646  */
    {printf("addterm => addop term addterm \n");}
#line 1634 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 51:
#line 129 "pas_yacc.y" /* yacc.c:1646  */
    {printf("addterm => Null \n");}
#line 1640 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 52:
#line 132 "pas_yacc.y" /* yacc.c:1646  */
    {printf("term => factor mulfact \n");}
#line 1646 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 53:
#line 135 "pas_yacc.y" /* yacc.c:1646  */
    {printf("mulfact => mulop factor mulfact \n");}
#line 1652 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 54:
#line 136 "pas_yacc.y" /* yacc.c:1646  */
    {printf("mulfact => Null \n");}
#line 1658 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 55:
#line 139 "pas_yacc.y" /* yacc.c:1646  */
    {printf("factor => variab \n");}
#line 1664 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 56:
#line 140 "pas_yacc.y" /* yacc.c:1646  */
    {printf("factor => const \n");}
#line 1670 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 57:
#line 141 "pas_yacc.y" /* yacc.c:1646  */
    {printf("factor => LP expr RP \n");}
#line 1676 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 58:
#line 142 "pas_yacc.y" /* yacc.c:1646  */
    {printf("factor => NOT factor \n");}
#line 1682 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 59:
#line 145 "pas_yacc.y" /* yacc.c:1646  */
    {printf("relop => EQ \n");}
#line 1688 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 60:
#line 146 "pas_yacc.y" /* yacc.c:1646  */
    {printf("relop => NE \n");}
#line 1694 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 61:
#line 147 "pas_yacc.y" /* yacc.c:1646  */
    {printf("relop => LT \n");}
#line 1700 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 62:
#line 148 "pas_yacc.y" /* yacc.c:1646  */
    {printf("relop => LE \n");}
#line 1706 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 63:
#line 149 "pas_yacc.y" /* yacc.c:1646  */
    {printf("relop => GT \n");}
#line 1712 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 64:
#line 150 "pas_yacc.y" /* yacc.c:1646  */
    {printf("relop => GE \n");}
#line 1718 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 65:
#line 153 "pas_yacc.y" /* yacc.c:1646  */
    {printf("sign => ADD \n");}
#line 1724 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 66:
#line 154 "pas_yacc.y" /* yacc.c:1646  */
    {printf("strstmt => MINUS \n");}
#line 1730 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 67:
#line 155 "pas_yacc.y" /* yacc.c:1646  */
    {printf("sign => Null \n");}
#line 1736 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 68:
#line 158 "pas_yacc.y" /* yacc.c:1646  */
    {printf("addop => ADD \n");}
#line 1742 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 69:
#line 159 "pas_yacc.y" /* yacc.c:1646  */
    {printf("addop => MINUS \n");}
#line 1748 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 70:
#line 160 "pas_yacc.y" /* yacc.c:1646  */
    {printf("addop => OR \n");}
#line 1754 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 71:
#line 163 "pas_yacc.y" /* yacc.c:1646  */
    {printf("mulop => TIMES \n");}
#line 1760 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 72:
#line 164 "pas_yacc.y" /* yacc.c:1646  */
    {printf("mulop => DIV \n");}
#line 1766 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 73:
#line 165 "pas_yacc.y" /* yacc.c:1646  */
    {printf("mulop => AND \n");}
#line 1772 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 74:
#line 168 "pas_yacc.y" /* yacc.c:1646  */
    {printf("variab => ID \n");}
#line 1778 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 75:
#line 169 "pas_yacc.y" /* yacc.c:1646  */
    {printf("variab => indvar \n");}
#line 1784 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 76:
#line 172 "pas_yacc.y" /* yacc.c:1646  */
    {printf("indvar => ID LSP expr RSP \n");}
#line 1790 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 77:
#line 175 "pas_yacc.y" /* yacc.c:1646  */
    {printf("const => NUM \n");}
#line 1796 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 78:
#line 176 "pas_yacc.y" /* yacc.c:1646  */
    {printf("const => CC \n");}
#line 1802 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 79:
#line 177 "pas_yacc.y" /* yacc.c:1646  */
    {printf("const => TRUE \n");}
#line 1808 "pas_yacc.c" /* yacc.c:1646  */
    break;

  case 80:
#line 178 "pas_yacc.y" /* yacc.c:1646  */
    {printf("const => FALSE \n");}
#line 1814 "pas_yacc.c" /* yacc.c:1646  */
    break;


#line 1818 "pas_yacc.c" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
                  yystos[*yyssp], yyvsp);
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
#line 181 "pas_yacc.y" /* yacc.c:1906  */


int yyerror(char *s)
{
	printf("%s\n",s);
}
