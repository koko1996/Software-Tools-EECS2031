/***************************************
* CSE2031 – Lab4*
* Filename: lab4D.c*
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
{	int i,row=0;
	char inputs_table [ROWS][COLUMNS];
        char name[10];
	int age; 
	float wage;
   
		
	printf("Enter name age and wage: ");
	scanf("%s %d %f", name, &age, &wage); 
       
	while (strcmp(name,"xxx")!=0)        
	{  
	sprintf(inputs_table[row++],"%s %d %.2f",name,age,wage);
 	for(i=0;i<10;i++){
	name[i]=toupper(name[i]);	

	}
	age= age +10 ;
	wage = wage + (wage/2) ;
	sprintf(inputs_table[row++],"%s %d %.2f",name,age,wage);
          
	printf("Enter name age and wage: ");
	scanf("%s %d %f", name, &age, &wage); 
           
	}
	printf("Records generated in %s on %s %s \n", __FILE__ , __DATE__ , __TIME__);
        for(i=0;i<row;i++){
	printf("%s \n",inputs_table[i]);
	}


	return 0;
}

