#include<stdio.h>
void Rev(int[],int,int);
int main(){
int n,m=0,i;
printf("enter no. of elements:\n");
scanf("%d",&n);
int arr[n];
printf("enter elements:\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
Rev(arr,m,n);
return 0;
}
void Rev(int arr[],int m,int n){
if(m>=n)
return;
printf("%d ",arr[n-1]);
Rev(arr,m,n-1);
}
