
#include <stdio.h>
int main ()
{printf("RA2211042010042\n");
 char *names[] = {"Sidhansu","Apurv","Sankalp","Sanya"};

 int i = 0;
 for ( i = 0; i < 4; i++)
 {
 printf("Value of names[%d] = %s\n", i, names[i] );
 }
 return 0;
}
