#include<stdio.h>
int min_valueinarray(int[],int);
int main(){
int n,min;
printf("enter size of array");
scanf("%d",&n);
int a[]={1,6,9,4,8,2,5,3,7};
int i;
for(i=0;i<n;i++)
printf("%4d ",a[i]);
min=min_valueinarray(a,n);
printf("\n min:%d",min);
return 0;
}
int min_valueinarray(int a[],int n){
int i=0,min;
min=a[i];
for(i=0;i<n;i++){
if(a[i]<min)
min=a[i];
}
return min;
}

 
