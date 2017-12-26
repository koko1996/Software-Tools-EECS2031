/***************************************
* EECS2031  Lab2 *
* Filename: lab2C0.c*
* Author: NANAH JI, KOKO  *
* Email: koko.nanahji@gmail.com *
* eecs_num:  *
****************************************/

#include <stdio.h>

#define SIZE 20

int main () {

 int a=0;
 while (a < 100){
   printf("hello %d\n", a);
   if (a==8)
     break;
   a++;
 }

  printf("\n");

 int k[SIZE]={0};
 
 int i=0;
 for (i=0; i< SIZE; i++)  
   printf("k[%d]: %d\n", i, k[i]);

    
 printf("\n");

 char msg[]="Hello world";
 printf("memory size: %d (bytes)\n", sizeof(msg));

 for (i=0; i< sizeof(msg); i++)  
   printf("msg[%d]: %d %c \n", i,msg[i],msg[i]);


return 0;
}
