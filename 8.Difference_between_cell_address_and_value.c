
#include <stdio.h>
void main() 
{ printf("RA2211042010042\n");
 	int *ptr, a = 10;
	ptr = &a;
	*ptr = *ptr + 1;
	printf("%d\n", *ptr);//prints value stored in reference cell
	printf("%d\n", ptr);//prints address of reference cell
}
