#include<stdio.h>
int linearsearch(int[],int,int,int);
int main(){
int n,i,m,x;
printf("enter size:\n");
scanf("%d",&n);
int arr[n];
printf("enter elements:\n");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("enter no. to be found:\n");
scanf("%d",&m);
i=0;
x=linearsearch(arr,i,n,m);
if(x!=-1)
printf("element is found at %d ",x);
else
printf("element is not found\n");
return 0;
}

int linearsearch(int arr[],int i,int n,int m){

if(i==n)
return -1;
if(arr[i]==m)
return i;
return linearsearch(arr,i+1,n,m);
}
