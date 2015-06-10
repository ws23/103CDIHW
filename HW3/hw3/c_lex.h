#define L_MIN 0
#define NUM 1
#define ID 2
#define STR 3
#define BR 4
#define CONT 5
#define ELSE 6
#define IF 7
#define INT 8
#define RET 9
#define WHILE 10
#define PRF 11
#define ADD 12
#define MINUS 13
#define TIMES 14
#define DIVIDE 15
#define REMAIN 16
#define NOT 17
#define OPT 18
#define COL 19
#define ASSIGN 20
#define COMMA 21
#define LT 22
#define GT 23
#define LP 24
#define RP 25
#define LBP 26
#define RBP 27
#define OR 28
#define AND 29
#define EQU 30
#define DBQ 31
#define SEMI 32
#define COMMENT 33
#define L_MAX 34

extern int yylex();
extern FILE *yyin;

extern void print_lex( int );

extern char name[16];
extern int val;

