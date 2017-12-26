/***************************************
* CSE2031 –Lab 6 *
* Filename: lab6B.c *
* Author: NANAH JI, KOKO*
* Email: koko.nanahji@gmail.com *
* eecs_num: koko96 *
****************************************/

#include <stdio.h>
#include <string.h>
void exchange (char[][50]);
void printArray (char[][50], int n);
int main() {
	char records[30][50]; 
	int row=0;
	char temp[50];
	
	printf("Enter string: ");
  	fgets(*(records+row), 50, stdin);
	*(*(records+row)+strlen(*(records+row))-1)='\0';
	while(strcmp(*(records+row),"xxx")) {
	row++;
	printf("Enter string: ");
	fgets(*(records+row), 50, stdin);
	*(*(records+row)+strlen(*(records+row))-1)='\0';
	}
	
    printf("===========================\n");

	strcpy(temp,*(records));
	strcpy(*(records),*(records+1));
	strcpy(*(records+1),temp);
	exchange(records);
	
	printArray(records,row);
return 0;
}
void exchange (char arr[][50]){
	char temp[50];
	strcpy(temp,*(arr+2));
	strcpy(*(arr+2),*(arr+3));
	strcpy(*(arr+3),temp);
	strcpy(temp,*(arr+4));
	strcpy(*(arr+4),*(arr+5));
	strcpy(*(arr+5),temp);
}

void printArray (char arr[][50], int n){
	int i;
	for(i=0;i<n;i++){
		printf("%s\n",arr+i);
	}
}
