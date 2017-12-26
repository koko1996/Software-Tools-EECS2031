/***************************************
* EECS2031  Lab1 *
* Filename: lab1C.c *
* Author: NANAH JI, KOKO  *
* Email: koko.nanahji@gmail.com *
* eecs_num:  *
****************************************/

#include <stdio.h>
    


float sum (float i, float j);


int main()
{    float x =0, y=0;
     int n=0;
    printf("Enter the number of interactions: ");
    scanf("%d",&n);
        while(n>0)
        {
    printf("Enter two float numbers separated by ##: ");
    scanf("%f##%f",&x,&y);
    
    float su= sum(x,y);
   
    printf( "%f + %f = %f\n", x,y, su);
    n--;
    }
   return 0;

}

/* function definition */
float sum (float i, float j){
   return i+j;             
}

