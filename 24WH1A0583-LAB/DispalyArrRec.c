#include<stdio.h>
void display(int[],int,int);
int main(){
int n,i,m=0;
printf("enter no. of elements: \n");
scanf("%d",&n);
int arr[n];
printf("enter elements\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
display(arr,m,n);
return 0;
}
void display(int arr[],int m,int n){
if(m>=n)
return;
printf("%d ",arr[m]);
display(arr,m+1,n);
}

