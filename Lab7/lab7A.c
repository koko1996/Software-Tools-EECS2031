/***********************************
* CSE2031 - Lab 7
* Filename: lab7A.c
* Author: NANAH JI, KOKO
* Email: koko.nanahji@gmail.com
* cse_num: 
************************************/

#include <stdio.h>
#include <stdlib.h>

struct ints
{ 
   int int1;
   int int2;
};

struct intPtr { 
   int data;
   int * pp;
};


struct intArr { 
   int data;
   int arr[3];
};


void processStruct  (struct ints *);

int main()
{
  printf("----------- simple struct --------------\n");
  struct ints a = {32,4};
  a.int1 = 100;

  struct ints b = a;
  
  // print the two members of a; 
  printf("a: %d %d\n",  a.int1, a.int2);
  //print the two members of b; 
  printf("b: %d %d\n", b.int1, b.int2);
  
  printf("b.int2: ");
  //use scang to set b.int2
  scanf("%d",&(b.int2));
  // print the two members of a again; 
  printf("a: %d %d\n",  a.int1, a.int2);
  // print the two members of b again;
  printf("b: %d %d\n", b.int1, b.int2);

  
  printf("------- struct with pointer member -----------------\n");

  struct intPtr xx; 
  xx.data = 5;
  int c = 100;   xx.pp = &c;
  
  struct intPtr yy = xx;
  // print xx's data, pointer value, and pointee value 
  printf("xx: %d %p %d\n", xx.data, xx.pp, *(xx.pp));
  //print yy's data, pointer value, and pointee value    
  printf("yy: %d %p %d\n", yy.data, yy.pp, *(yy.pp));
  
  // set the pointee of yy's pointer to be 10000;  
  *(yy.pp)=10000;
  //print xx's data, pointer value, and pointee value   
  printf("xx: %d %p %d\n", xx.data, xx.pp, *(xx.pp));
  //print yy's data, pointer value, and pointee value  
  printf("yy: %d %p %d\n", yy.data, yy.pp, *(yy.pp));
  
  printf("------- struct with array member ------------------\n");

  struct intArr tt = {2, {100,200}};
  
  // set tt's arr member's 2nd element to be 400;  
  tt.arr[1]=400;
  //print tt's data element, as well as array elements  
  printf("%d [%d %d] \n", tt.data, tt.arr[0], tt.arr[1]);
  
  printf("-------- struct and function -----------------\n");
  
  //print a's memebers
  printf("struct a before process:: %d %d\n",  a.int1, a.int2);
  processStruct(&a);
  //print a's memebers again
  printf("struct a after process:: %d %d\n",  a.int1, a.int2);


  /****array of structures ******************************  */
  printf("--------- array of structs----------------\n");
  struct ints arr[3] = {{1,2}, {3,4}};
  // set the 3rd element structures's int1 and int2 to be 5 and 6
  arr[2].int1=5;
  arr[2].int2=6;
  int i;
  for (i=0; i<3 ;i++ )
  {
    // print each element structures  
  printf("arr[%d]: %d %d\n", i, arr[i].int1, arr[i].int2);
  } 
	return 0;
}   

/*  this function tends to modify the member values of the argument structure, which is of type struc ints  */
void processStruct(struct ints *x){

  x->int1 ++;
  x->int2 +=100;
}

 
