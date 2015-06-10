%{
#include "minic.h"
#include "c_tree.h"
#include "c_yacc.h"
%}

NUM [0-9][0-9]*
ID  [_A-Za-z][A-Za-z0-9_]*
NONNL [^\n]
NONNLQ [^"\n]

%%

break		{return BR;}
continue	{return CONT;}
else		{return ELSE;}
if		    {return IF;}
int		    {return INT;}
return		{return RET;}
while		{return WHILE;}
printf		{return PRF;}
"+"		{return ADD;}
"-"		{return MINUS;}
"*"		{return TIMES;}
"/"		{return DIVIDE;}
"%"		{return REMAIN;}
"!"		{return NOT;}
"?"		{return OPT;}
":"		{return COL;}
"="		{return ASSIGN;}
","		{return COMMA;}
"<"		{return LT;}
">"		{return GT;}
"("		{return LP;}
")"		{return RP;}
"{"		{return LBP;}
"}"		{return RBP;}
"||"		{return OR;}
"&&"		{return AND;}
"=="		{return EQU;}
\"		{return DBQ;}
";"		{return SEMI;}
{NUM}		{sscanf(yytext,"%d", &val);
		 yylval.nu = val;
		 return NUM;}
{ID}		{sscanf(yytext,"%s", name);
		 yylval.sr = strdup( name );
		 return ID;}
\"{NONNLQ}*\"	{sscanf(yytext,"%s", name);
		 yylval.sr = strdup( name );
		 return STR;}
"//"{NONNL}*	{/* return COMMENT; */}
[ \t\n]		{/* skip white space */}
.		{printf("****** A bug is found in MiniC!\n");}

%%

int yywrap() {return 1;}

/*
void print_lex( int t ) {
    switch( t ) {
    case NUM: printf("NUM(%d)\n", val);
        break;
    case ID: printf("ID(\"%s\")\n", name);
        break;
    case STR: printf("STR(%s)\n", name);
        break;
    case BR: printf("BR\n");
        break;
    case CONT: printf("CONT\n");
        break;
    case ELSE: printf("ELSE\n");
        break;
    case IF: printf("IF\n");
        break;
    case INT: printf("INT\n");
        break;
    case RET: printf("RET\n");
        break;
    case WHILE: printf("WHILE\n");
        break;
    case PRF: printf("PRF\n");
        break;
    case ADD: printf("ADD\n");
        break;
    case MINUS: printf("MINUS\n");
        break;
    case TIMES: printf("TIMES\n");
        break;
    case DIVIDE: printf("DIVIDE\n");
        break;
    case REMAIN: printf("REMAIN\n");
        break;
    case NOT: printf("NOT\n");
        break;
    case OPT: printf("OPT\n");
        break;
    case COL: printf("COL\n");
        break;
    case ASSIGN: printf("ASSIGN\n");
        break;
    case COMMA: printf("COMMA\n");
        break;
    case LT: printf("LT\n");
        break;
    case GT: printf("GT\n");
        break;
    case LP: printf("LP\n");
        break;
    case RP: printf("RP\n");
        break;
    case LBP: printf("LBP\n");
        break;
    case RBP: printf("RBP\n");
        break;
    case OR: printf("OR\n");
        break;
    case AND: printf("AND\n");
        break;
    case EQU: printf("EQU\n");
        break;
    case DBQ: printf("DBQ\n");
        break;
    case SEMI: printf("SEMI\n");
        break;
    case COMMENT: printf("COMMENT (should be skipped)\n");
        break;
    default: printf("******** MiniC: lexical error!!!\n\n");
    }
}
*/

