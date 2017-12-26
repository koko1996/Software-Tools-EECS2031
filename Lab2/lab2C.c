/***************************************
* EECS2031  Lab2 *
* Filename: lab2c.c*
* Author: NANAH JI, KOKO  *
* Email: koko.nanahji@gmail.com *
* eecs_num:  *
****************************************/


#include <stdio.h>

#define MAX_SIZE 20

/* function declarations/prototypes */
int length(char[]);
int indexOf(char[], char);
int isQuit (char[]);

main() {

   char helloArr []  = "Hello";
   printf("\"%s\" contains %d characters, but the size of it is %d (bytes)\n", helloArr, length(helloArr),sizeof(helloArr));
   
   char word [MAX_SIZE];
   char c;
     
   printf("Enter a word and a character separated by blank>");
   scanf("%s %c",word, &c);   /* &word is wrong;  c is wrong */

    while(isQuit(word)==0){
    printf("Input word is \"%s\". Contains %d characters. Index of '%c' in it is %d \n", word,length(word),c,indexOf(word,c));

   printf("Enter a word and a character separated by blank>");
   scanf("%s %c",word, &c);   /* &word is wrong;  c is wrong */
    }
    
}

int length(char word[]){
    int i=0;
    while(word[i]!='\0'){
        i++;
    }
    return i;
}
int indexOf(char word[], char c){
    int i=0,answer=-1;
        while(word[i]!='\0'){
        if(word[i]==c){
            answer=i;
            break;
        }
            i++;
    }
    return answer;
}

int isQuit (char word[]){
    if(word[0]=='q' && word[1]=='u' && word[2]=='i' && word[3]=='t' && word[4]=='\0' ){
        return 1;
    }
    return 0;
}

   
