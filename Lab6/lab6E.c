/***************************************
* CSE2031 –Lab 6 *
* Filename: lab6E.c *
* Author: NANAH JI, KOKO*
* Email: koko.nanahji@gmail.com *
* eecs_num: koko96 *
****************************************/

#include <stdio.h>
#include <stdlib.h>

void printArray(int*,int);
int main(int argc, char *argv[]){
	int n;
	int i;
	int *arr;
	printf("Enter array size: ");
	scanf("%d",&n);  
	arr = (int*) malloc(4*n);
	if(arr!=NULL){
	arr[0]=100;
	arr[1]=200;
	i=2;
	while(i<n){
		printf("Eelement  [%d]: ",i);
		scanf("%d",arr+i);  
		i++;
		}
	printArray(arr,n);
	}
	else{
	exit(0);
	}
	return 0;
}

void printArray(int *arr,int n){
	int i=0;
	printf("\n");	
	for(;i<n;i++){
	printf("%d ",*(arr+i));
	}

}
