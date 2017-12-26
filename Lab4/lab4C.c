/***************************************
* CSE2031 – Lab4*
* Filename: lab4C.c*
* Author: NANAH JI, KOKO *
* Email: koko.nanahji@gmail.com *
* eecs_num: koko96 *
****************************************/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define SIZE 10
#define SIZE2 40

int main(int argc, char *argv[])
{

        int i=0,ages=0,wageCeil,wageFloor; 
	float wages=0;
        char name[SIZE], wage[SIZE],  age[SIZE];
        char resu[SIZE2], resu2[SIZE2], resu3[SIZE2];
	
        printf("Enter name, age and wage (xxx to quit): ");
        scanf("%s %s %s", name, age, wage);
        while (!(name[0]=='x' && name[1]=='x' && name[2]=='x'))
        {    
	
	for(i=0;i<SIZE;i++){
	name[i]=toupper(name[i]);	

	}
	ages=atoi(age)+10;
 	wages=atof(wage)*2;
	wageCeil=ceil(wages);
	wageFloor=floor(wages); 
	
	sprintf(resu,"%s-%d-%.3f-%d-%d",name,ages,wages,wageCeil,wageFloor);
	strcpy(resu2,resu)	;
	sprintf(resu3,"%s",resu);

	printf("%s  %s  %s\n",resu,resu2,resu3);
   

         /* use scanf to read again */
        printf("Enter name, age and wage (xxx to quit): ");
        scanf("%s %s %s", name, age, wage);	
        } 
        return 0;
}
