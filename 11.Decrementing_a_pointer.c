
#include <stdio.h>
int main ()
{ printf("RA2211042010042\n");
 int ar[] = {10, 100, 200};
 int i, *ptr;
 ptr =&ar[2];
 for ( i = 3; i>0; i--)
 {
 printf("Address of array[%d] = %x\n", i, ptr );
 printf("Value of array[%d] = %d\n", i, *ptr );
 ptr--;//decrementing a pointer
 }
 return 0;
}
