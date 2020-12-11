/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser1.y" /* yacc.c:339  */

	void yyerror(char* s);
	int yylex();
	#include "stdio.h"
	#include "stdlib.h"
	#include "ctype.h"
	#include "string.h"
	void ins();
	void insV();
	int flag=0;
	int insert_flag = 0;

	extern char curid[20];
	extern char curtype[20];
	extern char curval[20];
    extern char curfunc[20];
	extern char prevop[20] = "EWF";


#line 86 "y.tab.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    IF = 258,
    INT = 259,
    CHAR = 260,
    FLOAT = 261,
    DOUBLE = 262,
    LONG = 263,
    SHORT = 264,
    SIGNED = 265,
    UNSIGNED = 266,
    STRUCT = 267,
    RETURN = 268,
    MAIN = 269,
    VOID = 270,
    WHILE = 271,
    FOR = 272,
    DO = 273,
    BREAK = 274,
    CONTINUE = 275,
    GOTO = 276,
    ENDIF = 277,
    SWITCH = 278,
    CASE = 279,
    DEFAULT = 280,
    identifier = 281,
    integer_constant = 282,
    string_constant = 283,
    float_constant = 284,
    character_constant = 285,
    ELSE = 286,
    MOD_EQUAL = 287,
    MULTIPLY_EQUAL = 288,
    DIVIDE_EQUAL = 289,
    ADD_EQUAL = 290,
    SUBTRACT_EQUAL = 291,
    OR_OR = 292,
    AND_AND = 293,
    EQUAL = 294,
    NOT_EQUAL = 295,
    LESS_EQUAL = 296,
    LESS = 297,
    GREAT_EQUAL = 298,
    GREAT = 299,
    SIZEOF = 300,
    NOT = 301,
    INCREMENT = 302,
    DECREMENT = 303
  };
