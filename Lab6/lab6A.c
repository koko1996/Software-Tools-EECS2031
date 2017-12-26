/***************************************
* CSE2031 –Lab 6 *
* Filename: lab6A.c *
* Author: NANAH JI, KOKO*
* Email: koko.nanahji@gmail.com *
* eecs_num: koko96 *
****************************************/
#include <stdio.h>
#include <string.h>

int main(){

 /*************** review pointer basics **************/ 
 int *p, in=10; p = &in;
 printf("%d\n", *p );

 char arr[]="hello";
 char *ptr = arr;

 // different ways to pass the array, at "pointer" level.
 printf("%s %s %s\n", arr, &arr[0], ptr);
 
 //different ways to access arr[0]
 printf("%c %c %c %c\n", arr[0], *ptr, *arr, ptr[0]);
 
 //different ways to access arr[1]
 printf("%c %c %c %c\n", arr[1], *(ptr+1), *(arr+1), ptr[1] ); 

 //different ways to access arr[4]
 printf("%c %c %c %c\n", arr[4], *(ptr+4), *(arr+4), ptr[4] ); 
 
 printf("\n");
 /****simple array of int pointers **********************************/
 
 int i=1; int j=3;  int k; int n;
 int * x[3];  // array of 3 int pointers
 x[0]= &i;
 x[1]= &j;
 x[2]= &k;
 
 // set k to 5 via its pointer  
 *x[2]=5;
 n=0;
 for (; n<3; n++){
  printf("%d %d\n",*x[n],**(x+n)); // print elements of array x ; should print 1, 3, 5   
}
printf("\n");
 /***** array of char pointers, each pointer points to an char array *********************************/
 char * planets[] = {"Mercury", "Venus", "Earth",
	                     "Mars", "Jupiter", "Saturn",
	                     "Uranus", "Neptune", "Pluto"};
 
 // print the pointee of the 1st element pointer (i.e., string "Mercury") in the pointer array, using both array index notation i.e., planets[i] and pointer notation, 
 printf("%s %s \n",planets[0] , *planets);
 // print the pointee of the 2nd element pointer (i.e., string "Venus"), using both array index notation and pointer notation, 
 printf("%s %s \n",planets[1] , *(planets+1));
 // print the pointee of the 5th element pointer (i.e., string "Jupiter"), using both array index notation and pointer notation, 
 printf("%s %s \n",planets[4] , *(planets+4));
 // print the pointee of the 6th element pointer (i.e., string "Saturn"), using both array index notation and pointer notation, 
 printf("%s %s \n",planets[5] , *(planets+5));
 // print the pointee of the 8th element pointer (i.e., string "Neptune"), using both array index notation and pointer notation, 
 printf("%s %s \n",planets[7] , *(planets+7));


 // declare a pointer pp (what type??) to point to the first element of planets;
char **pp=planets;


 // print the pointee of the 1st element pointer (i.e., string "Mercury") in the pointer array, via pp and using pointer notation, 
 printf("%s\n",*pp );
 // print the pointee of the 2nd element pointer (i.e., string "Venus"), via pp and using pointer notation, 
 printf("%s\n",*(pp+1));
 // print the pointee of the 5th element pointer (i.e., string "Jupiter"), via pp and using pointer notation, 
 printf("%s\n",*(pp+4));
 // print the pointee of the 6th element pointer (i.e., string "Saturn"), via pp and using pointer notation, 
 printf("%s\n",*(pp+5));
  // print the pointee of the 8th element pointer (i.e., string "Neptune"), via pp and using pointer notation, 
printf("%s\n",*(pp+7));
   /* access the characters in the pointee strings.    */
  printf("\n");
  printf("\n%c  %c  %c  %c\n",  *( *(planets+4) +3 ),  planets[4][3], *( *(pp+4) +3 ),  pp[4][3]  );
  printf("%c  %c  %c  %c\n",  **planets,  planets[0][0], **pp,  pp[0][0]  ); // *( *(planets+0) +0 ),
return 0;
  }



