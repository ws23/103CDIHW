#include <stdio.h>
#include "pas_lex.h"

char pas_name[16];
int pas_val;

void print_lex( int t ) {
    switch( t ) {
    case DIV: printf("DIV\n");
        break;
	case OR: printf("OR\n");
        break;
	case AND: printf("AND\n");
        break;
	case NOT: printf("NOT\n");
        break;
	case IF: printf("IF\n");
        break;
	case THEN: printf("THEN\n");
        break;
	case ELSE: printf("ELSE\n");
        break;
	case OF: printf("OF\n");
        break;
	case WHILE: printf("WHILE\n");
        break;		
	case DO: printf("DO\n");
        break;
	case BG: printf("BG\n");
        break;
	case END: printf("END\n");
        break;
	case READ: printf("READ\n");
        break;
	case WRITE: printf("WRITE\n");
        break;
	case VAR: printf("VAR\n");
        break;
	case ARRAY: printf("ARRAY\n");
        break;
	case PROC: printf("PROC\n");
        break;
	case PROG: printf("PROG\n");
        break;
	case INT: printf("INT\n");
        break;
	case BOOL: printf("BOOL\n");
        break;
	case TRUE: printf("TRUE\n");
        break;
	case FALSE: printf("FALSE\n");
        break;
	case ADD: printf("ADD\n");
        break;
	case MINUS: printf("MINUS\n");
        break;
	case TIMES: printf("TIMES\n");
        break;
	case EQ: printf("EQ\n");
        break;
	case NE: printf("NE\n");
        break;
	case LT: printf("LT\n");
        break;
	case GT: printf("GT\n");
        break;
	case LE: printf("LE\n");
        break;
	case GE: printf("GE\n");
        break;
	case LP: printf("LP\n");
        break;
	case RP: printf("RP\n");
        break;
	case LSP: printf("LSP\n");
        break;
	case RSP: printf("RSP\n");
        break;
	case ASSIGN: printf("ASSIGN\n");
        break;
	case DOT: printf("DOT\n");
        break;
	case COMMA: printf("COMMA\n");
        break;
	case SEMI: printf("SEMI\n");
        break;
	case COLON: printf("COLON\n");
        break;
	case DOTDOT: printf("DOTDOT\n");
        break;		
    case ID: printf("ID(%s)\n", pas_name);
        break;
    case NUM: printf("NUM(%d)\n", pas_val);
        break;
	case CC: printf("CC(%s)\n", pas_name);
        break;

    default: printf("******** error!!!");
    }
}


int main(int argc,char *argv[]) {
    int t;

    yyin = fopen(argv[1],"r");
    t = yylex();
    while( t ) {
        print_lex( t );
        t = yylex();
    }
}
