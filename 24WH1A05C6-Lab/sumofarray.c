//sum of array elements
#include<stdio.h>
int sumofarray(int [],int);
int main(){
  int a[]={1,2,3,4,5};
  int n=sizeof(a)/sizeof(a[0]);
  int sum;
  sum=sumofarray(a,n);
  printf("sum of array= %d",sum);
return 0;}
int sumofarray(int x[],int n){
     int i,y=0;
    for(i=0;i<n;i++)
     y+=x[i];
    
    return y;}
