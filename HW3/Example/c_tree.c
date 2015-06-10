#include <stdio.h>
#include <stdlib.h>
#include "c_lex.h"
#include "c_tree.h"

cEXP* create_exp ( ) {
  cEXP* tmp;
  tmp = (struct c_exp *)malloc(sizeof(struct c_exp));
  if( tmp ) {
    tmp->exp_id = eMIN;
    tmp->name[0] = '\0';
    tmp->val = 0;
    tmp->exp1 = NULL;
    tmp->exp2 = NULL;
    tmp->next = NULL;
  }
  return tmp;
}

cSTM* create_stm ( ) {
  cSTM* tmp;
  tmp = (struct c_stm *)malloc(sizeof(struct c_stm));
  if( tmp ) {
    tmp->stm_id = sMIN;
    tmp->exp1 = NULL;
    tmp->exp2 = NULL;
    tmp->stm1 = NULL;
    tmp->stm2 = NULL;
    tmp->next = NULL;
  }
  return tmp;
}

void free_exp ( cEXP* p ) {
  if( p ) {
    if( p->exp1 ) free_exp( p->exp1 );
    if( p->exp2 ) free_exp( p->exp2 );
    if( p->next ) free_exp( p->next );
    free( p );
  }
}

void free_stm ( cSTM* p ) {
  if( p ) {
    if( p->exp1 ) free_exp( p->exp1 );
    if( p->exp2 ) free_exp( p->exp2 );
    if( p->stm1 ) free_stm( p->stm1 );
    if( p->stm2 ) free_stm( p->stm2 );
    if( p->next ) free_stm( p->next );
    free( p );
  }
}

void print_exp ( cEXP* p ) {
  if( p ) {
    switch( p->exp_id ) {
    case eTYPE: printf("cEXP(eTYPE):%d\n", p->val);
	       printf("-- end of cEXP(eTYPE)\n");
	        break;
    case ePLIST: printf("cEXP(ePLIST):\n");
		 print_exp( p->exp1 );
		 print_exp( p->next );
		 printf("-- end of cEXP(ePLIST)\n");
		 break;
    case ePDEC: printf("cEXP(ePDEC): %s\n", p->name);
		print_exp( p->exp1 );
		printf("-- end of cEXP(ePDEC)\n");
		break;
    case eVLIST: printf("cEXP{eVLIST):\n");
	         print_exp( p->exp1 );
		 print_exp( p->next );
		 printf("-- end of cEXP(eVLIST)\n");
	         break;
    case eVASS: printf("cEXP{eVASS): %s = \n", p->name);
	        print_exp( p->exp1 );
		printf("-- end of cEXP(eVASS)\n");
	        break;
    case eID: printf("cEXP{eID): %s\n", p->name);
	      printf("-- end of cEXP(eID)\n");
	      break;
    case eEOPT: printf("cEXP{eEOPT):\n");
	        print_exp( p->exp1 );
	        print_exp( p->exp2 );
	        print_exp( p->next );
		printf("-- end of cEXP(eEOPT)\n");
	        break;
    case eOR: printf("cEXP{eOR):\n");
	      print_exp( p->exp1 );
	      print_exp( p->exp2 );
	      printf("-- end of cEXP(eOR)\n");
	      break;
    case eAND: printf("cEXP{eAND):\n");
	       print_exp( p->exp1 );
	       print_exp( p->exp2 );
	       printf("-- end of cEXP(eAND)\n");
	       break;
    case eEQU: printf("cEXP{eEQU):\n");
	       print_exp( p->exp1 );
	       print_exp( p->exp2 );
	       printf("-- end of cEXP(eEQU)\n");
	       break;
    case eREL: printf("cEXP{eREL): %d\n", p->val);
	       print_exp( p->exp1 );
	       print_exp( p->exp2 );
	       printf("-- end of cEXP(eREL)\n");
	       break;
    case eADD: printf("cEXP{eADD):\n");
	       print_exp( p->exp1 );
	       print_exp( p->exp2 );
	       printf("-- end of cEXP(eADD)\n");
	       break;
    case eMINUS: printf("cEXP{eMINUS):\n");
	         print_exp( p->exp1 );
	         print_exp( p->exp2 );
	         printf("-- end of cEXP(eMINUS)\n");
	         break;
    case eTIMES: printf("cEXP{eTIMES):\n");
	         print_exp( p->exp1 );
	         print_exp( p->exp2 );
	         printf("-- end of cEXP(eTIMES)\n");
	         break;
    case eDIVIDE: printf("cEXP{eDIVIDE):\n");
	         print_exp( p->exp1 );
	         print_exp( p->exp2 );
	         printf("-- end of cEXP(eDIVIDE)\n");
	         break;
    case eREMAIN: printf("cEXP{eREMAIN):\n");
	          print_exp( p->exp1 );
	          print_exp( p->exp2 );
	          printf("-- end of cEXP(eREMAIN)\n");
	          break;
    case eNOT: printf("cEXP{eNOT):\n");
	       print_exp( p->exp1 );
	       printf("-- end of cEXP(eADD)\n");
	       break;
    case eUMINUS: printf("cEXP{eUMINUS):\n");
	          print_exp( p->exp1 );
	          printf("-- end of cEXP(eUMINUS)\n");
	          break;
    case eNUM: printf("cEXP{eNUM): %d\n", p->val);
	       printf("-- end of cEXP(eNUM)\n");
	       break;
    case eFCALL: printf("cEXP{eFCALL): %s\n", p->name);
	         print_exp( p->exp1 );
	         printf("-- end of cEXP(eFCALL)\n");
	         break;
    case eALIST: printf("cEXP{eALIST): %s\n", p->name);
	         print_exp( p->exp1 );
	         print_exp( p->next );
	         printf("-- end of cEXP(eALIST)\n");
	         break;
    default: fprintf(stderr, "******* An error in expressions!\n");
	     break;
    }
  }
}

