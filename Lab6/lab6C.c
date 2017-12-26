/***************************************
* CSE2031 –Lab 6 *
* Filename: lab6C.c *
* Author: NANAH JI, KOKO*
* Email: koko.nanahji@gmail.com *
* eecs_num: koko96 *
****************************************/

#include <stdio.h>
#include <string.h>
void printArray (char ** records, int n);
void exchange (char * records[]);

int main(){
  char *temp;
  char * inputs[7] = {"this is input 0, orange is orange", "this is input 1, apple is green",  "this is input 2, cherry is red", 
"this is input 3, banana is yellow"};

  char arr1 [] = "this is input 4, do you like them?";
  char arr2 [] = "this is input 5, yes bye";
  char arr3 [] = "this is input 6, bye";

  inputs[4] = arr1;
  inputs[5] = arr2;
  inputs[6] = arr3;


  // display the array by calling printArr
	printArray(inputs,7);

  // swap pointee of first and second
	temp = *(inputs) ;
	*(inputs)= *(inputs +1) ;
	*(inputs+1)= temp ;

  // call exchange() to swap some other 'rows';
	exchange(inputs);  

	printf("===========================\n");
	
  // display the array again
	printArray(inputs,7);
return 0;
}

void printArray (char ** records, int n){
	int i;
	for(i=0;i<n;i++){
		printf("%s\n",*(records+i));
	}
}

void exchange (char * records[]){
	char *temp;
	temp = *(records + 2) ;
	*(records + 2)= *(records + 3) ;
	*(records + 3)= temp ;
	temp = *(records + 4) ;
	*(records + 4)= *(records + 5) ;
	*(records + 5)= temp ;
}
