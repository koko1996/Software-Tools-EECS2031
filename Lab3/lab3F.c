/***************************************
* EECS2031  Lab3 *
* Filename: lab3Fc.c*
* Author: NANAH JI, KOKO  *
* Email: koko.nanahji@gmail.com *
* eecs_num:  *
****************************************/

#include <stdio.h>



 float fun_IF (int, char, float);
 float fun_II (int, char, int);
 float fun_FF (float, char, float);

int main(int argc, char *argv[])
{
	
      int integer;
      char character;
      float floating;


      printf("Enter operand_1 operator operand_2 separated by blanks");
      scanf("%d %c %f", &integer , &character , &floating  );

      while(integer != -1 || floating != -1)
      {
        


 	printf("Your input '%d %c %f' result in %f (fun_IF) and %f (fun_II) and %f (fun_FF)",integer , character , floating, fun_IF(integer,character,floating) ,fun_II(integer,character,floating) , fun_FF(integer,character,floating) );

      printf("Enter operand_1 operator operand_2 separated by blanks");
      scanf("%d %c %f", &integer , &character , &floating  );
     
       }  
	
       return 0;
}
 float fun_IF (int x, char y, float z){
	if(y=='+'){
	return (x+z);
	}
	if(y=='-'){
	return (x-z);
	}
	if(y=='/'){
	return (x/z);
	}
	if(y=='*'){
	return (x*z);
	}

 else return 0;
}

 float fun_II (int x, char y, int z){
	if(y=='+'){
	return (x+z);
	}
	if(y=='-'){
	return (x-z);
	}
	if(y=='/'){
	return (x/z);
	}
	if(y=='*'){
	return (x*z);
	}

 else return 0;
}

 float fun_FF (float x, char y , float z){
	if(y=='+'){
	return (x+z);
	}
	if(y=='-'){
	return (x-z);
	}
	if(y=='/'){
	return (x/z);
	}
	if(y=='*'){
	return (x*z);
	}

 else return 0;
}

