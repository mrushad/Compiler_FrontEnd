%{
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

%}

%nonassoc IF
%token INT CHAR FLOAT DOUBLE LONG SHORT SIGNED UNSIGNED STRUCT
%token RETURN MAIN
%token VOID
%token WHILE FOR DO 
%token BREAK CONTINUE GOTO
%token ENDIF
%token SWITCH CASE DEFAULT
%expect 2

%token identifier
%token integer_constant string_constant float_constant character_constant

%nonassoc ELSE

%right MOD_EQUAL
%right MULTIPLY_EQUAL DIVIDE_EQUAL
%right ADD_EQUAL SUBTRACT_EQUAL
%right '='

%left OR_OR
%left AND_AND
%left '^'
%left EQUAL NOT_EQUAL
%left LESS_EQUAL LESS GREAT_EQUAL GREAT
%left '+' '-'
%left '*' '/' '%'

%right SIZEOF
%right NOT
%left INCREMENT DECREMENT 


%start begin_parse

%%
begin_parse
			: declarations;

declarations
			: declaration declarations 
			|	
			;

declaration
			: variable_dec 
			| function_dec
			| structure_dec;

structure_dec
			: STRUCT identifier { ins(); } '{' structure_content  '}' ';';

structure_content : variable_dec structure_content | ;

variable_dec
			: datatype variables ';' 
			| structure_initialize;

structure_initialize 
			: STRUCT identifier variables;

variables
			: identifier_name multiple_varaiables;

multiple_varaiables
			: ',' variables 
			| ;

identifier_name 
			: identifier { ins(); } extended_identifier;

extended_identifier : array_identifier | '='{strcpy(prevop,"=");} expression ; 

array_identifier
			: '[' array_dims
			| ;

array_dims
			: integer_constant {insDim();} ']' initilization
			| ']' string_initilization;

initilization
			: string_initilization
			| array_initialization
			| ;

string_initilization
			: '='{strcpy(prevop,"=");} string_constant { insV(); };

array_initialization
			: '='{strcpy(prevop,"=");} '{' array_values '}';

array_values
			: integer_constant multiple_array_values;

multiple_array_values
			: ',' array_values 
			| ;


datatype 
			: INT | CHAR | FLOAT | DOUBLE 
			| LONG long_grammar 
			| SHORT short_grammar
			| UNSIGNED unsigned_grammar 
			| SIGNED signed_grammar
			| VOID ;

unsigned_grammar 
			: INT | LONG long_grammar | SHORT short_grammar | ;

signed_grammar 
			: INT | LONG long_grammar | SHORT short_grammar | ;

long_grammar 
			: INT | ;

short_grammar 
			: INT | ;

function_dec
			: function_datatype function_parameters;

function_datatype
			: datatype identifier '('  {strcpy(curfunc,curid); ins();};

function_parameters
			: parameters ')' statement;

parameters 
			: datatype all_parameter_identifiers | ;

all_parameter_identifiers 
			: parameter_identifier multiple_parameters;

multiple_parameters
			: ',' parameters 
			| ;

parameter_identifier 
			: identifier { insparam(); ins(); } extended_parameter;

extended_parameter
			: '[' ']'
			| ;

statement 
			: expression_statment | multiple_statement 
			| conditional_statements | iterative_statements 
			| return_statement | break_statement 
			| variable_dec;

multiple_statement 
			: '{' statments '}' ;

statments 
			: statement statments
			| ;

expression_statment 
			: expression ';' 
			| ';' ;

conditional_statements 
			: IF '(' simple_expression ')' statement extended_conditional_statements;

extended_conditional_statements
			: ELSE statement
			| ;

iterative_statements 
			: WHILE '(' simple_expression ')' statement 
			| FOR '(' for_initialization simple_expression ';' expression ')' 
			| DO statement WHILE '(' simple_expression ')' ';';

for_initialization
			: variable_dec
			| expression ';'
			| ';' ;

return_statement 
			: RETURN return_suffix;

return_suffix
			: ';' 
			| expression ';' ;

break_statement 
			: BREAK ';' ;

expression 
			: iden expressions
			| simple_expression ;

expressions
			: '='{strcpy(prevop,"=");} expression 
			| ADD_EQUAL{strcpy(prevop,"+=");} expression 
			| SUBTRACT_EQUAL{strcpy(prevop,"-=");} expression 
			| MULTIPLY_EQUAL{strcpy(prevop,"*=");} expression 
			| DIVIDE_EQUAL{strcpy(prevop,"/=");} expression 
			| MOD_EQUAL{strcpy(prevop,"%=");} expression 
			| INCREMENT 
			| DECREMENT ;

simple_expression 
			: and_expression simple_expression_breakup;

simple_expression_breakup 
			: OR_OR and_expression simple_expression_breakup | ;

and_expression 
			: unary_relation_expression and_expression_breakup;

and_expression_breakup
			: AND_AND unary_relation_expression and_expression_breakup
			| ;

unary_relation_expression 
			: NOT unary_relation_expression 
			| regular_expression ;

regular_expression 
			: sum_expression regular_expression_breakup;

regular_expression_breakup
			: relational_operators sum_expression 
			| ;

relational_operators 
			: GREAT_EQUAL{strcpy(prevop,">=");}
			| LESS_EQUAL{strcpy(prevop,"<=");}
			| GREAT{strcpy(prevop,">");} 
			| LESS{strcpy(prevop,"<");}
			| EQUAL{strcpy(prevop,"==");}
			| NOT_EQUAL{strcpy(prevop,"!=");} ;

sum_expression 
			: sum_expression sum_operators term 
			| term ;

sum_operators 
			: '+' 
			| '-' ;

term
			: term multiply_operators factor 
			| factor ;

multiply_operators 
			: '*' | '/' | '%' ;

factor 
			: func | iden ;

iden 
			: identifier 
			| iden extended_iden;

extended_iden
			: '[' expression ']' 
			| '.' identifier;

func 
			: '(' expression ')' 
			| func_call | constant;

func_call
			: identifier '(' arguments ')';

arguments 
			: arguments_list | ;

arguments_list 
			: expression extended_arguments;

extended_arguments
			: ',' expression extended_arguments 
			| ;

constant 
			: integer_constant 	{ insV(); } 
			| string_constant	{ insV(); } 
			| float_constant	{ insV(); } 
			| character_constant{ insV(); };

%%

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
