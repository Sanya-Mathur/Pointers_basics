
#include <stdio.h>

void main()
{ 
    printf("RA2211042010042\n");
    int num=10;
    void *p;//declaring pointer variable 
    p=&num;//initialising pointer variable 
    *(int*)p=12;
  

    printf("%d\n",num);//printing cell address of variable 
    /* void pointer holds the address of any datatype such as int , float, char and by assigning the address we can type cast it. The *p points the value stored at the address held by p . the next value assigned to the pointer is 12 and the same is displayed.*/
    
}
