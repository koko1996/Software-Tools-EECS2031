/***************************************
* EECS2031  Lab3 *
* Filename: runningAveGlobal.c*
* Author: NANAH JI, KOKO  *
* Email: koko.nanahji@gmail.com *
* eecs_num:  *
****************************************/
#include <stdio.h>


#define MY_PRINT(x,y,z)  printf("running average is %d / %d = %.3f\n", x,y,z)

   

int main(int argc, char *argv[])
{
	
     extern int input;
     extern int count;
     extern int sum;
     extern double resu;

      printf("enter number (-1 to quit):  ");
      scanf("%d", &input);

      while(input != -1)
      {
        
	 	  runningAverage();

          MY_PRINT(sum, count, resu);

          /* read again */
          printf("enter number (-1 to quit):");  
          scanf("%d", &input);
	
       }  
	
       return 0;
}

