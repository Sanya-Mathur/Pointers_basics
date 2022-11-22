#include <stdio.h>
double Average(int *arr, int size);
int main ()
{printf("RA2211042010042\n");
 int nums[5] = {1000, 2, 3, 17, 50};
 double avg;

 avg = Average( nums, 5 ) ;

 printf("Average value is: %f\n", avg );

 return 0;
}
double Average(int *arr, int size)//to get average
{
 int i, sum = 0;
 double avg;
 for (i = 0; i < size; ++i)
 {
 sum += arr[i];
 }
 avg = (double)sum / size;
 return avg;
}
