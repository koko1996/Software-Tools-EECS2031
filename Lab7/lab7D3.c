/***********************************
* CSE2031 - Lab 7
* Filename: lab7D3.c
* Author: NANAH JI, KOKO
* Email: koko.nanahji@gmail.com
* cse_num: 
************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 50   /*  max length of each line  */
#define MAX_LEN 30      /* max number of line  */

struct integers
{ 
   int int1;
   int int2;
};

struct node {  // list 'node' struct
   int data;
   struct node *next;
};


void init( );
void display();
int len();
void insert(int d);
void insertAfter(int d, int index);
void delete (int d);
int search(int key);


struct node * head;   // global variable, the head of the linkedlist

main()
{	char temp[50];
   
   struct integers arr[MAX_LEN]; // an array of ten structs
   int count =0;
   /* open file data.txt, read data
   store the two integers of each line into an element of the structure array, as its two members.*/
   FILE *fp = fopen("data.txt","r");
	while (fgets(temp,50,fp)!= NULL) {
	if(temp[strlen(temp)-1]=='\n'){
	temp[strlen(temp)-1]='\0';
  	}
	  sscanf(temp,"%d %d", &(arr[count].int1), &(arr[count].int2));
	  count++;
  }
    /* print the array of structs */ 
	int i;
	for(i=0;i<count;i++){
		fprintf(stdout,"%d %d\n", arr[i].int1, arr[i].int2);
	}
  
    /* now building up the list by reading from the array of structures  */
    init();

    
    for(i=0;i<count;i++){
	 //read two ints from arr[i], sum up to variable value and insert into list
	int value =arr[i].int1 + arr[i].int2;
     printf("insert %d: (%d)", value, len()); 
	 insert(value);
	 display();  
	  
   }
   
//   printf("\n");
   
   /* now remove 0,1,2,3,5,6,7,8,9   */
   int removeList [] = {0,1,2,3,4,5,6,7,8,9, -10000}; // -10000 is the terminating token
	i=0;
   
	while (removeList[i]!= -10000 ){
		if(search(removeList[i])){  
	printf("remove %d: (%d)", removeList[i], len()); 
	delete(removeList[i]);
	display();  
		}
    i++;
   }
   
   
   /* now insert 7,3,5,6,8,9,2,0,1 (again)   */
   int addList [] = {7,3,5,6,8,9, 2,0,1, -10000};  // -10000 is the terminating token
	i=0;
    while (addList[i]!= -10000 ){
    printf("insert %d: (%d)", addList[i], len()); 
	insert(addList[i]);
	display();  
    i++;
   }
   

   /* now insert after */      
   printf("\n");
   int key =-4; 
   int index = 2;
   printf("insert %d after index %d: (%d)", key,index,len()); insertAfter(key,index); display();   
   key =-6; index = 0;
   printf("insert %d after index %d: (%d)", key,index,len()); insertAfter(key,index); display(); 
   key =-8; index = 6;
   printf("insert %d after index %d: (%d)", key,index,len()); insertAfter(key,index); display(); 
   
   /* now do search*/
   printf("\n");
   int searchList [] = {5,50,9,19,0,-4, -10000}; // -10000 is the terminating token
   i=0;
   while ( searchList[i] != -10000){
	printf("search %3d ....  ", searchList[i] );
    if(search( searchList[i]) == 0) {
    printf("not found\n");	
	}
	else {
    printf("found\n");	
	}
	i++;
   }
   
}

/* Initialize the list. */
void init( )
{
   head = NULL;
}

/* Print the content of the list (ignoring the dummy node). */
void display()
{
    struct node *current = head;
    while (current != NULL){
        printf( "%4d", current->data );
        current = current -> next;
    }
    printf( "\n" );
}
 
/* search a node with data key in the list. return 1 if found, and 0 otherwise  */
int search (int key)
{ struct node *cur=head;

  while(cur!=NULL && cur->data!=key ){
	 cur=cur->next;	
	}
  if(cur==NULL){
	return 0;	
	}
  else{
	 return 1;
  }

 
}



/* return the length of the linked list */
int len()
{ struct node *cur =head;
  int length=0;
  while(cur!=NULL){
  length++;
  cur=cur->next;
  }
   return length;
}


/* insert a new data element with key d into the end of the list. */
/* Hint: You need to consider the special case that the list is empty, and the general case that the list is not empty */
void insert(int d)  //  at the end
{  struct node *new = malloc (sizeof(struct node));
   new->data=d;
   if (head == NULL){/* the list is empty */
        head=new;
		new->next=NULL;
    }
    else{  // general case, insert at the end.
		new->next=head;
		head=new;
	}
}
 
/* insert in the middle  */
/* assume the list is NOT empty */
void insertAfter(int d, int index)  
{  struct node *temp=head;
   struct node *new= malloc (sizeof(struct node));
	new->data = d;   
	int count=0;
   while(count < index ){
	temp = temp->next; 
	count++; 
	}
    new->next=temp->next;
	temp->next=new;
		
}


/* Remove the node with value d from the list */
/* assume no duplicated keys in the list */
/* list might be empty, then print to stderr and exit */
/* if list is not empty, then key is in the list */
/* Hint: You need to consider the special case where the node to be deleted is the first node of the list, 
and the general case that the node to be deleted is not the first node*/
 
void delete(int d)
{
   if (len() == 0){

       fprintf(stderr, "empty");  /* send to stderr, using fprintf(stderr, ...)  */
       return;
   }
	
	struct node *temp=head;
   /* special case: to be removed is the first  */
	
   if (head -> data == d)
   { head = head->next;
 	 free(temp);
    }
    else{  // general case, assume d is in the list
 	while(temp->next!=NULL && temp->next->data!=d){
	 temp=temp->next;
    }
	struct node *fre=temp->next;
   	temp->next =temp->next->next;
	free(fre);	  
   }

}
