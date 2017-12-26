/***************************************
* EECS2031  Lab5 *
* Filename: lab5A.c*
* Author: NANAH JI, KOKO  *
* Email: koko.nanahji@gmail.com *
* eecs_num:  *
****************************************/


#include <stdio.h>
void reorder(int *x, int *y, int *z);
void swap(int *px, int *py);

int main( ) {
  int a, b,c; 

  /* Input a and b */
  scanf("%d %d %d", &a, &b,&c);
  while(a!=-1) {
     printf("Original inputs:   a:%d\tb:%d\tc:%d\n", a, b,c);     
     reorder(&a, &b,&c);  
     printf("Rearranged inputs: a:%d\tb:%d\tc:%d\n\n", a, b,c);  
	 scanf("%d %d %d", &a, &b,&c);
   }

}

void reorder(int *x, int *y, int *z){
	int i,u;
	int *arr[]={x,y,z};
	for(i=0;i<3;i++){
		for(u=i+1;u<3;u++){
			if(*arr[i]>*arr[u]){
				swap(arr[i],arr[u]);
			}
		}
	}
}


void swap(int *px, int *py)
{	int temp =*px;
	*px = *py;
	*py=temp;
}

