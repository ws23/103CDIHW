#include <stdio.h>
#include "pascal.h"

char pas_name[16];
int pas_val;

int main(int argc,char *argv[]) {
    yyin = fopen(argv[1],"r");
	yyparse();
}
