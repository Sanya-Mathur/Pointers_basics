
#include <stdio.h>

int main ()
{ printf("RA2211042010042\n");
 int ar[] = {10, 100, 200};
 int i, *ptr[3];
 for ( i = 0; i < 3; i++)
 {
 ptr[i] = &ar[i]; //assign the address of integer. 
 }
 for ( i = 0; i < 3; i++)
 {
 printf("Value of ar[%d] = %d\n", i, *ptr[i] );
 }
 return 0;
}
