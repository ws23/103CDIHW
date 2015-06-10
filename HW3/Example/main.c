#include <stdio.h>
#include "minic.h"
#include "c_tree.h"

char name[16];
int val;
cSTM* program = NULL;

int main(int argc,char *argv[]) {
    int t;

    yyin = fopen(argv[1],"r");
    yyparse();
    print_stm( program );
    printf("MiniC successfully builds a parse tree for %s!\n\n", argv[1]);
    free_stm( program );
}
