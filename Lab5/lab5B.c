/***************************************
* EECS2031  Lab5 *
* Filename: lab5B.c*
* Author: NANAH JI, KOKO  *
* Email: koko.nanahji@gmail.com *
* eecs_num:  *
****************************************/

#include <stdio.h>
#include <string.h>

int isPalindrome (char *);
void printReverse(char *);
int main( ) {
  char s[30]; 
  /* Input a and b */
  while(fgets(s,30,stdin)!=NULL) {
	s[strlen(s)-1]='\0';
	printReverse(s);
	if(isPalindrome(s)==1){
		 printf("Is a case-insensitive palindrome\n");
	}
	else{
		 printf("Not a case-insensitive palindrome\n");
		}
	printf("\n");    
	}

}
void printReverse(char *a){
	char *b=a;
	int length =strlen(a);
	char *end=a+length-1;
	char t;
	int temp=length/2;
	while(temp>0){
		t = *a;
		*a = *end;
		*end = t;
		end--;
		a++;
		temp--;
		
		}
	printf("%s\n",b);
}

int isPalindrome (char *a){
	int length =strlen(a);
	char *end=a+length-1;
	int temp=length/2;
	while(temp>0){
	if(*end != *a && (*end)+32!= *a && *end != (*a)+32 ){
		 return 0;
	 }
		end--;
		a++;
		temp--;
		
	}
	return 1;
}

