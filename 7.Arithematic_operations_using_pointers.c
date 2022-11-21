
#include <stdio.h>

void main()
{ printf("RA2211042010042\n");
 int x = 3;	 
int y = 5;	 
int *z, *k;	 
z = &x;		 
k = &y;		
int sum = *z + *k;  //adds value of variables
    printf("%d",sum);
    
}
