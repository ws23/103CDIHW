%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include "miniC.h"
	#include "c_tree.h"
%}

%token INT
%token LP RP LSP RSP
%token SEMI COMMA ASSIGN QUES COLON
%token IF ELSE WHILE
%token PRINTF BREAK CONTINUE RETURN
%token ID NUM STRING
%token OR AND NOT EQ LT GT ADD MINUS DIV TIMES MOD
%token COMMENT

%left OR AND
%left NOT QUES
%left EQ LT GT
%left ADD MINUS
%left DIV TIMES MOD
%expect 1

%union{
		cSTM *sm; 
		cEXP *ex; 
		int nu; 
		char *sr; 
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
%type <sr> STRING

%%


minic		:	prog { program = $1; $$ = program; printf("miniC parses OK!\n"); }
			|	{ program = NULL; $$ = NULL; printf("******** Parsing failed! ********\n"); }

prog		:	func_dec prog



smallc_program	:	Type_specifier ID LP Param_decl_list RP Compound_stmt smallc_program {printf("smallc_program => Type_specifier ID LP Prarm_decl_list RP Compound_stmt smallc_program\n******** Parse OK ********\n"); }
				|   Type_specifier ID LP RP Compound_stmt smallc_program {printf("smallc_program => Type_specifier ID LP RP Compound_stmt smallc_program\n******** Parse OK ********\n"); }
				|   Type_specifier ID LP Param_decl_list RP Compound_stmt {printf("smallc_program => Type_specifier ID LP Prarm_decl_list RP Compound_stmt\n"); }
				|   Type_specifier ID LP RP Compound_stmt {printf("smallc_program => Type_specifier ID LP RP Compound_stmt\n"); }
				;

Type_specifier	:	INT {printf("Type_specifier => INT\n"); }
				;

Param_decl_list	:	Param_decl_list COMMA Param_decl {printf("Param_decl_list => Param_decl_list COMMA Param_decl\n"); }
				|	Param_decl {printf("Param_decl_list => Param_decl\n"); } 
				;

Param_decl		:	Type_specifier ID {printf("Param_decl => Type_specifier ID\n"); }
				;

Compound_stmt	:	LSP VDs Ss RSP {printf("Compound_stmt => LSP VDs Ss RSP\n"); }
				|	LSP VDs RSP {printf("Compound_stmt => LSP VDs RSP\n"); }
				|	LSP Ss RSP {printf("Compound_stmt => LSP Ss RSP\n"); }
				|	LSP RSP {printf("Compound_stmt => LSP RSP\n"); }
				;

VDs				:	VDs Var_decl{printf("VDs => VDs Var_decl\n"); }
				|	Var_decl {printf("VDs => Var_decl\n"); }
				;

Ss				:	Ss Stmt {printf("Ss => Ss Stmt\n"); }
				|	Stmt {printf("Ss => Stmt\n"); }
				;

Var_decl		:	Type_specifier Var_decl_list SEMI {printf("Var_decl => Type_specifier Var_decl_list SEMI\n"); }
				;

Var_decl_list	:	Var_decl_list COMMA Variable_id {printf("Var_decl_list => Var_decl_list COMMA Variable_id\n"); }
				|	Variable_id {printf("Var_decl_list => Variable_id\n"); }
				;

Variable_id		:	ID ASSIGN Expr {printf("Variable_id => ID ASSIGN Expr\n"); }
				|	ID {printf("Variable_id => ID\n"); }
				;

Stmt			:	Compound_stmt {printf("Stmt => Compound_stmt\n"); }
				|	Cond_stmt {printf("Stmt => Cond_stmt\n"); }
				|	While_stmt {printf("Stmt => While_stmt\n"); }
				|	Assign_stmt {printf("Stmt => Assign_stmt\n"); }
				|	BREAK SEMI {printf("Stmt => BREAK SEMI\n"); }
				|	CONTINUE SEMI {printf("Stmt => CONTINUE SEMI\n"); }
				|	RETURN Expr SEMI {printf("Stmt => RETURN Expr SEMI\n"); }
				|	PRINTF LP STRING COMMA Expr RP SEMI {printf("Stmt => PRINTF LP STRING COMMA Expr RP SEMI\n"); }
				|	PRINTF LP STRING RP SEMI {printf("Stmt => PRINTF LP STRING RP SEMI\n"); }
				;

Assign_stmt		:	ID ASSIGN Expr SEMI {printf("Assign_stmt => ID ASSIGN Expr SEMI\n"); }
				;

Cond_stmt		:	IF LP Expr RP Stmt ELSE Stmt {printf("Cond_stmt => IF LP Expr RP Stmt ELSE Stmt\n"); }
				|	IF LP Expr RP Stmt {printf("Cond_stmt => IF LP Expr RP Stmt\n"); }
				;

While_stmt		:	WHILE LP Expr RP Stmt {printf("While_stmt => WHILE LP Expr RP Stmt\n"); }
				;

Expr			:	ID ASSIGN Expr {printf("Expr => ID ASSIGN Expr\n"); }
				|	Condition {printf("Expr => Condition\n"); }
				;

Condition		:	Disjunction QUES Expr COLON Condition {printf("Condition => Disjunction QUEST Expr COLON Condition\n"); }
				|	Disjunction {printf("Condition => Disjunction\n"); }
				;

Disjunction		:	Disjunction OR Conjunction {printf("Disjunction => Disjunction OR Conjunction\n"); }
				|	Conjunction {printf("Disjunction => Conjunction\n"); }
				;

Conjunction		:	Conjunction AND Comparison {printf("Conjunction => Conjunction AND Comparison\n"); }
				|	Comparison {printf("Conjunction => Comparison\n"); }
				;

Comparison		:	Relation EQ Relation {printf("Compatison => Relation EQ Relation\n"); }
				|	Relation {printf("Comparison => Relation\n"); }
				;

Relation		:	Sum LT Sum {printf("Relation => Sum LT Sum\n"); }
				|	Sum GT Sum {printf("Relation => Sum GT Sum\n"); }
				|	Sum {printf("Relation => Sum\n"); }
				;

Sum				:	Sum ADD Term {printf("Sum => Sum ADD Term\n"); }
				|	Sum MINUS Term {printf("Sum => Sum MINUS Term\n"); }
				|	Term {printf("Sum => Term\n"); }
				;

Term			:	Term TIMES Factor {printf("Term => Term TIMES Factor\n"); }
				|	Term DIV Factor {printf("Term => Term DIV Factor\n"); }
				|	Term MOD Factor {printf("Term => Term MOD Factor\n"); }
				|	Factor {printf("Term => Factor\n"); }
				;

Factor			:	NOT Factor {printf("Factor => NOT Factor\n"); }
				|	MINUS Factor {printf("Factor => MINUS Factor\n"); }
				|	Primary {printf("Factor => Primary\n"); }
				;

Primary			:	ID LP Expr_list RP {printf("Primary => ID LP Expr_list RP\n"); }
				|	LP Expr RP {printf("Primary => LP Expr RP\n"); }
				|	NUM {printf("Primary => NUM\n"); }
				|	ID {printf("Primary => ID\n"); }
				;

Expr_list		:	Expr_list COMMA Expr {printf("Expr_list => Expr_list COMMA Expr\n"); }
				|	Expr {printf("Expr_list => Expr\n"); }
				;

%%

int yyerror(char *s){
	printf("%s\n", s); 
}
