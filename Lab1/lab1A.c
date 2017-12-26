/***************************************
* EECS2031  Lab1 *
* Filename: lab1A.c*
* Author: NANAH JI, KOKO  *
* Email: koko.nanahji@gmail.com *
* eecs_num:  *
****************************************/

#include <stdio.h>

int main()
{   int x,y,z;
	printf("Enter month, day and year separated by blank: ");
    scanf("%d %d %d", &x,&y,&z);
	printf("The input '%d %d %d' is reformated as %d/%d/%d and %d/%d/%d \n"  , y,x,z,z,y,x,z,y,x); 	
    return 0;
}
