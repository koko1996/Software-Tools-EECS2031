/***************************************
* EECS2031  Lab3 *
* Filename: lab3C0.c*
* Author: NANAH JI, KOKO  *
* Email: koko.nanahji@gmail.com *
* eecs_num:  *
****************************************/
#include <stdio.h>

#define SIZE 10
#define CUBE(x)  (x) * (x) * (x)

void aFun(void);

int main(int argc, char *argv[])
{
    printf("Hello, world %d\n", SIZE);

    int i=4; 
    int j = 3;

    int ii= CUBE(i);
    printf("%d %d\n", i, ii);
        
    int jj = CUBE(j);
    printf("%d %d\n", j,jj);

    int iijj = CUBE(i + j);
    printf("%d %d\n", i+j, iijj);

    int k;
    for(k=0; k<SIZE; k++)
       aFun();

    return 0;
}

 void aFun(void){
    static counter=100;
    
    printf("aFun called, counter is %d\n", counter);
    
    counter +=10;

 }
