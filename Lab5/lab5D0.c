/***************************************
* EECS2031  Lab5 *
* Filename: lab5D0.c*
* Author: NANAH JI, KOKO  *
* Email: koko.nanahji@gmail.com *
* eecs_num:  *
****************************************/

#include<stdio.h>

void processArray(int * c);
void processArray2(int c []);

int main(){
  int arr[] ={2,23,3,5,6,7}; 
  printf("%p %d\n", arr, sizeof(arr)/sizeof(int));

  processArray(arr);
  processArray2(arr);

  return 0;
}
void processArray(int * c){
    printf("%p %d\n", c, sizeof(c)/sizeof(int));// sizeof c returns the size of the pointer int *c and not the array which takes 8 bytes
}

void processArray2(int c []){
    printf("%p %d\n", c,sizeof(c)/sizeof(int));// sizeof c returns the size of the pointer int *c and not the array (8 bytes)
}


