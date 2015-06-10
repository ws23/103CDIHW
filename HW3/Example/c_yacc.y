%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include "minic.h"
	#include "c_tree.h"

/*
	#if YYBISON
	union YYSTYPE;
	int yylex(union YYSTYPE *, void *);
	#endif
*/
%}

%token BR CONT RET PRF
%token LP RP LBP RBP
%token INT STR
%token IF WHILE 
%token ELSE ASSIGN SEMI COMMA COL DBQ
%token ID NUM 
%left OR AND
%left NOT OPT
%left EQU LT GT
%left ADD MINUS
%left DIVIDE TIMES REMAIN
%expect 1

%union{ cSTM* sm;
        cEXP* ex;
        int   nu;
        char* sr;
      }

%type <sm> minic
%type <sm> prog
%type <sm> fun_dec
%type <ex> t_spec
%type <ex> par_lst
%type <ex> par_nxt
%type <ex> par_dec
%type <sm> com_stm
%type <sm> var_dl
%type <sm> var_dec
%type <ex> var_lst
%type <ex> var_id
%type <sm> stm_lst
%type <sm> stmt
%type <sm> cnd_stm
%type <sm> opt_els
%type <sm> whi_stm
%type <sm> ass_stm
%type <ex> opt_exp
%type <ex> expr
%type <ex> cond
%type <ex> disj
%type <ex> conj
%type <ex> comp
%type <ex> rel
%type <nu> ltgt
%type <ex> sum
%type <ex> term
%type <ex> factor
%type <ex> primary
%type <ex> arg_lst
%type <ex> arg_nxt
%type <nu> NUM
%type <sr> ID
%type <sr> STR

%%
minic	:	prog 
		{program = $1;
		 $$ = program;
		 printf("minic parses OK!\n");}
	|	{program = NULL;
		 $$ = NULL;
		 printf("******** Parsing failed! \n");}
	;

prog	:	fun_dec	prog
		{$$ = $1;
		 $$->next = $2;}
	|	fun_dec
		{$$ = $1;}
	;

fun_dec	:	t_spec ID LP par_lst RP com_stm
		{$$ = create_stm();
		 $$->stm_id = sFUNC;
		 strcpy($1->name, $2);
		 $$->exp1 = $1;
		 $$->exp2 = $4;
		 $$->stm1 = $6;}
	;

t_spec	:	INT
		{$$= create_exp();
		 $$->exp_id = eTYPE;
		 $$->val = eINT;}
	;

par_lst	:	par_dec par_nxt
		{$$= create_exp();
		 $$->exp_id = ePLIST;
		 $$->exp1 = $1;
		 $$->next = $2;}
	| 
		{$$ = NULL;}
	;

par_nxt	:	COMMA par_dec par_nxt
		{$$= create_exp();
		 $$->exp_id = ePLIST;
		 $$->exp1 = $2;
		 $$->next = $3;}
	|
		{$$ = NULL;}
	;

par_dec	:	t_spec ID
		{$$= create_exp();
		 $$->exp_id = ePDEC;
		 $$->exp1 = $1;
		 strcpy($$->name, $2);}
	;

com_stm	:	LBP var_dl stm_lst RBP
		{$$ = create_stm();
		 $$->stm_id = sCSTM;
		 $$->stm1 = $2;
		 $$->stm2 = $3;}
	;

var_dl	:	var_dec var_dl
	|
	;

var_dec	:	t_spec var_lst SEMI
	;

var_lst	:	var_id COMMA var_lst
	|	var_id
	;

var_id	:	ID ASSIGN expr
	|	ID
	;

stm_lst	:	stmt  stm_lst
	|
	;

stmt	:	com_stm
	|	cnd_stm
	|	whi_stm
	|	ass_stm
	|	BR SEMI
	|	CONT SEMI
	|	RET expr SEMI
	|	PRF LP STR opt_exp RP SEMI
	;

cnd_stm	:	IF LP expr RP stmt opt_els
	;

opt_els	:	ELSE stmt
	|
	;

whi_stm	:	WHILE LP expr RP stmt
	;

ass_stm	:	ID ASSIGN expr SEMI
	;

opt_exp	:	COMMA expr
	|
	;

expr	:	ID ASSIGN expr
	|	cond
	;

cond	:	disj
	|	disj OPT expr COL cond
	;

disj	:	disj OR conj
	|	conj
	;

conj	:	conj AND comp
	|	comp
	;

comp	:	rel EQU rel
	|	rel
	;

rel	:	sum ltgt sum
	|	sum
	;

ltgt	:	LT
		{$$ = eLT;}
	|	GT
		{$$ = eGT;}
	;

sum	:	sum ADD term
	|	sum MINUS term
	|	term
	;

term	:	term TIMES factor
	|	term DIVIDE factor
	|	term REMAIN factor
	|	factor
	;

factor	:	NOT factor
	|	MINUS factor
	|	primary
	;

primary	:	NUM
	|	ID
	|	ID LP arg_lst RP
	|	LP expr RP
	;

arg_lst	:	expr arg_nxt
	|
	;

arg_nxt	:	COMMA expr arg_nxt
	|
	;

%%

int yyerror(char *s)
{
	printf("%s\n",s);
	return 0;
}

