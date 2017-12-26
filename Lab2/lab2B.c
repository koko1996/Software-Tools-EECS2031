/***************************************
* EECS2031  Lab2 *
* Filename: lab2B.c*
* Author: NANAH JI, KOKO  *
* Email: koko.nanahji@gmail.com *
* eecs_num:  *
****************************************/

#include <stdio.h>


/* copy the user input to output */

int main(){

  int c = getchar();

  while( c != EOF)
  {
      if(c>='a' && c<='z'){
      c=c-32;
      }
           putchar(c);
      
    c =  getchar();  /* read again */
  }

  return 0;

}
