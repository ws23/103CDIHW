#include <stdio.h>
#include "miniC.h"

char c_name[16]; 
int c_val; 

int main(int argc, char *argv[]){
	yyin = fopen(argv[1], "r"); 	
	yyparse(); 
	return 0; 
}
