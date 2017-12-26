/***********************************
* CSE2031 - Lab 7
* Filename: lab7C.c
* Author: NANAH JI, KOKO
* Email: koko.nanahji@gmail.com
* cse_num: 
************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct people{
char name[30];	
int age;
float wage;
};


int main(int argc, char *argv[])
{ int count=0; 
  struct people arr[30];
  char temp[50];
  
  FILE * file;
  file = fopen("data0.txt", "a+");
   
  // read line by line, set struct elements of arr
  while (fgets(temp,50,file)!= NULL) {
  if(temp[strlen(temp)-1]=='\n'){
  temp[strlen(temp)-1]='\0';
  }
  sscanf(temp,"%s %d %f",(arr[count].name) , &(arr[count].age), &(arr[count].wage));
  count++;
  }



  // print the array of structures 
  int i;
  for (i=0; i< count ;i++){
     printf("%s %d %.1f\n", arr[i].name , arr[i].age, arr[i].wage );

  }
  // now read the array of structures, reformat  and append to the same file
  fprintf(file,"\n----------\n");
  for (i=0; i< count ;i++){
    arr[i].age += 10;
	arr[i].wage = arr[i].wage * 1.5;
	fprintf(file,"%s %d--%.3f\n",arr[i].name , arr[i].age, arr[i].wage);

  }
  
	fclose(file);

return 0;
}
