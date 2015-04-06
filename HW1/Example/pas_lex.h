#define DIV 0
#define OR 1
#define AND 2
#define NOT 3
#define IF 4
#define THEN 5
#define ELSE 6
#define OF 7
#define WHILE 8
#define DO 9
#define BG 10
#define END 11
#define READ 12
#define WRITE 13
#define VAR 14
#define ARRAY 15
#define PROC 16
#define PROG 17
#define INT 18
#define BOOL 19
#define TRUE 20
#define FALSE 21
#define ADD 22
#define MINUS 23
#define TIMES 24
#define EQ 25
#define NE 26
#define LT 27
#define GT 28
#define LE 29
#define GE 30
#define LP 31
#define RP 32
#define LSP 33
#define RSP 34
#define ASSIGN 35
#define DOT 36
#define COMMA 37
#define SEMI 38
#define COLON 39
#define DOTDOT 40
#define ID 41
#define NUM 42
#define CC 43


extern int yylex();
extern FILE *yyin;

extern char pas_name[16];
extern int pas_val;



