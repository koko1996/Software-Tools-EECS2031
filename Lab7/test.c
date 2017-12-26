#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
		int data;
		struct node *next;
};
void insert(struct node *,int i);
void print(struct node *);
int main(){
	struct node head;
	head.next=NULL;
	
	FILE *f = fopen("data.txt","r");
	int a,b;
	fscanf(f,"%d %d",&a,&b);
	insert(&head,a+b);
	fscanf(f,"%d %d",&a,&b);
	insert(&head,a+b);
	fscanf(f,"%d %d",&a,&b);
	insert(&head,a+b);
	fscanf(f,"%d %d",&a,&b);
	insert(&head,a+b);

	print(&head);

	fclose(f);
  
  
}

void insert(struct node *head ,int i){
		struct node *n =malloc (sizeof(struct node));
		(*n).data=i;
		(*n).next=head->next;
		head->next=n;

	
}
void print(struct node *head){
	struct node *curr =head->next;
	while(curr!=NULL){
		printf("%d\n",curr->data);
		curr =curr->next;
	}
}
