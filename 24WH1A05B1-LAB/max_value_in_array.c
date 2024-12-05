#include<stdio.h>
int max_valueinarray(int[],int);
int main(){
int n,max;
printf("enter size of array");
scanf("%d",&n);
int a[]={1,6,9,4,8,2,5,3,7};
int i;
for(i=0;i<n;i++)
printf("%4d ",a[i]);
max=max_valueinarray(a,n);
printf("\n max:%d",max);
return 0;
}
int max_valueinarray(int a[],int n){
int i=0,max;
max=a[i];
for(i=0;i<n;i++){
if(a[i]>max)
max=a[i];
}
return max;
}
