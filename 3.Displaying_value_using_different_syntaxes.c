
#include <stdio.h>

void main()
{ 
    printf("RA2211042010042\n");
    int num=10;
    int *p;//declaring pointer variable 
    p=&num;//initialising pointer variable
    printf("num=%d\nnum=%d\nnum=%d\n",num,*(&num),*p);//printing num thrice using different syntaxes
}
