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
#line 1 "parser2.y" /* yacc.c:339  */

	void yyerror(char* s);
	int yylex();
	#include "stdio.h"
	#include "stdlib.h"
	#include "ctype.h"
	#include "string.h"
	void insert_type();
	void insert_value();
	void insert_dimensions();
	void insert_parameters();
	void remove_scope (int );
	int check_scope(char*);
	int check_function(char *);
	void insert_SymbolTable_nest(char*, int);
	void insert_SymbolTable_paramscount(char*, int);
	int getSTparamscount(char*);
	int check_duplicate(char*);
	int check_declaration(char*, char *);
	int check_params(char*);
	int duplicate(char *s);
	int check_array(char*);
	void insert_SymbolTable_function(char*);
	char gettype(char*,int);
	void push(char *s);
	void codegen();
	void codeassign();
	char* itoa(int num, char* str, int base);
	void reverse(char str[], int length); 
	void swap(char*,char*);
	void label1();
	void label2();
	void label3();
	void label4();
	void label5();
	void label6();
	void genunary();
	void codegencon();
	void start_function();
	void end_function();
	void arggen();
	void callgen();

	extern int flag=0;
	int insert_flag = 0;
	//int params_count=0;
	int call_params_count=0;
	int array_flag = 0;
	int array_tac_flag = 0;
	int top = 0,count=0,ltop=0,lno=0;
	char temp[3] = "t";

	extern char current_identifier[20];
	extern char current_type[20];
	extern char current_value[20];
    extern char current_function[20];
	extern char previous_operator[20];
	extern int current_nested_val;
	char currfunctype[100];
	char currfunccall[100];
	extern int params_count;
	int call_params_count;


#line 131 "y.tab.c" /* yacc.c:339  */

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
    array_identifier = 282,
    integer_constant = 283,
    string_constant = 284,
    float_constant = 285,
    character_constant = 286,
    ELSE = 287,
    MOD_EQUAL = 288,
    MULTIPLY_EQUAL = 289,
    DIVIDE_EQUAL = 290,
    ADD_EQUAL = 291,
    SUBTRACT_EQUAL = 292,
    OR_OR = 293,
    AND_AND = 294,
    EQUAL = 295,
    NOT_EQUAL = 296,
    LESS_EQUAL = 297,
    LESS = 298,
    GREAT_EQUAL = 299,
    GREAT = 300,
    SIZEOF = 301,
    NOT = 302,
    INCREMENT = 303,
    DECREMENT = 304
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
#define array_identifier 282
#define integer_constant 283
#define string_constant 284
#define float_constant 285
#define character_constant 286
#define ELSE 287
#define MOD_EQUAL 288
#define MULTIPLY_EQUAL 289
#define DIVIDE_EQUAL 290
#define ADD_EQUAL 291
#define SUBTRACT_EQUAL 292
#define OR_OR 293
#define AND_AND 294
#define EQUAL 295
#define NOT_EQUAL 296
#define LESS_EQUAL 297
#define LESS 298
#define GREAT_EQUAL 299
#define GREAT 300
#define SIZEOF 301
#define NOT 302
#define INCREMENT 303
#define DECREMENT 304

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

