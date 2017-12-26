/***************************************
* CSE2031 – Lab4*
* Filename: lab4A.c*
* Author: NANAH JI, KOKO *
* Email: koko.nanahji@gmail.com *
* eecs_num: koko96 *
****************************************/

#include <stdio.h>

int main(){
int age = 10 ,age2 =100;
int* ptr =&age;
age=100;
printf("%d %d \n",age, *ptr);
*ptr = 14;
printf("%d %d \n",age, *ptr);
int *ptr2 =&age2;
*ptr2=*ptr;
printf("%d %d \n",age2, *ptr2);
ptr2=ptr;
*ptr2=*ptr2-1;
printf("%d %d %d \n",age, *ptr, *ptr2);
}