void print_stm ( cSTM* p ) {
  cEXP *te;
  cSTM *ts;
  if( p ) {
    switch( p->stm_id ) {
    case sFUNC: printf("cSTM(sFUNC): %s\n", p->exp1->name);
		print_exp( p->exp1 );
		print_exp( p->exp2 );
	        print_stm( p->stm1 );
	        printf("** end of cSTM(sFUNC)\n");
	        break;
    case sSLIST: printf("cSTM(sSLIST):\n");
	         print_stm( p->stm1 );
	         print_stm( p->next );
	         printf("** end of cSTM(sSLIST)\n");
	         break;
    case sCSTM: printf("cSTM(sCSTM):\n");
	        print_stm( p->stm1 );
	        print_stm( p->stm2 );
	        printf("** end of cSTM(sCSTM)\n");
	        break;
    case sVDLIST: printf("cSTM(sVDLIST):\n");
	          print_stm( p->stm1 );
	          print_stm( p->next );
	          printf("** end of cSTM(sVDLIST)\n");
	          break;
    case sVDEC: printf("cSTM(sVDEC):\n");
	        print_exp( p->exp1 );
	        print_exp( p->exp2 );
	        printf("** end of cSTM(sVDEC)\n");
	        break;
    case sISTM: printf("cSTM(sISTM):\n");
	        print_exp( p->exp1 );
	        print_stm( p->stm1 );
	        print_stm( p->stm2 );
	        printf("** end of cSTM(sISTM)\n");
	        break;
    case sWSTM: printf("cSTM(sWSTM):\n");
	        print_exp( p->exp1 );
	        print_stm( p->stm1 );
	        printf("** end of cSTM(sWSTM)\n");
	        break;
    case sASTM: printf("cSTM(sASTM):\n");
	        print_exp( p->exp1 );
	        print_exp( p->exp2 );
	        printf("** end of cSTM(sASTM)\n");
	        break;
    case sBR: printf("cSTM(sBR):\n");
	      printf("** end of cSTM(sBR)\n");
	      break;
    case sCONT: printf("cSTM(sCONT):\n");
	        printf("** end of cSTM(sCONT)\n");
	        break;
    case sRET: printf("cSTM(sRET):\n");
	       print_exp( p->exp1 );
	       printf("** end of cSTM(sRET)\n");
	       break;
    case sPRF: printf("cSTM(sPRF):\n");
	       print_exp( p->exp1 );
	       print_exp( p->exp2 );
	       printf("** end of cSTM(sPRF)\n");
	       break;
    default: fprintf(stderr, "******* An error in statements!\n");
	     break;
    }
  }
}


