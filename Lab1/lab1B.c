/***************************************
* EECS2031  Lab1 *
* Filename: lablB.c *
* Author: NANAH JI, KOKO  *
* Email: koko.nanahji@gmail.com *
* eecs_num:  *
****************************************/

#include <stdio.h>
    


float sum (float i, float j);


int main()
{
   float x =0, y=0;
    printf("Enter two float numbers separated by ##: ");
    scanf("%f##%f",&x,&y);
    
    float su= sum(x,y);
   
    printf( "%f and %f = %f\n", x,y, su);

   return 0;

}

/* function definition */
float sum (float i, float j){
   return i+j;             
}