#endif
/* Tokens.  */
#define IF 258
#define INT 259
#define CHAR 260
#define FLOAT 261
#define DOUBLE 262
#define LONG 263
#define SHORT 264
#define SIGNED 265
#define UNSIGNED 266
#define STRUCT 267
#define RETURN 268
#define MAIN 269
#define VOID 270
#define WHILE 271
#define FOR 272
#define DO 273
#define BREAK 274
#define CONTINUE 275
#define GOTO 276
#define ENDIF 277
#define SWITCH 278
#define CASE 279
#define DEFAULT 280
#define identifier 281
#define integer_constant 282
#define string_constant 283
#define float_constant 284
#define character_constant 285
#define ELSE 286
#define MOD_EQUAL 287
#define MULTIPLY_EQUAL 288
#define DIVIDE_EQUAL 289
#define ADD_EQUAL 290
#define SUBTRACT_EQUAL 291
#define OR_OR 292
#define AND_AND 293
#define EQUAL 294
#define NOT_EQUAL 295
#define LESS_EQUAL 296
#define LESS 297
#define GREAT_EQUAL 298
#define GREAT 299
#define SIZEOF 300
#define NOT 301
#define INCREMENT 302
#define DECREMENT 303

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 233 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  33
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   253

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  79
/* YYNRULES -- Number of rules.  */
#define YYNRULES  156
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  239

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   303

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    51,     2,     2,
      62,    63,    49,    47,    59,    48,    64,    50,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    58,
       2,    37,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    60,     2,    61,    40,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    56,     2,    57,     2,     2,     2,     2,
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
      35,    36,    38,    39,    41,    42,    43,    44,    45,    46,
      52,    53,    54,    55
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    58,    58,    61,    62,    66,    67,    68,    71,    71,
      73,    73,    76,    77,    80,    83,    86,    87,    90,    90,
      92,    92,    92,    95,    96,    99,    99,   100,   103,   104,
     105,   108,   108,   111,   111,   114,   117,   118,   122,   122,
     122,   122,   123,   124,   125,   126,   127,   130,   130,   130,
     130,   133,   133,   133,   133,   136,   136,   139,   139,   142,
     145,   148,   151,   151,   154,   157,   158,   161,   161,   164,
     165,   168,   168,   169,   169,   170,   170,   171,   174,   177,
     178,   181,   182,   185,   188,   189,   192,   193,   194,   197,
     198,   199,   202,   205,   206,   209,   212,   213,   216,   216,
     217,   217,   218,   218,   219,   219,   220,   220,   221,   221,
     222,   223,   226,   229,   229,   232,   235,   236,   239,   240,
     243,   246,   247,   250,   251,   252,   253,   254,   255,   258,
     259,   262,   263,   266,   267,   270,   270,   270,   273,   273,
     276,   277,   280,   281,   284,   285,   285,   288,   291,   291,
     294,   297,   298,   301,   302,   303,   304
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "INT", "CHAR", "FLOAT", "DOUBLE",
  "LONG", "SHORT", "SIGNED", "UNSIGNED", "STRUCT", "RETURN", "MAIN",
  "VOID", "WHILE", "FOR", "DO", "BREAK", "CONTINUE", "GOTO", "ENDIF",
  "SWITCH", "CASE", "DEFAULT", "identifier", "integer_constant",
  "string_constant", "float_constant", "character_constant", "ELSE",
  "MOD_EQUAL", "MULTIPLY_EQUAL", "DIVIDE_EQUAL", "ADD_EQUAL",
  "SUBTRACT_EQUAL", "'='", "OR_OR", "AND_AND", "'^'", "EQUAL", "NOT_EQUAL",
  "LESS_EQUAL", "LESS", "GREAT_EQUAL", "GREAT", "'+'", "'-'", "'*'", "'/'",
  "'%'", "SIZEOF", "NOT", "INCREMENT", "DECREMENT", "'{'", "'}'", "';'",
  "','", "'['", "']'", "'('", "')'", "'.'", "$accept", "begin_parse",
  "declarations", "declaration", "structure_dec", "$@1",
  "structure_content", "variable_dec", "structure_initialize", "variables",
  "multiple_varaiables", "identifier_name", "$@2", "extended_identifier",
  "$@3", "array_identifier", "array_dims", "$@4", "initilization",
  "string_initilization", "$@5", "array_initialization", "$@6",
  "array_values", "multiple_array_values", "datatype", "unsigned_grammar",
  "signed_grammar", "long_grammar", "short_grammar", "function_dec",
  "function_datatype", "function_parameters", "parameters",
  "all_parameter_identifiers", "multiple_parameters",
  "parameter_identifier", "$@7", "extended_parameter", "statement",
  "multiple_statement", "statments", "expression_statment",
  "conditional_statements", "extended_conditional_statements",
  "iterative_statements", "for_initialization", "return_statement",
  "return_suffix", "break_statement", "expression", "expressions", "$@8",
  "$@9", "$@10", "$@11", "$@12", "$@13", "simple_expression",
  "simple_expression_breakup", "and_expression", "and_expression_breakup",
  "unary_relation_expression", "regular_expression",
  "regular_expression_breakup", "relational_operators", "sum_expression",
  "sum_operators", "term", "multiply_operators", "factor", "iden",
  "extended_iden", "func", "func_call", "arguments", "arguments_list",
  "extended_arguments", "constant", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,    61,   292,   293,
      94,   294,   295,   296,   297,   298,   299,    43,    45,    42,
      47,    37,   300,   301,   302,   303,   123,   125,    59,    44,
      91,    93,    40,    41,    46
};
# endif

#define YYPACT_NINF -111

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-111)))

