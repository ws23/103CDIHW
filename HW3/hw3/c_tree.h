extern int  yylex();
extern int  yyparse();
extern FILE *yyin;
extern FILE *yyout;
extern FILE *yyerr;

// define tags for parse tree

#define sMIN 0
#define sFUNC 1
#define sSLIST 2
#define sCSTM 3
#define sVDLIST 4
#define sVDEC 5
#define sISTM 6
#define sWSTM 7
#define sASTM 8
#define sBR 9
#define sCONT 10
#define sRET 11
#define sPRF 12
#define sMAX 13
#define sOELS 14

#define eMIN 0
#define eTYPE 1
#define eINT 2
#define ePLIST 3
#define ePDEC 4
#define eVLIST 5
#define eVASS 6
#define eID 7
#define eEOPT 8
#define eOR 9
#define eAND 10
#define eEQU 11
#define eREL 12
#define eLT 13
#define eGT 14
#define eADD 15
#define eMINUS 16
#define eTIMES 17
#define eDIVIDE 18
#define eREMAIN 19
#define eNOT 20
#define eUMINUS 21
#define eNUM 22
#define eFCALL 23
#define eALIST 24
#define eMAX 25
#define eOEXP 26
#define eEXP 27
#define eLP 28


// define data structures for parse tree

typedef struct c_exp {
   int  exp_id;
   char name[16];
   int  val;
   struct c_exp *exp1;
   struct c_exp *exp2;
   struct c_exp *next;
} cEXP;

typedef struct c_stm {
   int  stm_id;
   char name[16];
   struct c_exp *exp1;
   struct c_exp *exp2;
   struct c_stm *stm1;
   struct c_stm *stm2;
   struct c_stm *next;
} cSTM;

// declare utility functions

extern cEXP* create_exp();
extern cSTM* create_stm();
extern void free_exp( cEXP* );
extern void free_stm( cSTM* );
extern void print_exp( cEXP* );
extern void print_stm( cSTM* );

// global variables

extern cSTM* program;
extern char name[16];
extern int  val;

