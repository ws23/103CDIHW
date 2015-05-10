main:  c_lex.o c_yacc.o main.o
	gcc -o parse.exe c_lex.o c_yacc.o main.o 

c_lex.o: c_lex.c
	gcc -c c_lex.c

c_yacc.o: c_yacc.c
	gcc -c c_yacc.c

c_lex.c: c_lex.l c_yacc.h miniC.h
	flex -oc_lex.c c_lex.l

c_yacc.c: c_yacc.y miniC.h
	bison -d -o c_yacc.c c_yacc.y

main.o: main.c
	gcc -c main.c
	
# To clean the generated files
clean:
	rm *.o c_lex.c c_yacc.c parse.exe
