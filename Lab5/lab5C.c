/***************************************
* EECS2031  Lab5 *
* Filename: lab5C.c*
* Author: NANAH JI, KOKO  *
* Email: koko.nanahji@gmail.com *
* eecs_num:  *
****************************************/

#include <stdio.h>
#include <string.h>
void sortArray(char *);

   int main( ) {
  	char s[30]; 

  /* Input a and b */

  while(fgets(s,30,stdin)!=NULL) {
		s[strlen(s)-1]='\0';
		sortArray(s);
		printf("%s\n",s);
		printf("\n");    
		}

}
   void sortArray(char *a){
	int length = strlen(a);
	int i,u;
	char temp;
	for(i=0;i<length;i++){
		for(u=i+1;u<length;u++){
			if(*(a+i)>*(a+u)){
				temp=*(a+i);
				*(a+i)=*(a+u);
				*(a+u)=temp;
				
			}
		}
	}
}
