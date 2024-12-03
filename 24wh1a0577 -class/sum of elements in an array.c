#include<stdio.h>

int main(){ 
 int a[10]; 
 int i,sum=0;
 for(i=0;i<=9;i++){
 printf("enter the value in %d lovation,i\n");
 scanf("%d",& a[i]);
 printf("%d",&a[i]);
 }
 for(i=1;i<=9;i++){
 sum=sum+i;
 }
 printf("%d",sum);
  return 0;
  }