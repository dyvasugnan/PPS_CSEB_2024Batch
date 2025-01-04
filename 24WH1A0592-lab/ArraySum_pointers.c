//sum of array by using pointers
#include<stdio.h>
int main(){
int arr[10],i,n,sum=0,*ptr;
ptr=&a[0];
printf("enter size of array:");
scanf("%d",&n);
printf("enter arrayelements\n" );
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
for(i=0;i<n;i++){
sum+=*ptr;
ptr++;
}
printf("sum of array elements is: %d",sum);
return 0;
}
