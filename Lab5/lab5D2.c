/***************************************
* EECS2031  Lab5 *
* Filename: lab5D2.c*
* Author: NANAH JI, KOKO  *
* Email: koko.nanahji@gmail.com *
* eecs_num:  *
****************************************/
#include <stdio.h>
int largest(int *,int);
void display(int *,int);

  
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
	printf("inputs: ");
	display(arr,counter);
	printf("Largest value: %d\n",largest(arr,counter));
	printf("\n");    
	
}
void display(int *a,int length){
	int *p=a;
	while(a<(p+length)){
		printf("%d ",*a);
		a++;
	}
		printf("\n");
}
int largest(int *a,int length){
	int max=0;
	int *p=a;
	while(a<(p+length)){
		if(max<*a){
			max=*a;
		}
		a++;
	}
	return max;
}
