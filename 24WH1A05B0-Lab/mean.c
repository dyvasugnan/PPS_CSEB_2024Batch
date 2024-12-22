//calculating mean,variance and standard deviation of given n numbers
#include<stdio.h>
#include<math.h>
int main() {
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int i,sum = 0,sum1 = 0;
    for(i = 0;i < 10;i++){
	sum = sum + a[i];    
    }
    float mean =(float) (sum/10);
    printf("mean of the given numbers is %f",mean);
 
    for(i = 0;i < 10;i++){
         sum1 = sum1 + pow((a[i] - mean),2);
    }
   int var = sum1/10;
   float sd = sqrt(var);
    printf(" variance of the given numbers is %d",var);
    printf("standard deviation is %f",sd);
    return 0;
}


