#define L_MIN 0
#define NUM 1
#define ID 2
#define STRING 3
#define BREAK 4
#define CONTINUE 5
#define ELSE 6
#define IF 7
#define INT 8
#define RETURN 9
#define WHILE 10
#define PRINTF 11
#define ADD 12
#define MINUS 13
#define TIMES 14
#define DIV 15
#define MOD 16
#define NOT 17
#define QUES 18 
#define COLON 19
#define ASSIGN 20
#define COMMA 21
#define LT 22
#define GT 23
#define LP 24
#define RP 25
#define LSP 26
#define RSP 27
#define OR 28
#define AND 29
#define EQ 30
#define QUOTE 31
#define SEMI 32
#define COMMENT 33
#define ERROR (-1)

extern int yylex(); 
extern FILE *yyin; 

extern char name[16]; 
extern int val; 
