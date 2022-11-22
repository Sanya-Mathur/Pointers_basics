#include <stdio.h>
int main ()
{printf("RA2211042010042\n");
 int var;
 int *ptr;
 int **pptr;
 var = 3000;

 ptr = &var;

 pptr = &ptr;

 printf("Value of var = %d\n", var );
 printf("Value available at *ptr = %d\n", *ptr );//for var
 printf("Value available at **pptr = %d\n", **pptr);//for *ptr
 return 0;
}
