main:  c_lex.o main.o
	gcc -o scanner.exe c_lex.o main.o 

c_lex.o: c_lex.c
	gcc -c c_lex.c

c_lex.c: c_lex.l
	flex -oc_lex.c c_lex.l

main.o: main.c
	gcc -c main.c
	
# To clean the generated files
clean:
	rm *.o c_lex.c scanner.exe
