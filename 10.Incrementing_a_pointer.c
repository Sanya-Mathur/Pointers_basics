
#include <stdio.h>
int main ()
{ printf("RA2211042010042\n");
 int ar[] = {10, 100, 200};
 int i, *ptr;
 ptr = ar;
 for ( i = 0; i < 3; i++)
 {
 printf("Address of array[%d] = %x\n", i, ptr );
 printf("Value of array[%d] = %d\n", i, *ptr );
 ptr++;//incrementing a pointer
 }
 return 0;
}
