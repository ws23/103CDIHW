#include <stdio.h>
#include "c_lex.h"

char c_name[16]; 
int c_val; 

void print_lex(int t){
	switch(t){
		case BREAK: 
			printf("BREAK\n"); 
			break;
		case CONTINUE:
			printf("CONTINUE\n"); 
			break;
		case ELSE:
			printf("ELSE\n"); 
			break;
		case IF:
			printf("IF\n"); 
			break;
		case INT:
			printf("INT\n"); 
			break; 
		case RETURN:
			printf("RETURN\n"); 
			break;
		case WHILE:
			printf("WHILE\n"); 
			break;
		case PRINTF:
			printf("PRINTF\n");
			break; 
		case ADD:
			printf("ADD\n"); 
			break;
		case MINUS:
			printf("MINUS\n"); 
			break;
		case TIMES:
			printf("TIMES\n"); 
			break;
		case DIV:
			printf("DIV\n"); 
			break;
		case MOD:
			printf("MOD\n"); 
			break;
		case NOT:
			printf("NOT\n"); 
			break;
		case QUES:
			printf("QUES\n"); 
			break;
		case COLON:
			printf("COLON\n"); 
			break;
		case ASSIGN: 
			printf("ASSIGN\n"); 
			break;
		case COMMA:
			printf("COMMA\n"); 
			break;
		case LT:
			printf("LT\n"); 
			break; 
		case GT:
			printf("GT\n"); 
			break;
		case LP:
			printf("LP\n"); 
			break;
		case RP:
			printf("RP\n"); 
			break;
		case LSP:
			printf("LSP\n"); 
			break;
		case RSP:
			printf("RSP\n"); 
			break;
		case OR:
			printf("OR\n"); 
			break;
		case AND:
			printf("AND\n"); 
			break;
		case EQ:
			printf("EQ\n"); 
			break;
		case QUOTE:
			printf("QUOTE\n"); 
			break;
		case SEMI:
			printf("SEMI\n"); 
			break;
		case ID:
			printf("ID: %s\n", c_name); 
			break;
		case NUM:
			printf("NUM: %d\n", c_val); 
			break;
		case COMMENT:
			printf("COMMENT"); 
			break;
		case STRING:
			printf("STRING: %s\n", c_name); 
			break;
		
		default:
			printf("******** error!!\n"); 
	}	
}

int main(int argc, char *argv[]){
	int t; 
	
	yyin = fopen(argv[1], "r"); 	
	t = yylex(); 
	while(t){
		print_lex(t); 	
		t = yylex(); 
	}
	fclose(yyin); 
	return 0; 
}
