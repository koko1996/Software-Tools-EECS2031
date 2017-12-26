/***************************************
* CSE2031 – Lab4*
* Filename: lab4E.c*
* Author: NANAH JI, KOKO *
* Email: koko.nanahji@gmail.com *
* eecs_num: koko96 *
****************************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define ROWS 20
#define COLUMNS 30

int main(int argc, char *argv[])
{
	char input_table[ROWS][COLUMNS];
        char *token;
	char name[10];
	int age; 
	float wage;
	int current_row=0,i=0;
	
	printf("Enter name age and wage: ");
	fgets(input_table[current_row], 30, stdin);   // add a /n
	sscanf(input_table[current_row],"%s %d %f",name,&age,&wage);
	sprintf(input_table[current_row],"%s %d %.2f",name,age,wage);	
	current_row++;
	
	while (strcmp(name,"xxx")!=0)        
	{     
	
	 /* need to 'tokenize' the read in line*/	    

	for(i=0;i<10;i++){
	name[i]=toupper(name[i]);	
	}
	age= age +10 ;
	wage = wage + (wage/2) ;
	sprintf(input_table[current_row],"%s %d %.2f",name,age,wage);

	current_row++;           	
	printf("Enter name age and wage: ");
	fgets(input_table[current_row], 30, stdin);   // add a /n
 	sscanf(input_table[current_row],"%s %d %f",name,&age,&wage);
	sprintf(input_table[current_row],"%s %d %.2f",name,age,wage);	
	current_row++;

	}
       
	/* now display the input_table row by row */

	printf("Records generated in %s on %s %s \n", __FILE__ , __DATE__ , __TIME__);
        for(i=0;i<current_row-1;i++){
	printf("%s \n",input_table[i]);
	}


	return 0;
}

