#include<stdio.h>

int main()
{
    //printf("Hello world!");
    int i,n,a[10]={1,2,3,4,5,6,8,9,10},sum=0,totalsum,actualsum,reqsum;
    
    totalsum=(10*(10+1))/2;
    for(i=0;i<10;i++){
    
    sum=sum+a[i];
    reqsum=totalsum-sum;
    }
    printf("missing number is %d\n",reqsum);
    
    return 0;
}