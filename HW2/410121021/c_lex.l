%{
	#include "minuC.h"	
	#include "c_yacc.h"
%}

ID [A-Za-z_][A-Za-z0-9_]*
NUM [0-9]+
STRING \"(\\.|[^"]|[^\n])*\"
COMMENT "//"[^"\n"]*

%%

break		{return BREAK; }
continue	{return CONTINUE; }
else		{return ELSE; }
if			{return IF; }
int			{return INT; }
return 		{return RETURN; }
while		{return WHILE; }
printf		{return PRINTF; }
{STRING}	{sscanf(yytext, "%s", c_name); return STRING; }
"+"			{return ADD; }
"-"			{return MINUS; }
"*"			{return TIMES; }
"/"			{return DIV; }
"%"			{return MOD; }
"!"			{return NOT; }
"?"			{return QUES; }
":"			{return COLON; }
"="			{return ASSIGN; }
","			{return COMMA; }
"<"			{return LT; }
">"			{return GT; }
"("			{return LP; }
")"			{return RP; }
"{"			{return LSP; }
"}"			{return RSP; }
"||"		{return OR; }
"&&"		{return AND; }
"=="		{return EQ; }
"\""		{return QUOTE; }
";"			{return SEMI; }
{ID}		{sscanf(yytext, "%s", c_name); return ID; }
{NUM}		{sscanf(yytext, "%d", &c_val); return NUM; }
{COMMENT}	{return COMMENT; }
[ \t\n]		{}
.			{}
%%

int yywrap(){return 1; }
