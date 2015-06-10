#include <stdio.h>
#include <stdlib.h>
#include "c_lex.h"
#include "c_tree.h"

cEXP *create_exp(){
		
}

cSTM *create_stm(){
	
}

void free_exp(cEXP *p){
	if(p){
		if(p->exp1)
			free_exp(p->exp1); 
		if(p->exp2)
			free_exp(p->exp2); 
		if(p->next)
			free_exp(p->next); 
		free(p); 	
	}	
}

void free_stm(cSTM *p){
	if(p){
		if(p->exp1)
			free_exp(p->exp1); 
		if(p->exp2)
			free_exp(p->exp2); 
		if(p->stm1)
			free_stm(p->stm1); 
		if(p->stm2)
			free_stm(p->stm2); 
		if(p->next)
			free_stm(p->next); 
		free(p); 
	}
}

void print_exp(cEXP *p){
	
}

void print_stm(cSTM *p){
	
}
