#include <stdio.h>

int strlen1(char a[]);
int strlen2(char a[]);
int strlen3(char *a);
int strlen4(char *a);
int strlen5(char *a);
int strlen6(char *a);
int strlen1B(char a[]);
int strlen3B(char *a);

int strlenRec(char a[]);
int strlenRec2(char *a);

  
int main()
{
  char arr[] = "Hello the world!";

  int i1 = strlen1(arr);  
  int i2=  strlen2(arr);
  int i3 = strlen3(arr);
  int i4=  strlen4(arr);
  int i5=  strlen5(arr);
  int i6=  strlen6(arr);

  int i1b = strlen1B(arr);
  int i3b = strlen3B(arr);
  
  int ir1=  strlenRec(arr);
  int ir2=  strlenRec2(arr);

  int i0 = sizeof(arr)/sizeof(char) - 1;

  printf( "%d %d %d %d %d %d %d %d %d %d    %d\n", i1, i2 ,i3,i4,i5,i6, i1b, i3b, ir1,ir2, i0);

  char * ptr = arr; // = &arr[0];
  i1 = strlen1(ptr);
  i2=  strlen2(ptr);
  i3 = strlen3(ptr);
  i4=  strlen4(ptr);
  i5=  strlen5(ptr);
  i6=  strlen6(ptr);

  i1b = strlen1B(ptr);
  i3b = strlen3B(ptr);

  ir1=  strlenRec(ptr);
  ir2=  strlenRec2(ptr);
  i0 = sizeof(ptr)/sizeof(char) - 1;

  printf( "%c %d %d %d %d %d %d %d %d %d    %d\n", *(ptr+15), i2 ,i3,i4,i5,i6, i1b, i3b, ir1,ir2, i0);
  
  ptr +=3;
  i1 = strlen1(ptr);
  i2=  strlen2(ptr);
  i3 = strlen3(ptr);
  i4=  strlen4(ptr);
  i5=  strlen5(ptr);
  i6=  strlen6(ptr);

  i1b = strlen1B(ptr);
  i3b = strlen3B(ptr);

  ir1=  strlenRec(ptr);
  ir2=  strlenRec2(ptr);
  i0 = sizeof(ptr)/sizeof(char) - 1;

  printf( "%d %d %d %d %d %d %d %d %d %d    %d\n", i1, i2 ,i3,i4,i5,i6, i1b, i3b, ir1,ir2, i0);

  return 0;
} // end of main


/*  array index [] notations */
int strlen1(char a[]){
 int i=0;
 while (a[i] != '\0')
 {
    i++;
 } 
 return i;
}


/* another [] version */
int strlen2(char a[]){
  int i;
  for(i=0; a[i]!= '\0'; i++)
    ;
  return i;
 
}



/* 5 pointer notations  */
int strlen3(char *a){
 int i=0;
 while (*(a+i) != '\0')
 {
    i++;
 } 
 return i;
}



int strlen4(char *a){
 int i=0;
 while (*a != '\0')
 {
    i++; a++;
 } 

 return i;
}


int strlen5(char *a){
    char *p = a;
    while ( *p != '\0')
      p++;
   return p - a; // how far are they apart?
}



int strlen6(char *a){
    char *p = a;
    while ( *a != '\0')
      a++;
   return a - p; // how far are they apart?
}


/* array argument, pointer notation in body */
int strlen1B(char a[]){

 int i=0;
 while (*(a+i) != '\0')
 {
    i++;
 }
 return i;
}



/* pointer argument, [] notation in body */
int strlen3B(char *a){

 int i=0;
 while ( a[i] != '\0')
 {
    i++;
 }
 return i;
}





/* 2 recursion versions */
int strlenRec(char a[]){

 if (a[0] == '\0')
   return 0;
 else
   return 1 + strlenRec(&a[1]);
}

int strlenRec2(char *a){

 if (*a == '\0')
   return 0;
 else
   return 1 + strlenRec2(a+1);
}
