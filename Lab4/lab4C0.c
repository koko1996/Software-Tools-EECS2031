/***************************************
* CSE2031 – Lab4*
* Filename: lab4C0.c*
* Author: NANAH JI, KOKO *
* Email: koko.nanahji@gmail.com *
* eecs_num: koko96 *
****************************************/


#include <stdio.h>
#define N 3

int countDays(int , int );
int getMonth(char arr[]){
	int i=0;
	while(arr[i]!='-'){
	i++;	
	}
  	
	return (i>1)? ((arr[i-2]- '0')*10 + arr[i-1] -'0'):(arr[i-1]-'0');
}
int getDay(char arr[]){
	int i=0,j=0;
	while(arr[i]!='-'){
		i++;		
	}
	i++;
	while(arr[i]!=' '){
	j++;
	i++;
	}
	return (j>1)? ((arr[i-2]- '0')*10 + arr[i-1] -'0'):(arr[i-1]-'0');
}
int getYear(char arr[]){
	int i=0,answer=0,checker=0,j=0;
	while(checker <3 ){
	if(checker == 2){
				 j++;
		}		

	if(arr[i]=='-' || arr[i]==' ' || arr[i]=='\n' ){
			checker++;
		}
		
	i++;	
	}
	j--;
	i--;	
	if(j==1){
	return (arr[i-1]-'0');
	}
	if(j==2){
	return  (arr[i-2]- '0')*10 + arr[i-1] -'0';
	}
	if(j==3){
	return  (arr[i-3]- '0')*100 + (arr[i-2]- '0')*10 + arr[i-1] -'0';
	}
	if(j==4){
return (arr[i-4]- '0')*1000 +  (arr[i-3]- '0')*100 + (arr[i-2]- '0')*10 + arr[i-1] -'0';
	}
}

int main(){ 
  int day,month,year;
  char input[30];
  int i;
  for(i=0; i<N;i++)
  {
    printf("Enter month day and year separated by dash: " );

    fgets(input, 30, stdin);  /* read in the whole line */
    
    /* manipulate the input, count days and display */ 
   day=getDay(input);
   month=getMonth(input);
   year=getYear(input);
	printf("Approximately %d days of year %d have elapsed \n", countDays(month,day),year );
   
  }
 
  return 0;
 

}

int countDays(int m, int d){
 int answer=0;
 
 if(m>1){
	 answer = answer + 31;
 }

 if(m>2){
	 answer = answer + 28;
 }

 if(m>3){
	 answer = answer + 31;
 }

 if(m>4){
	 answer = answer + 30;
 }

 if(m>5){
	 answer = answer + 31;
 }

 if(m>6){
	 answer = answer + 30;
 }

 if(m>7){
	 answer = answer + 31;
 }

 if(m>8){
	 answer = answer + 31;
 }

 if(m>9){
	 answer = answer + 30;
 }

 if(m>10){
	 answer = answer + 31;
 }

 if(m>11){
	 answer = answer + 30;
 }


 return answer + d;
}