#line 280 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   280

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  87
/* YYNRULES -- Number of rules.  */
#define YYNRULES  168
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  250

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    52,     2,     2,
      63,    64,    50,    48,    60,    49,     2,    51,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    59,
       2,    38,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    61,     2,    62,    41,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    57,     2,    58,     2,     2,     2,     2,
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
      35,    36,    37,    39,    40,    42,    43,    44,    45,    46,
      47,    53,    54,    55,    56
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   103,   103,   106,   107,   111,   112,   113,   116,   116,
     118,   118,   121,   122,   125,   128,   131,   132,   135,   135,
     139,   139,   141,   141,   141,   144,   145,   148,   148,   149,
     152,   153,   154,   157,   157,   160,   160,   163,   166,   167,
     171,   171,   171,   171,   172,   173,   174,   175,   176,   179,
     179,   179,   179,   182,   182,   182,   182,   185,   185,   188,
     188,   191,   194,   197,   197,   197,   200,   200,   200,   203,
     206,   207,   210,   210,   213,   214,   217,   217,   218,   218,
     219,   219,   220,   223,   223,   226,   227,   230,   231,   234,
     234,   234,   237,   238,   241,   241,   241,   242,   242,   243,
     243,   243,   246,   247,   248,   251,   252,   265,   269,   269,
     278,   278,   285,   285,   293,   293,   300,   300,   307,   307,
     315,   316,   317,   321,   322,   325,   326,   329,   330,   333,
     334,   337,   338,   339,   340,   341,   342,   345,   346,   349,
     350,   353,   354,   357,   358,   359,   362,   363,   366,   377,
     377,   387,   388,   389,   392,   392,   418,   418,   421,   422,
     424,   424,   424,   424,   424,   427,   428,   429,   430
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
  "SWITCH", "CASE", "DEFAULT", "identifier", "array_identifier",
  "integer_constant", "string_constant", "float_constant",
  "character_constant", "ELSE", "MOD_EQUAL", "MULTIPLY_EQUAL",
  "DIVIDE_EQUAL", "ADD_EQUAL", "SUBTRACT_EQUAL", "'='", "OR_OR", "AND_AND",
  "'^'", "EQUAL", "NOT_EQUAL", "LESS_EQUAL", "LESS", "GREAT_EQUAL",
  "GREAT", "'+'", "'-'", "'*'", "'/'", "'%'", "SIZEOF", "NOT", "INCREMENT",
  "DECREMENT", "'{'", "'}'", "';'", "','", "'['", "']'", "'('", "')'",
  "$accept", "begin_parse", "declarations", "declaration", "structure_dec",
  "$@1", "structure_content", "variable_dec", "structure_initialize",
  "variables", "multiple_variables", "identifier_name", "$@2", "$@3",
  "extended_identifier", "$@4", "array_iden", "array_dims", "$@5",
  "initilization", "string_initilization", "$@6", "array_initialization",
  "$@7", "array_values", "multiple_array_values", "datatype",
  "unsigned_grammar", "signed_grammar", "long_grammar", "short_grammar",
  "function_dec", "function_datatype", "function_parameters", "$@8", "$@9",
  "parameters", "$@10", "all_parameter_identifiers", "multiple_parameters",
  "parameter_identifier", "$@11", "extended_parameter", "statement",
  "multiple_statement", "$@12", "statments", "expression_statment",
  "conditional_statements", "$@13", "$@14",
  "extended_conditional_statements", "iterative_statements", "$@15",
  "$@16", "$@17", "$@18", "$@19", "for_initialization", "return_statement",
  "break_statement", "expression", "$@20", "$@21", "$@22", "$@23", "$@24",
  "$@25", "simple_expression", "and_expression",
  "unary_relation_expression", "regular_expression",
  "relational_operators", "sum_expression", "sum_operators", "term",
  "MULOP", "factor", "mutable", "$@26", "immutable", "call", "@27",
  "arguments", "arguments_list", "exp", "constant", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,    61,   293,
     294,    94,   295,   296,   297,   298,   299,   300,    43,    45,
      42,    47,    37,   301,   302,   303,   304,   123,   125,    59,
      44,    91,    93,    40,    41
};
# endif

#define YYPACT_NINF -84

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-84)))

