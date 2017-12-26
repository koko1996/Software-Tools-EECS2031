/***************************************
* EECS2031  Lab2 *
* Filename: lab2A.c*
* Author: NANAH JI, KOKO  *
* Email: koko.nanahji@gmail.com *
* eecs_num:  *
****************************************/

#include <stdio.h>

/* copy the user input to output */
#define SIZE 32
int isDigit(char c);


int main(){
    int x;
    char y;

    while(1){
    printf("Enter an integer and a Character seperated by blank." );
	scanf("%d %c", &x,&y);

	if (x == -10000)
	{
	    break;
	}
	else {
        if(isDigit(y)==1){
                printf("Character '%c' represents a digit. Sum of %d and %c is %d" , y, x , y , x + (int) y - 48);
        }
        else 
	   {
               printf("Character '%c' does not represents a digit." , y);
        }
        printf("\n");
	
     }
    }    
     return 0;
}
int isDigit(char c){
            if(c>='0' && c<='9'){
                return 1;
            }
        else {
    return 0;
        }
}

    
    

