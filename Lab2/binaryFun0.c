#include<stdio.h>

#define SIZE 32



int main(){
    int n;

    while(1){
	scanf("%d", &n);

	if (n == -10000)
	{
	    break;
	}
	
        printf("Decimal: %d \t Oct: %#o \t Hex: %#X", n, n, n);   /* # is used to add 0 and 0X  */
	
	
        printf("\n");
	
     }
     return 0;
}

