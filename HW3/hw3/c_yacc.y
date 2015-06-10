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
        { $$ = create_stm();
		   $$->stm_id= sVDLIST;
		   $$->stm1 = $1;
		   $$->next = $2;
		}
	|
	    {$$ = NULL;}
	;

var_dec	:	t_spec var_lst SEMI
        { 
		   $$ = create_stm();
		   $$->stm_id= sVDEC;
		   $$->exp1 = $1;
		   $$->exp2 = $2;
		}
	;

var_lst	:	var_id COMMA var_lst
        { 
		   $$= create_exp();
		   $$->exp_id = eVLIST;
		   $$->exp1= $1;
		   $$->next=$3;
		}
	|	var_id
	    { 
		   $$ =  $1;
		}
	;

var_id	:	ID ASSIGN expr
        { $$= create_exp();
		  $$->exp_id = eVASS;
		  strcpy($$->name, $1);
		  $$->exp1=$3; 
		}
	|	ID
	    { $$= create_exp();
		  $$->exp_id = eID;
		  strcpy($$->name, $1);
		}
	;

stm_lst	:	stmt  stm_lst
        { $$ = create_stm();
		  $$->stm_id =sSLIST;
		  $$->stm1=$1;
		  $$->next=$2;
		}
	|
	    {$$ = NULL;}
	;

stmt	:	com_stm
        { $$ = $1;}
	|	cnd_stm
	    { $$ = $1;}
	|	whi_stm
	    { $$ = $1;}
	|	ass_stm
	    { $$ = $1;}
	|	BR SEMI
	    { $$=create_stm();
		  $$->stm_id =sBR;
		}
	|	CONT SEMI
	    { $$=create_stm();
		  $$->stm_id = sCONT;
		}
	|	RET expr SEMI
	    { $$=create_stm();
		  $$->stm_id = sRET;
		  $$->exp1=$2;
		}
	|	PRF LP STR opt_exp RP SEMI
	    { $$=create_stm();
		  $$->stm_id = sASTM;
		  strcpy($$->name, $3);
		  $$->exp1=$4;
		}
	;

cnd_stm	:	IF LP expr RP stmt opt_els
        { $$ = create_stm();
		  $$->stm_id = sISTM;
		  $$->exp1= $3;
		  $$->stm1=$5;
		  $$->stm2=$6;
		}
	;

opt_els	:	ELSE stmt
        {  $$ = create_stm();
	       $$->stm_id = sOELS;
		   $$->stm1 = $2;
	    }
	|
	    {$$ = NULL;}
	;

whi_stm	:	WHILE LP expr RP stmt
        {
		   $$ = create_stm();
		   $$->stm_id = sWSTM;
		   $$->exp1=$3;
		   $$->stm1=$5;
		}
	;

ass_stm	:	ID ASSIGN expr SEMI
        {
		    $$ = create_stm();
			$$->stm_id = sASTM;
			strcpy($$->name, $1);
			$$->exp1 = $3;
		}
	;

opt_exp	:	COMMA expr
        {
		    $$= create_exp();
			$$->exp_id =  eOEXP ;
			$$->exp1 = $2;
		}
	|
	    {$$ = NULL;}
	;

expr	:	ID ASSIGN expr
        {
		    $$= create_exp();
			$$->exp_id = eEXP;
			strcpy($$->name, $1);
			$$->next = $3;
		}
	|	cond
	    {$$=$1;}
	;

cond	:	disj
        {$$=$1;}
	|	disj OPT expr COL cond
	    {
		    $$= create_exp();
			$$->exp_id = eEOPT;
			$$->exp1=$1;
			$$->exp2=$3;
			$$->next=$5;
		}
	;

disj	:	conj OR disj 
        {
		    $$= create_exp();
			$$->exp_id = eOR ;
			$$->exp1 =$1;
			$$->exp2 = $3;
		}
	|	conj
	    {$$=$1;}
	;

conj	:	comp AND conj
        {
		    $$= create_exp();
			$$->exp_id = eAND ;
			$$->exp1 =$1;
			$$->exp2 =$3;
		}
	|	comp
	    {$$=$1;}
	;

comp	:	rel EQU rel
        {
		    $$= create_exp();
			$$->exp_id = eEQU;
			$$->exp1 = $1;
			$$->exp2 = $3;
		}
	|	rel
	    {$$=$1;}
	;

rel	:	sum ltgt sum
        {
		    $$= create_exp();
			$$->exp_id =eREL;
			$$->exp1 = $1;
			$$->exp2 = $3;
		}
	|	sum
	    {$$=$1;}
	;

ltgt	:	LT
		{$$ = eLT;}
	|	GT
		{$$ = eGT;}
	;

sum	:	sum ADD term 
        {
		    $$= create_exp();
		    $$->exp_id =eADD;
			$$->exp1 = $1;
			$$->exp2 = $3;
		}
	|	sum MINUS term
	    {
		    $$= create_exp();
		    $$->exp_id =eMINUS;
			$$->exp1 = $1;
			$$->exp2 = $3;
		}
	|	term
	    {$$=$1;}
	;

term	:	term TIMES factor
        {
		    $$= create_exp();
		    $$->exp_id =eTIMES;
			$$->exp1 = $1;
			$$->exp2 = $3;
		}
	|	term DIVIDE factor
	    {
		    $$= create_exp();
		    $$->exp_id =eDIVIDE;
			$$->exp1 = $1;
			$$->exp2 = $3;
		}
	|	term REMAIN factor
	    {
		    $$= create_exp();
		    $$->exp_id =eREMAIN;
			$$->exp1 = $1;
			$$->exp2 = $3;
		}
	|	factor
	    {$$=$1;}
	;

factor	:	NOT factor
        {
		    $$= create_exp();
		    $$->exp_id =eNOT;
			$$->exp1 = $2;
		}
	|	MINUS factor
	    {
		    $$= create_exp();
		    $$->exp_id =eUMINUS;
			$$->exp1 = $2;
		}
	|	primary
	    {$$=$1;}
	;

primary	:	NUM
        {
		    $$= create_exp();
		    $$->exp_id = eNUM;
		    $$->val = $1;
		}
	|	ID
	    {
		    $$= create_exp();
		    $$->exp_id = eID;
		    strcpy($$->name, $1);
		}
	|	ID LP arg_lst RP
	    {
		    $$= create_exp();
		    $$->exp_id = eFCALL;
			strcpy($$->name, $1);
			$$->exp1 = $3;
		}
	|	LP expr RP
	    {
		    $$= create_exp();
		    $$->exp_id =eLP;
			$$->exp1 = $2;
		}
	;

arg_lst	:	expr arg_nxt
        {
		    $$= $1;
		    $$->next=$2;
		}
	|
	    {$$=NULL;}
	;

arg_nxt	:	COMMA expr arg_nxt
        {
		    $$= create_exp();
		    $$->exp_id = ePLIST;
			$$->exp1 = $2;
			$$->next = $3;
		}
	|
	    {$$=NULL;}
	;

%%

int yyerror(char *s)
{
	printf("%s\n",s);
	return 0;
}

