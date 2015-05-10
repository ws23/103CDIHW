%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include "miniC.h"
%}
%token INT
%token LP RP LSP RSP
%token SEMI COMMA ASSIGN QUES COLON
%token IF ELSE WHILE
%token PRINTF BREAK CONTINUE RETURN
%token ID NUM STRING
%token OR AND NOT EQ LT GT ADD MINUS DIV TIMES MOD
%left OR AND NOT
%left EQ LT GT
%left ADD MINUS
%left DIV TIMES MOD

%expect 1 

%%

smallc_program	:	Type_specifier ID LP Param_decl_list RP Compound_stmt smallc_program {printf("smallc_program => Type_specifier ID LP Prarm_decl_list RP Compound_stmt smallc_program\n"); }
				|   Type_specifier ID LP Param_decl_list RP Compound_stmt {printf("smallc_program => Type_specifier ID LP Prarm_decl_list RP Compound_stmt\n******** Parse OK ********\n"); }
                |   Type_specifier ID LP RP Compound_stmt smallc_program {printf("smallc_program => Type_specifier ID LP RP Compo    und_stmt smallc_program\n"); }

				|   Type_specifier ID LP RP Compound_stmt {printf("smallc_program => Type_specifier ID LP RP Compound_stmt\n******** Parse OK ********\n"); }
				;

Type_specifier	:	INT {printf("Type_specifier => INT\n"); }
				;

Param_decl_list	:	Param_decl COMMA Param_decl Param_decl_list {printf("Param_decl_list => Param_decl COMMA Param_decl Param_decl_list\n"); }
				|	Param_decl {printf("Param_decl_list => Param_decl\n"); } 
				;

Param_decl		:	Type_specifier ID {printf("Param_decl => Type_specifier ID\n"); }
				;

Compound_stmt	:	LSP VDs Ss RSP {printf("LSP VDs Ss RSP\n"); }
				|	LSP RSP {printf("LSP RSP\n"); }
				;

VDs				:	Var_decl VDs{printf("Var_decl VDs\n"); }
				|	Var_decl {printf("Var_decl\n"); }
				;

Ss				:	Stmt Ss {printf("Ss => Stmt Ss\n"); }
				|	Stmt {printf("Ss => Stmt\n"); }
				;

Var_decl		:	Type_specifier Var_decl_list SEMI {printf("Var_decl => Type_specifier Var_decl_list SEMI"); }
				;

Var_decl_list	:	Variable_id COMMA Variable_id Var_decl_list {printf("Var_decl_list => Variable_id COMMA Variable_id Var_decl_list\n"); }
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

Cond_stmt		:	IF LP Expr RP ELSE Stmt {printf("Cond_stmt => IF LP Expr RP ELSE Stmt\n"); }
				|	IF LP Expr RP {printf("Cond_stmt => IF LP Expr RP\n"); }
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

Expr_list		:	Expr COMMA Expr Expr_list {printf("Expr_list => Expr COMMA Expr Expr_list\n"); }
				|	Expr {printf("Expr_list => Expr\n"); }
				;

%%

int yyerror(char *s){
	printf("%s\n", s); 
}