#define YYTABLE_NINF -100

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     233,   -84,   -84,   -84,   -84,     6,    22,    21,    69,     2,
     -84,    15,   -84,   233,   -84,   -84,   -84,    63,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,     6,    22,   -84,   -84,     6,
      22,   -84,    66,   -84,   -84,   -28,   -84,     1,    14,   -84,
     265,   -84,   -84,   -84,   -84,   -84,    40,   -84,   -84,   -25,
     -25,   -84,    66,   -84,   -84,    30,   245,   -84,   -23,   -84,
     -84,   -84,   -84,    72,   -84,    73,    49,   245,    66,    95,
     -84,    79,   -84,   -84,   -84,    60,   167,    66,    68,   -84,
      65,   -84,   -84,   -84,   -84,   -84,    95,    95,    91,    92,
     -84,   157,   -11,    36,   -84,   -84,   -84,   -84,   -84,    71,
     -84,   -84,    70,   265,   -84,    74,    75,    82,    83,    76,
     -84,   -84,   -84,   -84,    90,   -84,   -84,   -84,   118,   -84,
     -84,    93,    91,   106,   -84,   -84,    94,   -84,    87,    95,
      95,   -84,   -84,   -84,   -84,   -84,   -84,   161,   -84,   -84,
     161,   -84,   -84,   -84,   161,   115,   125,   101,   -84,   -84,
      95,   -84,   105,   -84,   205,   -84,    37,   167,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,    -9,    95,   -84,
      92,   -84,   -11,    36,   -84,   108,   -84,   -84,   -84,   -84,
     -84,   -33,   -84,    95,   -84,   -84,    95,   107,    37,   110,
     165,    95,    95,    95,    95,    95,    95,   -84,   -84,   -84,
     -84,   -84,   141,   146,   -84,   145,   151,   -84,   -31,   -32,
     -84,   -84,   -84,   155,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,    -9,   -84,   191,   167,   -84,   -84,    95,   -84,   162,
     169,   -84,   167,    95,   -30,   191,   -84,   -84,   193,   -84,
     159,   -84,   -84,   167,   -84,   167,   170,   -84,   -84,   -84
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,    40,    41,    42,    43,    58,    60,    56,    52,     0,
      48,     0,     2,     4,     7,     5,    13,     0,     6,    63,
      57,    44,    59,    45,    53,    58,    60,    47,    49,    58,
      60,    46,     8,     1,     3,    18,    20,     0,    17,    61,
      68,    54,    55,    50,    51,    18,     0,    14,    62,    26,
      26,    12,     0,    15,    66,     0,    11,    23,     0,    19,
      22,    21,    16,     0,    64,     0,     0,    11,     0,     0,
      27,     0,    25,    72,    67,    71,    83,     0,     0,    10,
     148,   149,   165,   166,   167,   168,     0,     0,    24,   124,
     126,   128,   130,   138,   142,   147,   146,   152,   153,     0,
      33,    29,    75,    68,    69,     0,     0,     0,     0,     0,
      88,    82,    65,    77,     0,    76,    78,    79,     0,    80,
      81,     0,   122,   147,     9,   154,     0,   127,     0,     0,
       0,   135,   136,   132,   134,   131,   133,     0,   139,   140,
       0,   143,   144,   145,     0,    32,     0,     0,    73,    70,
       0,   105,     0,    94,     0,   107,    83,    83,    87,   118,
     114,   116,   110,   112,   108,   120,   121,   157,     0,   151,
     123,   125,   129,   137,   141,    33,    28,    30,    31,    34,
      74,     0,   106,     0,   104,   102,     0,     0,    83,     0,
       0,     0,     0,     0,     0,     0,     0,   160,   161,   162,
     163,   164,     0,   156,   159,     0,     0,    89,     0,     0,
     103,    85,    84,     0,   119,   115,   117,   111,   113,   109,
     155,     0,   150,     0,    83,    95,    97,     0,   158,    39,
       0,    90,    83,     0,     0,     0,    37,    36,    93,    96,
       0,   100,    38,    83,    91,    83,     0,    92,    98,   101
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -84,   -84,   215,   -84,   -84,   -84,   179,     3,   -84,   -20,
     -84,   -84,   -84,   -84,   197,   -84,   -84,   -84,   -84,   -84,
     113,   -84,   -84,   -84,    26,   -84,    11,   -84,   -84,    50,
      54,   -84,   -84,   -84,   -84,   -84,   160,   -84,   -84,   -84,
     -84,   -84,   -84,   -76,   -84,   -84,    77,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -83,   -84,   -84,   -84,   -84,   -84,   -84,   -67,   133,
     -72,   -84,   -84,   129,   -84,   127,   -84,   134,   -68,   -84,
     -84,   -84,   -84,   -84,   -84,    56,   -84
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    14,    46,    66,   111,    16,    37,
      53,    38,    49,    50,    59,    69,    60,    72,    99,   176,
     101,   146,   178,   206,   230,   236,    68,    31,    27,    21,
      23,    18,    19,    39,    40,    76,    55,    63,    74,   104,
      75,   102,   148,   188,   113,   114,   189,   115,   116,   224,
     238,   244,   117,   183,   232,   233,   118,   246,   186,   119,
     120,   121,   196,   194,   195,   192,   193,   191,   122,    89,
      90,    91,   137,    92,   140,    93,   144,    94,   123,   126,
      96,    97,   167,   202,   203,   204,    98
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     112,    95,    88,    15,   128,    70,   129,   129,   129,   129,
      20,    17,    47,    57,   127,    33,    15,   197,    95,   198,
     199,   200,   201,   152,    17,    24,    22,   226,    32,    25,
      26,   207,    62,   225,   241,    48,    58,   138,   139,    71,
     105,     1,     2,     3,     4,     5,     6,     7,     8,    65,
     106,    54,    10,   107,   108,   -99,   109,    47,   171,    67,
      51,    95,    95,    80,    81,    82,    83,    84,    85,    95,
      67,   187,    95,    28,    52,    41,    95,    29,    30,    43,
      42,   190,    95,   181,    44,   205,   141,   142,   143,    35,
      36,    86,    45,    36,    64,   -86,   110,    56,    73,    77,
      87,    80,    81,    82,    83,    84,    85,    78,   214,   215,
     216,   217,   218,   219,    54,    95,   208,   100,    95,   209,
     103,    80,    81,    82,    83,    84,    85,   124,   125,    86,
     129,   147,   130,   145,   151,   155,   157,   150,    87,   159,
     160,   161,   162,   163,   164,   153,   154,   156,   231,    86,
     240,   169,   158,   175,   179,   168,   239,   185,    87,    95,
     234,   165,   166,   180,   182,   -35,   210,   247,   212,   248,
     105,     1,     2,     3,     4,     5,     6,     7,     8,    65,
     106,   213,    10,   107,   108,   -99,   109,    80,    81,    82,
      83,    84,    85,    80,    81,    82,    83,    84,    85,   131,
     132,   133,   134,   135,   136,   220,   221,   222,   223,     1,
       2,     3,     4,     5,     6,     7,     8,    65,   227,   229,
      10,    86,   235,   245,    87,   243,   110,   237,    34,   249,
      87,    80,    81,    82,    83,    84,    85,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    79,    61,    10,     1,
       2,     3,     4,     5,     6,     7,     8,    65,   177,    86,
      10,   242,   170,   149,   184,   211,   172,   173,    87,     1,
       2,     3,     4,     5,     6,     7,     8,   228,   174,     0,
      10
};

