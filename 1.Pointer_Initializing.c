
#include <stdio.h>

void main()
{ 
    printf("RA2211042010042\n");
    int num=10;
    int *p;//declaring pointer variable 
    p=&num;//initialising pointer variable 
    printf("%d\n",*p);//printing value of variable 
    printf("%d\n",num);//printing value of variable 
    printf("%u\n",&num);//printing cell address of variable 
    printf("%u\n",p);//printing cell address of variable 
    
    
}