#define YYTABLE_NINF -34

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     139,  -111,  -111,  -111,  -111,    16,    39,    13,    75,    26,
    -111,    57,  -111,   139,  -111,  -111,  -111,    44,  -111,   122,
    -111,  -111,  -111,  -111,  -111,    16,    39,  -111,  -111,    16,
      39,  -111,    52,  -111,  -111,    18,    23,    27,    61,  -111,
      28,  -111,  -111,  -111,  -111,  -111,    36,  -111,  -111,   -21,
    -111,    52,  -111,  -111,  -111,    30,   154,   218,  -111,    -2,
    -111,  -111,  -111,    37,   122,  -111,    31,    72,   -17,    41,
      43,   154,    48,    45,  -111,  -111,  -111,  -111,     3,   154,
    -111,     3,  -111,    52,  -111,  -111,  -111,  -111,  -111,  -111,
    -111,    50,  -111,    63,    60,  -111,   144,   -23,  -111,    40,
    -111,  -111,  -111,    54,   218,     3,  -111,    65,  -111,    51,
    -111,  -111,     3,    52,  -111,  -111,    55,     3,   191,    93,
    -111,     3,  -111,   -20,   154,    58,    53,  -111,     3,  -111,
       3,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,
    -111,    20,    20,  -111,  -111,  -111,    20,  -111,  -111,  -111,
    -111,  -111,  -111,  -111,  -111,     3,    88,  -111,  -111,    59,
    -111,  -111,    74,  -111,  -111,  -111,    73,  -111,    76,  -111,
    -111,     3,    80,    90,    83,    92,  -111,  -111,  -111,  -111,
      63,    60,   -13,   -23,  -111,     3,     3,     3,     3,     3,
       3,    95,  -111,  -111,   137,   147,   154,   154,   118,  -111,
       3,     3,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,
    -111,  -111,  -111,   121,  -111,  -111,  -111,  -111,   148,  -111,
       3,   115,    83,   138,   154,  -111,   130,   146,  -111,   178,
    -111,  -111,  -111,   149,   152,   178,  -111,  -111,  -111
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,    38,    39,    40,    41,    56,    58,    54,    50,     0,
      46,     0,     2,     4,     7,     5,    13,     0,     6,    63,
      55,    42,    57,    43,    51,    56,    58,    45,    47,    56,
      58,    44,     8,     1,     3,    18,     0,    17,     0,    59,
       0,    52,    53,    48,    49,    18,     0,    14,    60,    24,
      12,     0,    15,    67,    62,    66,     0,    11,    21,     0,
      19,    20,    16,    70,    63,    64,     0,     0,     0,     0,
       0,     0,     0,   140,   153,   154,   155,   156,     0,    80,
      82,     0,    77,     0,    61,    72,    71,    73,    74,    75,
      76,     0,    97,   114,   117,   119,   122,   130,   134,   139,
     138,   145,   146,     0,    11,     0,    25,     0,    23,     0,
      68,    65,     0,     0,    93,    92,     0,     0,     0,     0,
      95,   149,   118,   139,    80,     0,     0,    81,     0,   112,
       0,   115,   127,   128,   124,   126,   123,   125,   131,   132,
     120,     0,     0,   135,   136,   137,     0,   108,   104,   106,
     100,   102,    98,   110,   111,     0,     0,    96,   141,     0,
      10,    22,     0,    31,    27,    69,     0,    94,     0,    91,
      89,     0,     0,     0,   152,     0,   148,    79,    78,   144,
     114,   117,   121,   129,   133,     0,     0,     0,     0,     0,
       0,     0,   143,     9,    30,     0,     0,     0,     0,    90,
       0,     0,   150,   147,   113,   116,   109,   105,   107,   101,
     103,    99,   142,    31,    26,    28,    29,    32,    85,    86,
       0,     0,   152,     0,     0,    83,     0,     0,   151,     0,
      84,    87,    88,    37,     0,     0,    35,    34,    36
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -111,  -111,   198,  -111,  -111,  -111,   109,     6,  -111,   -28,
    -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,    21,
    -111,  -111,  -111,    -4,  -111,     5,  -111,  -111,    33,    38,
    -111,  -111,  -111,   150,  -111,  -111,  -111,  -111,  -111,   -56,
    -111,   108,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,
     -67,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -110,    56,
     106,    62,   -70,  -111,  -111,  -111,    94,  -111,    96,  -111,
      91,   -75,  -111,  -111,  -111,  -111,  -111,    17,  -111
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    14,    46,   103,    82,    16,    36,
      52,    37,    49,    60,   105,    61,   108,   162,   214,   164,
     195,   216,   223,   234,   236,    83,    31,    27,    21,    23,
      18,    19,    39,    40,    54,    65,    55,    63,   110,   124,
      85,   125,    86,    87,   225,    88,   171,    89,   115,    90,
      91,   157,   190,   188,   189,   186,   187,   185,    92,   129,
      93,   131,    94,    95,   140,   141,    96,   142,    97,   146,
      98,    99,   158,   100,   101,   175,   176,   202,   102
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      84,   116,   166,   123,    47,    17,    15,   168,   122,    73,
      74,    75,    76,    77,   126,   119,    58,    24,    17,    15,
      20,    25,    26,    62,    38,   106,   143,   144,   145,    73,
      74,    75,    76,    77,   138,   139,    78,   123,   161,    59,
     155,   114,   123,    22,   156,    81,    73,    74,    75,    76,
      77,   172,    32,   123,   174,   123,    78,    33,    41,   107,
     181,   198,    43,   104,    42,    81,   123,   123,    44,    38,
      35,   123,   147,   148,   149,   150,   151,   152,    45,    28,
      48,    50,    81,    29,    30,    47,    51,    53,   191,    64,
     221,    56,    57,   112,   153,   154,   123,   109,   113,   130,
     155,   128,   163,   117,   156,   118,   120,   121,   127,   173,
     104,   159,   165,   167,   192,   178,   179,   193,   206,   207,
     208,   209,   210,   211,   170,   123,     1,     2,     3,     4,
       5,     6,     7,     8,   222,   194,   196,    10,   199,   197,
     218,   219,   201,     1,     2,     3,     4,     5,     6,     7,
       8,     9,   200,   226,    10,   203,   212,    66,     1,     2,
       3,     4,     5,     6,     7,     8,    67,    68,   230,    10,
      69,    70,    71,    72,   213,   217,   220,   -33,   227,   224,
      73,    74,    75,    76,    77,   132,   133,   134,   135,   136,
     137,   138,   139,   231,   229,     1,     2,     3,     4,     5,
       6,     7,     8,    67,   232,   233,    10,    78,   235,   237,
      79,    34,    80,   160,   111,   215,    81,    73,    74,    75,
      76,    77,     1,     2,     3,     4,     5,     6,     7,     8,
      67,   238,   177,    10,   180,   182,   204,   184,   183,   228,
       0,     0,     0,   205,    78,     0,     0,     0,     0,   169,
       0,     0,     0,    81
};

