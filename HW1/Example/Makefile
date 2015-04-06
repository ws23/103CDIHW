main:  pas_lex.o main.o
	gcc -o scanner.exe pas_lex.o main.o 

pas_lex.o: pas_lex.c
	gcc -c pas_lex.c

pas_lex.c: pas_lex.l
	flex -opas_lex.c pas_lex.l

main.o: main.c
	gcc -c main.c
	
clean:
	rm *.o pas_lex.c scanner.exe
