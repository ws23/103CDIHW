ctree:	c_yacc.o c_tree.o c_lex.o main.o
	gcc -o ctree main.o c_tree.o c_lex.o c_yacc.o

c_lex.c:	c_lex.l minic.h c_yacc.h
	flex -oc_lex.c c_lex.l

c_lex.o:	c_lex.c minic.h
	gcc -c -o c_lex.o c_lex.c

c_yacc.c: c_yacc.y minic.h
	bison -d -oc_yacc.c c_yacc.y

c_yacc.o: c_yacc.c minic.h
	gcc -c c_yacc.c

c_tree.o: c_tree.c c_tree.h
	gcc -c -o c_tree.o c_tree.c
	
main.o:	main.c c_lex.h
	gcc -c -o main.o main.c
	
all:	cparse

clean:
	rm *.o c_lex.c c_yacc.c c_yacc.h ctree

# hidden rules
.c:	.l
	flex -o$< $@
