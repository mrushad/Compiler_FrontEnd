%option yylineno

%{
	#include<stdio.h>
	#include<string.h>
	
	struct ConstantTable{
		char constant_name[100];
		char constant_type[100];
		int exist;
	}CT[1000];
	
	struct SymbolTable{
		char symbol_name[100];
		char symbol_type[100];
		int exist;
	}ST[1000];
	
	unsigned long hash(unsigned char *str)
	{
		unsigned long hash = 5381;
		int c;

		while (c = *str++)
			hash = ((hash << 5) + hash) + c;

		return hash;
	}
	
	int search_ConstantTable(char* str){
		unsigned long temp_val = hash(str);
		int val = temp_val%1000;
		
		if(CT[val].exist == 0){
			return 0;
		}
		
		else if(strcmp(CT[val].constant_name, str) == 0)
		{
			return 1;
		}
		else
		{
			for(int i = val+1 ; i!=val ; i = (i+1)%1000)
			{
				if(strcmp(CT[i].constant_name,str)==0)
				{
					return 1;
				}
			}
			return 0;
		}
	}

	
	int search_SymbolTable(char* str){
		unsigned long temp_val = hash(str);
		int val = temp_val%1000;
		
		if(ST[val].exist == 1){
			return 0;
		}
		
		else if(strcmp(ST[val].symbol_name, str) == 0)
		{
			return 1;
		}
		else
		{
			for(int i = val+1 ; i!=val ; i = (i+1)%1000)
			{
				if(strcmp(ST[i].symbol_name,str)==0)
				{
					return 1;
				}
			}
			return 0;
		}
	}
	
	
	void insert_ConstantTable(char* name, char* type){
		int index = 0;
		 if(search_ConstantTable(name))
			return;
		else{
			unsigned long temp_val = hash(name);
			int val = temp_val%1000;
			if(CT[val].exist == 0){
				strcpy(CT[val].constant_name, name);
				strcpy(CT[val].constant_type, type);
				CT[val].exist = 1;
				return;
			}
			
			for(int i = val+1; i != val; i = (i+1)%1000){
				if(CT[i].exist == 0){
					index = i;
					break;
				}
			}
			strcpy(CT[index].constant_name, name);
			strcpy(CT[index].constant_type, type);
			CT[index].exist = 1;			
		}
	}
	
	void insert_SymbolTable(char* name, char* type){
		int index = 0;
		 if(search_SymbolTable(name))
			return;
		else{
			unsigned long temp_val = hash(name);
			int val = temp_val%1000;
			if(ST[val].exist == 0){
				strcpy(ST[val].symbol_name, name);
				strcpy(ST[val].symbol_type, type);
				ST[val].exist = 1;
				return;
			}
			
			for(int i = val+1; i != val; i = (i+1)%1000){
				if(ST[i].exist == 0){
					index = i;
					break;
				}
			}
			strcpy(ST[index].symbol_name, name);
			strcpy(ST[index].symbol_type, type);
			ST[index].exist = 1;			
		}
	}

	void printConstantTable(){
		for(int i = 0; i < 1000; ++i){
			if(CT[i].exist == 0)
				continue;
				
			printf("%s\t%s\n", CT[i].constant_name, CT[i].constant_type);
		}
	}

	void printSymbolTable(){
		for(int i = 0; i < 1000; ++i){
			if(ST[i].exist == 0)
				continue;
				
			printf("%s\t%s\n", ST[i].symbol_name, ST[i].symbol_type);
		}
	}
	
%}

