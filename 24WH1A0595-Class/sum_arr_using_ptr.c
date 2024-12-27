//using a pointer variable to sum of n elements of an array
#include<stdio.h>
int main() {
    int a[5],i,sum=0;
    int *ptr=a;
    printf("enter nos");
   for(i=0;i<5;i++){
       scanf("%d",ptr+i);
    }
    int n;
    printf("sum of n elements of array\nEnter n value:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
       sum=sum+ *(ptr+i);
    }
    printf("sum of n elements=%d",sum);
    return 0;
}
