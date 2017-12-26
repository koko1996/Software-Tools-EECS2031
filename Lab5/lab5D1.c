/***************************************
* EECS2031  Lab5 *
* Filename: lab5D1.c*
* Author: NANAH JI, KOKO  *
* Email: koko.nanahji@gmail.com *
* eecs_num:  *
****************************************/
#include <stdio.h>
int largest(int *);
void display(int *);

  
int main()
{
  int arr[30]={0};
  int counter=0;
  int x;
  scanf("%d",&x);
  while(x!=-1){
	  arr[counter]=x;
	  counter++;
	  scanf("%d",&x);  
  }
	arr[counter]=x;
	counter++;
	printf("inputs: ");
	display(arr);
	printf("Largest value: %d\n",largest(arr));
	printf("\n");    
	
}
void display(int *a){
	while(*a!=-1){
		printf("%d ",*a);
		a++;
	}
		printf("\n");
}
int largest(int *a){
	int max=0;
	while(*a!=-1){
		if(max<*a){
			max=*a;
		}
		a++;
	}
	return max;
}
