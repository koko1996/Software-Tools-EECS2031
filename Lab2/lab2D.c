/***************************************
* EECS2031  Lab2 *
* Filename: lab2D.c*
* Author: NANAH JI, KOKO  *
* Email: koko.nanahji@gmail.com *
* eecs_num:  *
****************************************/

#include <stdio.h>

/* copy the user input to output */

int main(){
  int array[10]={0};
  int c = getchar();
  int i=0;
  while( c != EOF)
  {
    if(c>='0' && c<='9'){
    array[c-(int)'0']++;
    }
    c =  getchar();  /* read again */
  }
     for (i=0; i< 10; i++)  
   printf("[%d]: %d\n", i, array[i]);

  return 0;

}
