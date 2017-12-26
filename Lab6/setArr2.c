/***************************************
* CSE2031 –Lab 6 *
* Filename: setArr2.c *
* Author: NANAH JI, KOKO*
* Email: koko.nanahji@gmail.com *
* eecs_num: koko96 *
****************************************/

#include <stdio.h>

void setArr (int);

int * arr[10]; // array of 10 int pointers

int main(int argc, char *argv[])
{

    int i;
       
    setArr(0);
    setArr(1);
    setArr(2);
    setArr(3);
    setArr(4);
       
        
    for(i=0; i<5;i++) 
      printf("arr [%d] = %d\n", i, *arr[i]);   /* should be 0,2,4,6,8 */
    
    return 0;
}

/* set arr[index], which is a pointer, to point to an integer of value 2*index */
void setArr (int index){
      
    int i = 2 * index;
    arr[index] = &i;
}



/* Does not work correctly, because ....
i in the setArr is a local variable which was created in the stack and existed only
during the scope of the function but 
*arr[index] points to the address of i not i's value and the value (possibly )is changed 
after function returned 
so we get a value but it's not the value that was initiated by int i = 2 * index;
*/ 
