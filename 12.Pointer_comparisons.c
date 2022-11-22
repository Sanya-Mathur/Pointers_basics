
#include <stdio.h>
int main ()
{ printf("RA2211042010042\n");
 int ar[] = {10, 100, 200};
 int i, *ptr;
 ptr = ar;
 i = 0;
 while ( ptr <= &ar[2] )
 {
 printf("Address of array[%d] = %x\n", i, ptr );
 printf("Value of array[%d] = %d\n", i, *ptr );
 //point to the previous location 
 ptr++;
 i++;
 }
 return 0;
}

