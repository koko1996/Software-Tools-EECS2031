/***************************************
* EECS2031  Lab3 *
* Filename: runningAveStaticLocal.c*
* Author: NANAH JI, KOKO  *
* Email: koko.nanahji@gmail.com *
* eecs_num:  *
****************************************/
#include <stdio.h>

#define MY_PRINT(x,y,z)  printf("running average is %d / %d = %.3f\n", x,y,z)

   
double runningAverage(int input);


int main(int argc, char *argv[])
{
	
      int input; int count=0; int sum=0;
      double resu;

      printf("enter number (-1 to quit):  ");
      scanf("%d", &input);

      while(input != -1)
      {
        
	  count++;
	  sum+=input;
          resu = runningAverage(input);
          MY_PRINT(sum, count, resu);
 	     
          /* read again */
          printf("enter number (-1 to quit):");  
          scanf("%d", &input);
	
       }  
	
       return 0;
}

double runningAverage(int input)
{  static double sum = 0;
   static int count = 0;
   sum+=input;
   count++;
   
	
  return (sum/count);
    
}
