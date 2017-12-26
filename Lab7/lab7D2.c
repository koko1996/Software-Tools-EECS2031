/***********************************
* CSE2031 - Lab 7
* Filename: lab7D2.c
* Author: NANAH JI, KOKO
* Email: koko.nanahji@gmail.com
* cse_num: 
************************************/

#include <stdio.h>
#include <stdlib.h>

int len();
void insertBegin(int);

struct node { 
   int data;
   struct node * next;
};

struct node * head; 

int main()
{
   head = NULL;

   insertBegin(100);
   insertBegin(200);
   insertBegin(300);
   insertBegin(400);   
   insertBegin(500);

   printf("%d\n", len() );
   int i; 
   struct node * cur;
   for(cur= head; cur != NULL; cur= cur->next)
     printf("%d ", cur->data);
   printf("\n");  
}   

int len(){
  int count = 0;
  struct node * curr;
  curr = head;
  while (curr != NULL){
    count ++;
    curr = curr -> next;
  } 
  return count;

}

void insertBegin(int dat){
   struct node *newNode;
   if((newNode = malloc(sizeof(struct node))==Null)){
	   printf("Heap is full");
	   exit(0);
   }
   
   
   newNode->data = dat;
   newNode->next = head;
   
   head = newNode;

}
