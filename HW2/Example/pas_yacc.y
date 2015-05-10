%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include "pascal.h"
%}
%token PROG PROC BG END INT BOOL TRUE 
%token LP RP LSP RSP FALSE CC
%token DOT SEMI VAR ARRAY OF DOTDOT
%token IF THEN READ WRITE WHILE DO 
%token ELSE ASSIGN COMMA COLON ID NUM 
%left OR AND
%left NOT
%left EQ NE LT GT LE GE 
%left ADD MINUS
%left DIV TIMES
%expect 1

%%
prog 	:	PROG ID SEMI block DOT {printf("prog => PROG ID SEMI block DOT \n********Parsed OK!**********\n");}
		|	{printf("********Parsing failed! \n");}	
		;

block	:	vardecs prodecs stmts {printf("block=>vardecs prodecs stmts \n");}
		;

vardecs	:	VAR vardec SEMI morevd {printf("vardecs => VAR vardec SEMI morevd \n");}
		|	{printf("vardecs => Null \n");}
		;

morevd	:	vardec SEMI morevd	{printf("morevd => vardec SEMI morevd \n");}
		|	{printf("morevd => Null \n");}
		;

vardec	:	ID moreid COLON type {printf("vardec => ID moreid COLON type\n");}
		;

moreid	:	COMMA ID moreid	{printf("moreid	=>	COMMA ID moreid \n");}
		|	{printf("moreid => Null \n");}
		;

type	:	simtype	{printf("type => simtype \n");}
		|	arrtype	{printf("type => arrtype \n");}
		; 

arrtype	:	ARRAY LSP inrange RSP OF simtype {printf("arrtype => ARRAY LSP inrange RSP OF simtype \n");}
		;

inrange	:	NUM DOTDOT NUM {printf("inrange => NUM DOTDOT NUM \n");}
		;

simtype	:	INT {printf("simtype => INT \n");}
		|	BOOL {printf("simtype => BOOL \n");}
		;

prodecs	:	proc SEMI prodecs	{printf("prodecs => proc SEMI prodecs \n");}
		|	{printf("prodecs => Null \n");}
		;

proc	:	PROC ID SEMI block	{printf("proc => PROC ID SEMI block \n");}
		;

stmts	:	comstmt	{printf("stmts => comstmt \n");}
		;

comstmt	:	BG stmt morestm	END	{printf("comstmt => BG stmt morestm	END \n");}
		;

morestm	:	SEMI stmt morestm	{printf("morestm => SEMI stmt morestm \n");}
		|	{printf("morestm => Null \n");}
		;

stmt	:	simstmt	{printf("stmt => simstmt \n");}
		|	strstmt	{printf("stmt => strstmt \n");}
		;

simstmt	:	assstmt	{printf("simstmt => assstmt \n");}
		|	prostmt	{printf("simstmt => prostmt \n");}
		|	reastmt	{printf("simstmt => reastmt \n");}
		|	wristmt {printf("simstmt => wristmt \n");}
		;

assstmt	:	variab ASSIGN expr	{printf("assstmt => variab ASSIGN expr \n");}
		;

prostmt	:	ID	{printf("prostmt => ID \n");}
		;

reastmt	:	READ LP inpvar moreinp RP {printf("reastmt => READ LP inpvar moreinp RP \n");}
		;

inpvar	:	variab {printf("inpvar => variab \n");}
		;

moreinp	:	COMMA inpvar moreinp {printf("moreinp => COMMA inpvar moreinp \n");}
		|	{printf("moreinp => Null \n");}
		;

wristmt	:	WRITE LP outval moreout RP {printf("wristmt => WRITE LP outval moreout RP \n");}
		;

outval	:	expr {printf("outval => expr \n");}
		;

moreout	:	COMMA outval moreout {printf("moreout => COMMA outval moreout \n");}
		|	{printf("moreout => Null \n");}
		;

strstmt	:	comstmt	{printf("strstmt => comstmt \n");}
		|	ifstmt	{printf("moreout => ifstmt \n");}
		|	whistmt	{printf("moreout => whistmt \n");}
		;

ifstmt	:	IF LP expr RP THEN stmt	{printf("ifstmt => IF LP expr RP THEN stmt \n");}
		|	IF LP expr RP THEN stmt ELSE stmt %prec ELSE{printf("ifstmt => IF LP expr RP THEN stmt ELSE stmt \n");}
		;

whistmt	:	WHILE expr DO stmt {printf("whistmt => WHILE expr DO stmt \n");}
		;

expr	:	simexpr	{printf("expr => simexpr \n");}
		|	simexpr relop simexpr {printf("expr => simexpr relop simexpr \n");}
		;

simexpr	:	sign term addterm	{printf("simexpr => sign term addterm \n");}
		;

addterm	:	addop term addterm	{printf("addterm => addop term addterm \n");}
		|	{printf("addterm => Null \n");}
		;

term	:	factor mulfact	{printf("term => factor mulfact \n");}
		;

mulfact	:	mulop factor mulfact	{printf("mulfact => mulop factor mulfact \n");}
		|	{printf("mulfact => Null \n");}
	;

factor	:	variab	{printf("factor => variab \n");}
		|	const	{printf("factor => const \n");}
		|	LP expr RP	{printf("factor => LP expr RP \n");}
		|	NOT factor	{printf("factor => NOT factor \n");}
		;

relop	:	EQ	{printf("relop => EQ \n");}
		|	NE	{printf("relop => NE \n");}
		|	LT	{printf("relop => LT \n");}
		|	LE	{printf("relop => LE \n");}
		|	GT	{printf("relop => GT \n");}
		|	GE	{printf("relop => GE \n");}
		;

sign	:	ADD	{printf("sign => ADD \n");}
		|	MINUS	{printf("strstmt => MINUS \n");}
		|	{printf("sign => Null \n");}
		;

addop	:	ADD		{printf("addop => ADD \n");}
		|	MINUS	{printf("addop => MINUS \n");}
		|	OR		{printf("addop => OR \n");}
		;

mulop	:	TIMES	{printf("mulop => TIMES \n");}
		|	DIV	{printf("mulop => DIV \n");}
		|	AND	{printf("mulop => AND \n");}
		;

variab	:	ID	{printf("variab => ID \n");}
		|	indvar	{printf("variab => indvar \n");}
		;

indvar	:	ID LSP expr RSP {printf("indvar => ID LSP expr RSP \n");}
		;

const	:	NUM {printf("const => NUM \n");}
		|	CC	{printf("const => CC \n");}
		|	TRUE	{printf("const => TRUE \n");}
		|	FALSE	{printf("const => FALSE \n");}
	;

%%

int yyerror(char *s)
{
	printf("%s\n",s);
}