static const yytype_int16 yycheck[] =
{
      56,    68,   112,    78,    32,     0,     0,   117,    78,    26,
      27,    28,    29,    30,    81,    71,    37,     4,    13,    13,
       4,     8,     9,    51,    19,    27,    49,    50,    51,    26,
      27,    28,    29,    30,    47,    48,    53,   112,   105,    60,
      60,    58,   117,     4,    64,    62,    26,    27,    28,    29,
      30,   118,    26,   128,   121,   130,    53,     0,    25,    61,
     130,   171,    29,    57,    26,    62,   141,   142,    30,    64,
      26,   146,    32,    33,    34,    35,    36,    37,    26,     4,
      62,    58,    62,     8,     9,   113,    59,    26,   155,    59,
     200,    63,    56,    62,    54,    55,   171,    60,    26,    39,
      60,    38,    37,    62,    64,    62,    58,    62,    58,    16,
     104,    57,    61,    58,    26,    57,    63,    58,   185,   186,
     187,   188,   189,   190,   118,   200,     4,     5,     6,     7,
       8,     9,    10,    11,   201,    61,    63,    15,    58,    63,
     196,   197,    59,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    62,   220,    15,    63,    61,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,   224,    15,
      16,    17,    18,    19,    37,    28,    58,    56,    63,    31,
      26,    27,    28,    29,    30,    41,    42,    43,    44,    45,
      46,    47,    48,    63,    56,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    58,    27,    15,    53,    59,    57,
      56,    13,    58,   104,    64,   194,    62,    26,    27,    28,
      29,    30,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   235,   124,    15,   128,   141,   180,   146,   142,   222,
      -1,    -1,    -1,   181,    53,    -1,    -1,    -1,    -1,    58,
      -1,    -1,    -1,    62
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      15,    66,    67,    68,    69,    72,    73,    90,    95,    96,
       4,    93,     4,    94,     4,     8,     9,    92,     4,     8,
       9,    91,    26,     0,    67,    26,    74,    76,    90,    97,
      98,    93,    94,    93,    94,    26,    70,    74,    62,    77,
      58,    59,    75,    26,    99,   101,    63,    56,    37,    60,
      78,    80,    74,   102,    59,   100,     3,    12,    13,    16,
      17,    18,    19,    26,    27,    28,    29,    30,    53,    56,
      58,    62,    72,    90,   104,   105,   107,   108,   110,   112,
     114,   115,   123,   125,   127,   128,   131,   133,   135,   136,
     138,   139,   143,    71,    72,    79,    27,    61,    81,    60,
     103,    98,    62,    26,    58,   113,   115,    62,    62,   104,
      58,    62,   127,   136,   104,   106,   115,    58,    38,   124,
      39,   126,    41,    42,    43,    44,    45,    46,    47,    48,
     129,   130,   132,    49,    50,    51,   134,    32,    33,    34,
      35,    36,    37,    54,    55,    60,    64,   116,   137,    57,
      71,   115,    82,    37,    84,    61,   123,    58,   123,    58,
      72,   111,   115,    16,   115,   140,   141,   106,    57,    63,
     125,   127,   131,   133,   135,   122,   120,   121,   118,   119,
     117,   115,    26,    58,    61,    85,    63,    63,   123,    58,
      62,    59,   142,    63,   124,   126,   115,   115,   115,   115,
     115,   115,    61,    37,    83,    84,    86,    28,   104,   104,
      58,   123,   115,    87,    31,   109,   115,    63,   142,    56,
     104,    63,    58,    27,    88,    59,    89,    57,    88
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    65,    66,    67,    67,    68,    68,    68,    70,    69,
      71,    71,    72,    72,    73,    74,    75,    75,    77,    76,
      78,    79,    78,    80,    80,    82,    81,    81,    83,    83,
      83,    85,    84,    87,    86,    88,    89,    89,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    91,    91,    91,
      91,    92,    92,    92,    92,    93,    93,    94,    94,    95,
      96,    97,    98,    98,    99,   100,   100,   102,   101,   103,
     103,   104,   104,   104,   104,   104,   104,   104,   105,   106,
     106,   107,   107,   108,   109,   109,   110,   110,   110,   111,
     111,   111,   112,   113,   113,   114,   115,   115,   117,   116,
     118,   116,   119,   116,   120,   116,   121,   116,   122,   116,
     116,   116,   123,   124,   124,   125,   126,   126,   127,   127,
     128,   129,   129,   130,   130,   130,   130,   130,   130,   131,
     131,   132,   132,   133,   133,   134,   134,   134,   135,   135,
     136,   136,   137,   137,   138,   138,   138,   139,   140,   140,
     141,   142,   142,   143,   143,   143,   143
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     0,     7,
       2,     0,     3,     1,     3,     2,     2,     0,     0,     3,
       1,     0,     3,     2,     0,     0,     4,     2,     1,     1,
       0,     0,     3,     0,     5,     2,     2,     0,     1,     1,
       1,     1,     2,     2,     2,     2,     1,     1,     2,     2,
       0,     1,     2,     2,     0,     1,     0,     1,     0,     2,
       3,     3,     2,     0,     2,     2,     0,     0,     3,     2,
       0,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       0,     2,     1,     6,     2,     0,     5,     7,     7,     1,
       2,     1,     2,     1,     2,     2,     2,     1,     0,     3,
       0,     3,     0,     3,     0,     3,     0,     3,     0,     3,
       1,     1,     2,     3,     0,     2,     3,     0,     2,     1,
       2,     2,     0,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     2,     3,     2,     3,     1,     1,     4,     1,     0,
       2,     3,     0,     1,     1,     1,     1
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
        case 8:
#line 71 "parser1.y" /* yacc.c:1646  */
    { ins(); }
#line 1516 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 90 "parser1.y" /* yacc.c:1646  */
    { ins(); }
#line 1522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 92 "parser1.y" /* yacc.c:1646  */
    {strcpy(prevop,"=");}
#line 1528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 99 "parser1.y" /* yacc.c:1646  */
    {insDim();}
#line 1534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 108 "parser1.y" /* yacc.c:1646  */
    {strcpy(prevop,"=");}
#line 1540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 108 "parser1.y" /* yacc.c:1646  */
    { insV(); }
#line 1546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 111 "parser1.y" /* yacc.c:1646  */
    {strcpy(prevop,"=");}
#line 1552 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 145 "parser1.y" /* yacc.c:1646  */
    {strcpy(curfunc,curid); ins();}
#line 1558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 161 "parser1.y" /* yacc.c:1646  */
    { insparam(); ins(); }
#line 1564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 216 "parser1.y" /* yacc.c:1646  */
    {strcpy(prevop,"=");}
#line 1570 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 217 "parser1.y" /* yacc.c:1646  */
    {strcpy(prevop,"+=");}
#line 1576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 218 "parser1.y" /* yacc.c:1646  */
    {strcpy(prevop,"-=");}
#line 1582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 219 "parser1.y" /* yacc.c:1646  */
    {strcpy(prevop,"*=");}
#line 1588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 220 "parser1.y" /* yacc.c:1646  */
    {strcpy(prevop,"/=");}
#line 1594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 221 "parser1.y" /* yacc.c:1646  */
    {strcpy(prevop,"%=");}
#line 1600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 250 "parser1.y" /* yacc.c:1646  */
    {strcpy(prevop,">=");}
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 251 "parser1.y" /* yacc.c:1646  */
    {strcpy(prevop,"<=");}
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 252 "parser1.y" /* yacc.c:1646  */
    {strcpy(prevop,">");}
#line 1618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 253 "parser1.y" /* yacc.c:1646  */
    {strcpy(prevop,"<");}
#line 1624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 254 "parser1.y" /* yacc.c:1646  */
    {strcpy(prevop,"==");}
#line 1630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 255 "parser1.y" /* yacc.c:1646  */
    {strcpy(prevop,"!=");}
#line 1636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 301 "parser1.y" /* yacc.c:1646  */
    { insV(); }
#line 1642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 302 "parser1.y" /* yacc.c:1646  */
    { insV(); }
#line 1648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 303 "parser1.y" /* yacc.c:1646  */
    { insV(); }
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 304 "parser1.y" /* yacc.c:1646  */
    { insV(); }
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1664 "y.tab.c" /* yacc.c:1646  */
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
#line 306 "parser1.y" /* yacc.c:1906  */


extern FILE *yyin;
extern int yylineno;
extern char *yytext;
void insert_SymbolTable_type(char *,char *);
void insert_SymbolTable_value(char *, char *, char *);
void insert_ConstantTable(char *, char *);
void insert_SymbolTable_arraydim(char *, char *);
void insert_SymbolTable_funcparam(char *, char *);
void printSymbolTable();
void printConstantTable();

int main()
{

	yyin = fopen("input.c","r");
	yyparse();

	if(flag == 0)
	{
		printf("Status: Parsing Complete - Valid %s\n", prevop);
		//printf("%s", prevop);
		printf("%30s SYMBOL TABLE \n", " ");
		printf("%30s %s\n", " ", "------------");
		printSymbolTable();

		printf("\n\n%30s CONSTANT TABLE \n", " ");
		printf("%30s %s\n", " ", "--------------");
		printConstantTable();
	}	
}

void yyerror(char *s)
{
	printf("%d %s %s\n", yylineno, s, yytext);
	flag=1;
	printf("Status: Parsing Failed - Invalid\n");
}

void ins()
{
	insert_SymbolTable_type(curid,curtype);
}

void insV()
{	
	if(strcmp(prevop, "=") == 0)
	{	insert_SymbolTable_value(curid,curval,prevop);
	}
}	

void insDim()
{
    insert_SymbolTable_arraydim(curid, curval);
}

void insparam()
{
    insert_SymbolTable_funcparam(curfunc, curid);
}

int yywrap()
{
	return 1;
}
