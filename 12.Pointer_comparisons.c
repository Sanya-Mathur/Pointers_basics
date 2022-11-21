
#include <stdio.h>
const int max = 3;
int main ()
{ printf("RA2211042010042\n");
 int ar[] = {10, 100, 200};
 int i, *ptr;
 ptr = ar;
 i = 0;
 while ( ptr <= &ar[max - 1] )
 {
 printf("Address of var[%d] = %x\n", i, ptr );
 printf("Value of var[%d] = %d\n", i, *ptr );
 //point to the previous location 
 ptr++;
 i++;
 }
 return 0;
}

