/***************************************
* CSE2031 –Lab 6 *
* Filename: lab6F.c *
* Author: NANAH JI, KOKO*
* Email: koko.nanahji@gmail.com *
* eecs_num: koko96 *
****************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void printArray (char ** , int );
void exchange (char * []);

int main(){
	char * records[30];
	char *p;
	char temp[50];
	int row=0;
	
	printf("Enter string: ");
	fgets(temp, 50, stdin);
	temp[strlen(temp)-1]='\0';
	while(strcmp(temp,"xxx")) {
	if ((records[row]=(char *) malloc(strlen(temp)-1))==NULL){
		printf("No space left in the heap");
		exit(0);
		}
	else{
		strcpy(records[row],temp);
		row++;
		printf("Enter string: ");
		fgets(temp, 50, stdin);
		temp[strlen(temp)-1]='\0';
		}
	}

	p=*(records);
	*(records)=*(records+1);
	*(records+1)=p;
	
	exchange(records);
	printf("===========================\n");
	printArray(records,row);
	
	return 0;
}

void printArray (char **arr , int n ){
	int i;
	for(i=0;i<n;i++){
		printf("%s\n",*(arr+i));
	}
}
	
void exchange (char * records[]){
	char *p;
	p=*(records+2);
	*(records+2)=*(records+3);
	*(records+3)=p;
	
	p=*(records+4);
	*(records+4)=*(records+5);
	*(records+5)=p;
}