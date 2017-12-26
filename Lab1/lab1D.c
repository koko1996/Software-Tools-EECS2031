/***************************************
* EECS2031  Lab1 *
* Filename: lab1D.c*
* Author: NANAH JI, KOKO  *
* Email: koko.nanahji@gmail.com *
* eecs_num:  *
****************************************/

#include <stdio.h>

/* copy the user input to output */

int main(){
    int blanks=0,totalBlanks=0;
  int c = getchar();
  
  while( c != EOF)
  {     
      if(c==' '){
      blanks++;
  }
    putchar(c);
    if(c=='\n'){
                          printf("blank count  %d \n \n",blanks);
              totalBlanks+=blanks;
        blanks=0;

    }

    c =  getchar();  /* read again */
 
  }
                  printf("Total blank count  %d \n",totalBlanks);
  
  return 0;

}
