// Write a program to increase the each array value by 1
#include<stdio.h>
int arrInc(int[],int);
int main(){
int i,n;
printf("enter size of array");
scanf("%d",&n);
int a[]={1,2,3,4,5,6,7,8,9}; 
for(i=0;i<n;i++)
printf("%4d",a[i]);
arrInc(a,n);
printf("\n");
for(i=0;i<n;i++)
printf("%4d",a[i]);
return 0;
}
int arrInc(int a[],int n){
int i;
for(i=0;i<n;i++){
a[i]=a[i]+1;
}
return a[i];
}
