main: pas_yacc.o pas_lex.o main.o 
	gcc -o parse.exe pas_lex.o main.o pas_yacc.o


pas_lex.o: pas_lex.c
	gcc -c pas_lex.c

pas_lex.c: pas_lex.l
	flex -opas_lex.c pas_lex.l

pas_yacc.o: pas_yacc.c
	gcc -c pas_yacc.c
	
pas_yacc.c: pas_yacc.y
	bison -d -opas_yacc.c pas_yacc.y
	
main.o: main.c
	gcc -c main.c
	


	
clean:
	rm *.o pas_lex.c parse.exe pas_yacc.c pas_yacc.h

# hidden rules
.c:	.l
	flex -o$< $@