static const yytype_int16 yycheck[] =
{
      76,    69,    69,     0,    87,    28,    39,    39,    39,    39,
       4,     0,    32,    38,    86,     0,    13,    26,    86,    28,
      29,    30,    31,   106,    13,     4,     4,    59,    26,     8,
       9,    64,    52,    64,    64,    63,    61,    48,    49,    62,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    40,    15,    16,    17,    18,    19,    77,   130,    56,
      59,   129,   130,    26,    27,    28,    29,    30,    31,   137,
      67,   154,   140,     4,    60,    25,   144,     8,     9,    29,
      26,   157,   150,   150,    30,   168,    50,    51,    52,    26,
      27,    54,    26,    27,    64,    58,    59,    57,    26,    26,
      63,    26,    27,    28,    29,    30,    31,    58,   191,   192,
     193,   194,   195,   196,   103,   183,   183,    38,   186,   186,
      60,    26,    27,    28,    29,    30,    31,    59,    63,    54,
      39,    61,    40,    62,    59,    59,    18,    63,    63,    33,
      34,    35,    36,    37,    38,    63,    63,    57,   224,    54,
     233,    64,    59,    38,    29,    61,   232,   154,    63,   227,
     227,    55,    56,    62,    59,    57,    59,   243,    58,   245,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    16,    15,    16,    17,    18,    19,    26,    27,    28,
      29,    30,    31,    26,    27,    28,    29,    30,    31,    42,
      43,    44,    45,    46,    47,    64,    60,    62,    57,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    63,    28,
      15,    54,    60,    64,    63,    32,    59,    58,    13,    59,
      63,    26,    27,    28,    29,    30,    31,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    67,    50,    15,     4,
       5,     6,     7,     8,     9,    10,    11,    12,   145,    54,
      15,   235,   129,   103,    59,   188,   137,   140,    63,     4,
       5,     6,     7,     8,     9,    10,    11,   221,   144,    -1,
      15
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      15,    66,    67,    68,    69,    72,    73,    91,    96,    97,
       4,    94,     4,    95,     4,     8,     9,    93,     4,     8,
       9,    92,    26,     0,    67,    26,    27,    74,    76,    98,
      99,    94,    95,    94,    95,    26,    70,    74,    63,    77,
      78,    59,    60,    75,    91,   101,    57,    38,    61,    79,
      81,    79,    74,   102,    64,    12,    71,    72,    91,    80,
      28,    62,    82,    26,   103,   105,   100,    26,    58,    71,
      26,    27,    28,    29,    30,    31,    54,    63,   133,   134,
     135,   136,   138,   140,   142,   143,   145,   146,   151,    83,
      38,    85,   106,    60,   104,     3,    13,    16,    17,    19,
      59,    72,   108,   109,   110,   112,   113,   117,   121,   124,
     125,   126,   133,   143,    59,    63,   144,   135,   126,    39,
      40,    42,    43,    44,    45,    46,    47,   137,    48,    49,
     139,    50,    51,    52,   141,    62,    86,    61,   107,   101,
      63,    59,   126,    63,    63,    59,    57,    18,    59,    33,
      34,    35,    36,    37,    38,    55,    56,   147,    61,    64,
     134,   135,   138,   140,   142,    38,    84,    85,    87,    29,
      62,   133,    59,   118,    59,    72,   123,   126,   108,   111,
     108,   132,   130,   131,   128,   129,   127,    26,    28,    29,
      30,    31,   148,   149,   150,   126,    88,    64,   133,   133,
      59,   111,    58,    16,   126,   126,   126,   126,   126,   126,
      64,    60,    62,    57,   114,    64,    59,    63,   150,    28,
      89,   108,   119,   120,   133,    60,    90,    58,   115,   108,
     126,    64,    89,    32,   116,    64,   122,   108,   108,    59
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    65,    66,    67,    67,    68,    68,    68,    70,    69,
      71,    71,    72,    72,    73,    74,    75,    75,    77,    76,
      78,    76,    79,    80,    79,    81,    81,    83,    82,    82,
      84,    84,    84,    86,    85,    88,    87,    89,    90,    90,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    92,
      92,    92,    92,    93,    93,    93,    93,    94,    94,    95,
      95,    96,    97,    99,   100,    98,   102,   101,   101,   103,
     104,   104,   106,   105,   107,   107,   108,   108,   108,   108,
     108,   108,   108,   110,   109,   111,   111,   112,   112,   114,
     115,   113,   116,   116,   118,   119,   117,   120,   117,   121,
     122,   117,   123,   123,   123,   124,   124,   125,   127,   126,
     128,   126,   129,   126,   130,   126,   131,   126,   132,   126,
     126,   126,   126,   133,   133,   134,   134,   135,   135,   136,
     136,   137,   137,   137,   137,   137,   137,   138,   138,   139,
     139,   140,   140,   141,   141,   141,   142,   142,   143,   144,
     143,   145,   145,   145,   147,   146,   148,   148,   149,   149,
     150,   150,   150,   150,   150,   151,   151,   151,   151
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     0,     7,
       2,     0,     3,     1,     3,     2,     2,     0,     0,     3,
       0,     3,     1,     0,     3,     2,     0,     0,     4,     2,
       1,     1,     0,     0,     3,     0,     5,     2,     2,     0,
       1,     1,     1,     1,     2,     2,     2,     2,     1,     1,
       2,     2,     0,     1,     2,     2,     0,     1,     0,     1,
       0,     2,     3,     0,     0,     5,     0,     3,     0,     2,
       2,     0,     0,     3,     2,     0,     1,     1,     1,     1,
       1,     1,     1,     0,     4,     2,     0,     2,     1,     0,
       0,     8,     2,     0,     0,     0,     7,     0,     9,     0,
       0,     9,     1,     2,     1,     2,     3,     2,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     4,
       2,     2,     1,     3,     1,     3,     1,     2,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     0,
       5,     3,     1,     1,     0,     5,     1,     0,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1
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
#line 116 "parser2.y" /* yacc.c:1646  */
    { insert_type(); }
#line 1576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 135 "parser2.y" /* yacc.c:1646  */
    { push(current_identifier); 
						  if(check_function(current_identifier))
						  {yyerror("ERROR: Identifier cannot be same as function name!\n"); exit(8);}
						  if(duplicate(current_identifier)){yyerror("Duplicate value!\n");exit(0);}insert_SymbolTable_nest(current_identifier,current_nested_val); insert_type(); }
#line 1585 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 139 "parser2.y" /* yacc.c:1646  */
    {if(duplicate(current_identifier)){yyerror("Duplicate value!\n");exit(0);}insert_SymbolTable_nest(current_identifier,current_nested_val); insert_type();  }
#line 1591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 141 "parser2.y" /* yacc.c:1646  */
    {strcpy(previous_operator,"="); push("=");}
#line 1597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 141 "parser2.y" /* yacc.c:1646  */
    {codeassign();}
#line 1603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 148 "parser2.y" /* yacc.c:1646  */
    {insert_dimensions();}
#line 1609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 148 "parser2.y" /* yacc.c:1646  */
    {if((yyval) < 1) {yyerror("Array must have size greater than 1!\n"); exit(0);} }
#line 1615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 157 "parser2.y" /* yacc.c:1646  */
    {strcpy(previous_operator,"=");}
#line 1621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 157 "parser2.y" /* yacc.c:1646  */
    { insert_value(); }
#line 1627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 160 "parser2.y" /* yacc.c:1646  */
    {strcpy(previous_operator,"=");}
#line 1633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 194 "parser2.y" /* yacc.c:1646  */
    {strcpy(currfunctype, current_type); check_duplicate(current_identifier); insert_SymbolTable_function(current_identifier);  strcpy(current_function,current_identifier); insert_type();}
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 197 "parser2.y" /* yacc.c:1646  */
    {params_count = 0;}
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 197 "parser2.y" /* yacc.c:1646  */
    {start_function();}
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 197 "parser2.y" /* yacc.c:1646  */
    {end_function();}
#line 1657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 200 "parser2.y" /* yacc.c:1646  */
    { check_params(current_type); }
#line 1663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 200 "parser2.y" /* yacc.c:1646  */
    {insert_SymbolTable_paramscount(current_function, params_count);}
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 200 "parser2.y" /* yacc.c:1646  */
    {insert_SymbolTable_paramscount(current_function, params_count);}
#line 1675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 210 "parser2.y" /* yacc.c:1646  */
    {insert_parameters(); insert_type(); insert_SymbolTable_nest(current_identifier,1); params_count++;}
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 223 "parser2.y" /* yacc.c:1646  */
    {current_nested_val++;}
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 223 "parser2.y" /* yacc.c:1646  */
    {remove_scope(current_nested_val);current_nested_val--;}
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 234 "parser2.y" /* yacc.c:1646  */
    {label1(); if((yyvsp[-1])!=1){yyerror("ERROR: Here, condition must have integer value!\n");exit(0);}}
#line 1699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 234 "parser2.y" /* yacc.c:1646  */
    {label2();}
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 237 "parser2.y" /* yacc.c:1646  */
    {label3();}
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 238 "parser2.y" /* yacc.c:1646  */
    {label3();}
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 241 "parser2.y" /* yacc.c:1646  */
    {label4();}
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 241 "parser2.y" /* yacc.c:1646  */
    {label1();if((yyvsp[-1])!=1){yyerror("ERROR: Here, condition must have integer value!\n");exit(0);}}
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 241 "parser2.y" /* yacc.c:1646  */
    {label5();}
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 242 "parser2.y" /* yacc.c:1646  */
    {label1();if((yyvsp[-1])!=1){yyerror("Here, condition must have integer value!\n");exit(0);}}
#line 1741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 242 "parser2.y" /* yacc.c:1646  */
    {label5();}
#line 1747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 243 "parser2.y" /* yacc.c:1646  */
    {label4();}
#line 1753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 243 "parser2.y" /* yacc.c:1646  */
    {label1(); label5(); if((yyvsp[-1])!=1){yyerror("ERROR: Here, condition must have integer value!\n");exit(0);}}
#line 1759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 247 "parser2.y" /* yacc.c:1646  */
    {label4();}
#line 1765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 251 "parser2.y" /* yacc.c:1646  */
    {if(strcmp(currfunctype,"void")) {yyerror("ERROR: Cannot have void return for non-void function!\n"); exit(0);}}
#line 1771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 252 "parser2.y" /* yacc.c:1646  */
    { 	if(!strcmp(currfunctype, "void"))
										{ 
											yyerror("Non-void return for void function!"); exit(0);
										}

										if((currfunctype[0]=='i' || currfunctype[0]=='c') && (yyvsp[-1])!=1)
										{
											yyerror("Expression doesn't match return type of function\n"); exit(0);
										}
			              
			                     	}
#line 1787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 269 "parser2.y" /* yacc.c:1646  */
    {push("=");}
#line 1793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 269 "parser2.y" /* yacc.c:1646  */
    {		strcpy(previous_operator,"=");
																	  if((yyvsp[-3])==1 && (yyvsp[0])==1) 
																	  {
			                                                          (yyval)=1;
			                                                          } 
			                                                          else 
			                                                          {(yyval)=-1; yyerror("Type Mismatch\n"); exit(0);}
																	  codeassign(); 
			                                                       }
#line 1807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 278 "parser2.y" /* yacc.c:1646  */
    {push("+=");}
#line 1813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 278 "parser2.y" /* yacc.c:1646  */
    {		strcpy(previous_operator,"+=");
																	  if((yyvsp[-3])==1 && (yyvsp[0])==1) 
			                                                          (yyval)=1; 
			                                                          else 
			                                                          {(yyval)=-1; yyerror("Type Mismatch\n"); exit(0);}
																	  codeassign(); 
			                                                       }
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 285 "parser2.y" /* yacc.c:1646  */
    {push("-=");}
#line 1831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 285 "parser2.y" /* yacc.c:1646  */
    {		strcpy(previous_operator,"-=");
																	  if((yyvsp[-3])==1 && (yyvsp[0])==1) 
			                                                          (yyval)=1; 
			                                                          else 
			                                                          {(yyval)=-1; yyerror("Type Mismatch\n"); exit(0);}
																	  codeassign(); 
			                                                       }
#line 1843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 293 "parser2.y" /* yacc.c:1646  */
    {push("*=");}
#line 1849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 293 "parser2.y" /* yacc.c:1646  */
    {	strcpy(previous_operator,"*=");
																	  if((yyvsp[-3])==1 && (yyvsp[0])==1) 
			                                                          (yyval)=1; 
			                                                          else 
			                                                          {(yyval)=-1; yyerror("Type Mismatch\n"); exit(0);}
																	  codeassign(); 
			                                                       }
#line 1861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 300 "parser2.y" /* yacc.c:1646  */
    {push("/=");}
#line 1867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 300 "parser2.y" /* yacc.c:1646  */
    {	strcpy(previous_operator,"/=");
																	  if((yyvsp[-3])==1 && (yyvsp[0])==1) 
			                                                          (yyval)=1; 
			                                                          else 
			                                                          {(yyval)=-1; yyerror("Type Mismatch\n"); exit(0);}
																	  codeassign(); 
			                                                       }
#line 1879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 307 "parser2.y" /* yacc.c:1646  */
    {push("%=");}
#line 1885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 307 "parser2.y" /* yacc.c:1646  */
    {	strcpy(previous_operator,"%=");
																	  if((yyvsp[-3])==1 && (yyvsp[0])==1) 
			                                                          (yyval)=1; 
			                                                          else 
			                                                          {(yyval)=-1; yyerror("Type Mismatch\n"); exit(0);} 
																	  codeassign();
			                                                       }
#line 1897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 315 "parser2.y" /* yacc.c:1646  */
    {push("++"); if((yyvsp[-1]) == 1) (yyval)=1; else (yyval)=-1; genunary();}
#line 1903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 316 "parser2.y" /* yacc.c:1646  */
    {push("--"); if((yyvsp[-1]) == 1) (yyval)=1; else (yyval)=-1; genunary();}
#line 1909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 317 "parser2.y" /* yacc.c:1646  */
    {if((yyvsp[0]) == 1) (yyval)=1; else (yyval)=-1;}
#line 1915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 321 "parser2.y" /* yacc.c:1646  */
    {if((yyvsp[-2]) == 1 && (yyvsp[0])==1) (yyval)=1; else (yyval)=-1; codegen();}
#line 1921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 322 "parser2.y" /* yacc.c:1646  */
    {if((yyvsp[0]) == 1) (yyval)=1; else (yyval)=-1;}
#line 1927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 325 "parser2.y" /* yacc.c:1646  */
    {if((yyvsp[-2]) == 1 && (yyvsp[0])==1) (yyval)=1; else (yyval)=-1; codegen();}
#line 1933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 326 "parser2.y" /* yacc.c:1646  */
    {if((yyvsp[0]) == 1) (yyval)=1; else (yyval)=-1;}
#line 1939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 329 "parser2.y" /* yacc.c:1646  */
    {if((yyvsp[0])==1) (yyval)=1; else (yyval)=-1; codegen();}
#line 1945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 330 "parser2.y" /* yacc.c:1646  */
    {if((yyvsp[0]) == 1) (yyval)=1; else (yyval)=-1;}
#line 1951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 333 "parser2.y" /* yacc.c:1646  */
    {if((yyvsp[-2]) == 1 && (yyvsp[0])==1) (yyval)=1; else (yyval)=-1; codegen();}
#line 1957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 334 "parser2.y" /* yacc.c:1646  */
    {if((yyvsp[0]) == 1) (yyval)=1; else (yyval)=-1;}
#line 1963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 337 "parser2.y" /* yacc.c:1646  */
    {strcpy(previous_operator,">="); push(">=");}
#line 1969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 338 "parser2.y" /* yacc.c:1646  */
    {strcpy(previous_operator,"<="); push("<=");}
#line 1975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 339 "parser2.y" /* yacc.c:1646  */
    {strcpy(previous_operator,">"); push(">");}
#line 1981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 340 "parser2.y" /* yacc.c:1646  */
    {strcpy(previous_operator,"<"); push("<");}
#line 1987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 341 "parser2.y" /* yacc.c:1646  */
    {strcpy(previous_operator,"=="); push("==");}
#line 1993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 342 "parser2.y" /* yacc.c:1646  */
    {strcpy(previous_operator,"!="); push("!=");}
#line 1999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 345 "parser2.y" /* yacc.c:1646  */
    {if((yyvsp[-2]) == 1 && (yyvsp[0])==1) (yyval)=1; else (yyval)=-1; codegen();}
#line 2005 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 346 "parser2.y" /* yacc.c:1646  */
    {if((yyvsp[0]) == 1) (yyval)=1; else (yyval)=-1;}
#line 2011 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 349 "parser2.y" /* yacc.c:1646  */
    {push("+");}
#line 2017 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 350 "parser2.y" /* yacc.c:1646  */
    {push("-");}
#line 2023 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 353 "parser2.y" /* yacc.c:1646  */
    {if((yyvsp[-2]) == 1 && (yyvsp[0])==1) (yyval)=1; else (yyval)=-1; codegen();}
#line 2029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 354 "parser2.y" /* yacc.c:1646  */
    {if((yyvsp[0]) == 1) (yyval)=1; else (yyval)=-1;}
#line 2035 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 357 "parser2.y" /* yacc.c:1646  */
    {push("*");}
#line 2041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 358 "parser2.y" /* yacc.c:1646  */
    {push("/");}
#line 2047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 359 "parser2.y" /* yacc.c:1646  */
    {push("%");}
#line 2053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 362 "parser2.y" /* yacc.c:1646  */
    {if((yyvsp[0]) == 1) (yyval)=1; else (yyval)=-1;}
#line 2059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 363 "parser2.y" /* yacc.c:1646  */
    {if((yyvsp[0]) == 1) (yyval)=1; else (yyval)=-1;}
#line 2065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 366 "parser2.y" /* yacc.c:1646  */
    {
						  push(current_identifier);
			              if(!check_scope(current_identifier))
			              {printf("%s\n",current_identifier);yyerror("Identifier undeclared\n");exit(0);} 
			              if(!check_array(current_identifier))
			              {printf("%s\n",current_identifier);yyerror("Array Identifier has No Subscript\n");exit(0);}
			              if(gettype(current_identifier,0)=='i' || gettype(current_identifier,1)== 'c')
			              (yyval) = 1;
			              else
			              (yyval) = -1;
			              }
#line 2081 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 377 "parser2.y" /* yacc.c:1646  */
    {push(current_identifier);
								array_flag = 1;
								if(!check_scope(current_identifier)){printf("%s\n",current_identifier);yyerror("Identifier undeclared\n");exit(0);}}
#line 2089 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 380 "parser2.y" /* yacc.c:1646  */
    {if(gettype(current_identifier,0)=='i' || gettype(current_identifier,1)== 'c')
			              		(yyval) = 1;
			              		else
			              		(yyval) = -1;
			              		}
#line 2099 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 387 "parser2.y" /* yacc.c:1646  */
    {if((yyvsp[-1])==1) (yyval)=1; else (yyval)=-1;}
#line 2105 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 389 "parser2.y" /* yacc.c:1646  */
    {if((yyvsp[0])==1) (yyval)=1; else (yyval)=-1;}
#line 2111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 392 "parser2.y" /* yacc.c:1646  */
    { strcpy(previous_operator,"(");
			             if(!check_declaration(current_identifier, "Function"))
			             { yyerror("Function not declared"); exit(0);} 
			             insert_SymbolTable_function(current_identifier); 
						 strcpy(currfunccall,current_identifier);
						 if(gettype(current_identifier,0)=='i' || gettype(current_identifier,1)== 'c')
						 {
			             (yyval) = 1;
			             }
			             else
			             (yyval) = -1;
                         call_params_count=0;
			             }
#line 2129 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 405 "parser2.y" /* yacc.c:1646  */
    { if(strcmp(currfunccall,"printf"))
							{ 
								if(getSTparamscount(currfunccall)!=call_params_count)
								{	
									yyerror("Number of parameters not same as number of arguments during function call!");
									//printf("Number of arguments in function call %s doesn't match number of parameters\n", currfunccall);
									exit(8);
								}
							} 
							callgen();
						 }
#line 2145 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 421 "parser2.y" /* yacc.c:1646  */
    { call_params_count++; }
#line 2151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 422 "parser2.y" /* yacc.c:1646  */
    { call_params_count++; }
#line 2157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 424 "parser2.y" /* yacc.c:1646  */
    {arggen(1);}
#line 2163 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 424 "parser2.y" /* yacc.c:1646  */
    {arggen(2);}
#line 2169 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 424 "parser2.y" /* yacc.c:1646  */
    {arggen(3);}
#line 2175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 424 "parser2.y" /* yacc.c:1646  */
    {arggen(4);}
#line 2181 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 424 "parser2.y" /* yacc.c:1646  */
    {arggen(5);}
#line 2187 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 427 "parser2.y" /* yacc.c:1646  */
    {  insert_type(); codegencon(); (yyval)=1; }
#line 2193 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 428 "parser2.y" /* yacc.c:1646  */
    {  insert_type(); codegencon(); (yyval)=-1;}
#line 2199 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 429 "parser2.y" /* yacc.c:1646  */
    {  insert_type(); codegencon(); }
#line 2205 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 430 "parser2.y" /* yacc.c:1646  */
    {  insert_type(); codegencon(); (yyval)=1; }
#line 2211 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2215 "y.tab.c" /* yacc.c:1646  */
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
#line 433 "parser2.y" /* yacc.c:1906  */


extern FILE *yyin;
extern int yylineno;
extern char *yytext;
void insert_SymbolTable_type(char *,char *);
void insert_SymbolTable_value(char *, char *);
void insert_ConstantTable(char *, char *);
void insert_SymbolTable_arraydim(char *, char *);
void insert_SymbolTable_funcparam(char *, char *);
void printSymbolTable();
void printConstantTable();
struct stack
{
	char value[100];
	int labelvalue;
}s[100],label[100];


void push(char *x)
{
	strcpy(s[++top].value,x);
}


void codegen()
{
	printf("t%d = %s %s %s\n",count,s[top-2].value,s[top-1].value,s[top].value);
	top = top - 2;
    sprintf(temp, "t%d", count);
	strcpy(s[top].value,temp);
	count++; 
}

void codegencon()
{
	if(array_flag == 1){
		printf("t%d = 4 * %s\n",count ,current_value);
		count++;
		printf("t%d = &arr[t%d]\n",count ,count-1);
		array_tac_flag = 1;
	}
	else
		printf("t%d = %s\n",count ,current_value);
	sprintf(temp, "t%d", count);
	push(temp);
	count++;
	array_flag = 0;
}

void codeassign()
{
	if(array_tac_flag == 1)
		printf("*%s = %s\n",s[top-2].value,s[top].value);
	else
		printf("%s = %s\n",s[top-2].value,s[top].value);
	array_tac_flag = 0;
	top = top - 2;
}

int isunary(char *s)
{
	if(strcmp(s, "--")==0 || strcmp(s, "++")==0)
	{
		return 1;
	}
	return 0;
}

void genunary()
{
	char temp1[100], temp2[100], temp3[100];
	strcpy(temp1, s[top].value);
	strcpy(temp2, s[top-1].value);

	if(isunary(temp1))
	{
		strcpy(temp3, temp1);
		strcpy(temp1, temp2);
		strcpy(temp2, temp3);
	}

	if(strcmp(temp2,"--")==0)
	{
		printf("t%d = %s - 1\n", count, temp1);
		printf("%s = t%d\n", temp1, count);
	}

	if(strcmp(temp2,"++")==0)
	{
		printf("t%d = %s + 1\n", count, temp1);
		printf("%s = t%d\n", temp1, count);
	}
	count++;
	top = top -2;
}


void label1()
{
	printf("IF not %s goto L%d\n",s[top].value,lno);
	label[++ltop].labelvalue = lno++;
}

void label2()
{
	printf("goto L%d\n",lno);
	printf("L%d:\n",label[ltop].labelvalue);
	ltop--;
	label[++ltop].labelvalue=lno++;
}

void label3()
{
	printf("L%d:\n",label[ltop].labelvalue);
	ltop--;
}

void label4()
{
	printf("L%d:\n",lno);
	label[++ltop].labelvalue = lno++;
}


void label5()
{
	printf("goto L%d:\n",label[ltop-1].labelvalue);
	printf("L%d:\n",label[ltop].labelvalue);
	ltop = ltop - 2;
}

void start_function()
{
	printf("func begin %s\n",current_function);
}

void end_function()
{
	printf("func end\n\n");
}

void arggen(int i)
{
    if(i==1)
    {
	printf("param %s\n", current_identifier);
	}
	else
	{
	printf("param %s\n", current_value);
	}
}

void callgen()
{
	printf("refparam result\n");
	push("result");
	printf("call %s, %d\n",currfunccall,call_params_count);
}

int main()
{
	yyin = fopen("code.c", "r");
	yyparse();

	if(flag == 0)
	{
		printf("VALID PARSE\n");
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
	printf("Line No. : %d %s %s\n",yylineno, s, yytext);
	flag=1;
	printf("\nUNSUCCESSFUL: INVALID PARSE\n");
}

void insert_type()
{
	insert_SymbolTable_type(current_identifier,current_type);
}

void insert_value()
{	
	if(strcmp(previous_operator, "=") == 0)
	{	insert_SymbolTable_value(current_identifier,current_value);
	}
}	

void insert_dimensions()
{
    insert_SymbolTable_arraydim(current_identifier, current_value);
}

void insert_parameters()
{
    insert_SymbolTable_funcparam(current_function, current_identifier);
}

int yywrap()
{
	return 1;
}
