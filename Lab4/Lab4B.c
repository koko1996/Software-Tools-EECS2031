/***************************************
* CSE2031 – Lab4*
* Filename: lab4B.c*
* Author: NANAH JI, KOKO *
* Email: koko.nanahji@gmail.com *
* eecs_num: koko96 *
****************************************/

#include <stdio.h>
#include <string.h>   /* for strcpy() */
#include <math.h>     /* for pow() */

 
int my_atoi (char c[]);  /* function declaration */
   
int main(){
  int a;
  char arr  [10];
  char argu [10];

  printf("Enter a postive number or 'quit': " );
  scanf("%s", arr);
  while(!(arr[0]=='q' && arr[1]=='u' && arr[2]=='i' && arr[3]=='t' && arr[4]=='\0')   )
  {
    strcpy(argu, arr);

    a = my_atoi(argu);
    printf("%d (%#o, %#X)\t%d\t%.0f\n", a, a, a, a*2, pow(a,2));
  
    /* read again */
    printf("Enter a postive number or 'quit': " );
    scanf("%s", arr);
  }

  return 0;

}

/* convert an array of digit characters into a decimal int */

/* textbook did scan from left to right.
 Here you should scan from right to left. This is a little complicated but more straightforward */

int my_atoi (char c[])
{int i =0, answer =0 , index =1 ;
 while(c[i]!='\0'){
	 i++;
 }
 i--;
 while(i>=0){
	 answer = answer + ((c[i]-'0')*index);
	 index  = index * 10;
	 i--;
 }
 return answer;
 

}
