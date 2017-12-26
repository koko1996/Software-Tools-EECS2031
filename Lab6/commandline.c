/***************************************
* CSE2031 –Lab 6 *
* Filename: commandline.c *
* Author: NANAH JI, KOKO*
* Email: koko.nanahji@gmail.com *
* eecs_num: koko96 *
****************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int getSum(char *[],int );
int getSumP(char **,int);


int main(int argc, char *argv[]){
	int i;	
	printf("%d arguments excluding %c%s%c \n", argc-1,34,argv[0],34);
	for( i=1;i<argc-1;i++){
		printf("%s + ",argv[i]);
	}
	printf("%s =",argv[i]);
	printf(" %d %d \n", getSum(argv,argc) ,getSumP(argv,argc) );
	return 0;
}

int getSum(char *arr[],int n){
	int answer =0;
	int i;
	for(i=1;i<n;i++){
		answer = answer + atoi(*(arr+i));	
	}
	return answer;
}

int getSumP(char **arr,int n){
	int answer =0;
	int i;
	for(i=1;i<n;i++){
		answer = answer + atoi(*(arr+i));	
	}
	return answer;
}