/* Regular definitions */
digit               [0-9]
letter              [a-zA-Z]
alphanum            {letter}|{digit}
keyword             char|int|main|float|double|short|long|unsigned|signed|main|while|for|break|if|else|continue|return|void|struct
operator            "+"|"-"|"++"|"--"|"!"|"~"|"*"|"/"|"%"|">>"|"<<"|"&"|"^"|\||\|\||"="|">"|"<"|">="|"<="|"=="|"!="
function            ((_|{letter})({alphanum}|_)*)/[ ]*[(]
escape_sequences    0|a|b|f|n|r|t|v|"\\"|"\""|"\'"

/* Pattern Matching Rules */
%%
\n                                           {}
" "                                          {}
"#include"[ ]*"<"{letter}({alphanum})*".h>"   { printf("Line No. %d PREPROCESSOR DIRECTIVE - %s\n", yylineno, yytext); }
"#define"[ ]+(_|{letter})({alphanum})*[ ]*(.)+   { printf("Line No. %d PREPROCESSOR DIRECTIVE - %s\n", yylineno, yytext); }

"//".*                                       { printf("Line No. %d SINGLE LINE COMMENT - %s\n", yylineno, yytext); }
("/*")(([^*]*[*]+[^*/])*([^*]*[*]+[/]))      { printf("Line No. %d MULTI LINE COMMENT - %s\n", yylineno, yytext); }

("/*")(([^*]*([*]+[^/])*)*)*                 { printf("Line No. %d ERROR: MULTI LINE COMMENT NOT CLOSED - %s\n", yylineno, yytext); }

("\"")[^\n\"]*("\"")                         { 
                                                printf("Line No. %d STRING - %s\n", yylineno, yytext); 
                                                insert_ConstantTable(yytext, "String");
                                             }
("\"")[^\n\"]*                               { printf("Line No. %d ERROR: UNCLOSED STRING - %s\n", yylineno, yytext); }

("\'")(("\\"({escape_sequences}))|.)("\'")   { 
                                                printf("Line No. %d CHARACTER - %s\n", yylineno, yytext); 
                                                insert_ConstantTable(yytext, "Character");
                                             }

("\'")(((("\\")[^0abfnrtv\\\"\'][^\n\']*))|[^\n\''][^\n\'']+)("\'") { 
                                               printf("Line No. %d ERROR: NOT A CHARACTER - %s\n", yylineno, yytext); }

{keyword}/[ ]*[(]?                           { 
                                                printf("Line No. %d KEYWORD - %s\n", yylineno, yytext); 
                                             }

#include[/"<][ ]*{letter}{letter}*\.h[/">]   {
                                                printf("Line No. %d HEADER - %s\n", yylineno, yytext);                                                 
                                             }

{operator}                                   { printf("Line No. %d OPERATOR - %s\n", yylineno, yytext); }


(_|{letter})({alphanum}|_)*                  { 
                                                printf("Line No. %d IDENTIFIER - %s\n", yylineno, yytext);
                                                insert_SymbolTable(yytext, "Identfier");
                                             }

"-"?{digit}+                                 { 
                                                printf("Line No. %d INTEGER - %s\n", yylineno, yytext);
                                                insert_ConstantTable(yytext, "Integer");
                                             }

"-"?{digit}+\.({digit}+)?                    { 
                                                printf("Line No. %d FLOATING POINT - %s\n", yylineno, yytext); 
                                                insert_ConstantTable(yytext, "Floating point");
                                             }

"["                                          { printf("Line No. %d LEFT BRACKET - %s\n", yylineno, yytext); }
"]"                                          { printf("Line No. %d RIGHT BRACKET - %s\n", yylineno, yytext); }
"("                                          { printf("Line No. %d LEFT PARENTHESIS - %s\n", yylineno, yytext); }
")"                                          { printf("Line No. %d RIGHT PARENTHESIS - %s\n", yylineno, yytext); }
"{"                                          { printf("Line No. %d LEFT BRACE - %s\n", yylineno, yytext); }
"}"                                          { printf("Line No. %d RIGHT BRACE - %s\n", yylineno, yytext); }
","                                          { printf("Line No. %d COMMA - %s\n", yylineno, yytext); }
";"                                          { printf("Line No. %d SEMICOLON - %s\n", yylineno, yytext); }

%%

int yywrap(){
	return 1;
}

int main()
{
	extern FILE *yyin;
	yyin = fopen("input.c","r");
	yylex();
	printf("CONSTANT TABLE\n");
	printConstantTable();
	printf("SYMBOL TABLE\n");
	printSymbolTable();
	return 0;
}
		
