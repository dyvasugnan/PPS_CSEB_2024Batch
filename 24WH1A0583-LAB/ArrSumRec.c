#include<stdio.h>
int  ArrSum(int[],int,int);
int main(){
int i,n,m=0,x;
printf("enter no. of elements:\n");
scanf("%d",&n);
int arr[n];
printf("enter elements:\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
x=ArrSum(arr,m,n);
printf("%d\n",x);
return 0;
}
int sum=0;
int ArrSum(int arr[],int m,int n){

if(m>=n)
return sum;
sum=sum+arr[m];
return ArrSum(arr,m+1,n);
}
