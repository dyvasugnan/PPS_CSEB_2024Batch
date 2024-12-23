//fibbanoci series using recurrsion
#include<stdio.h>
int fibbanociseries(int);
int main(){
int n,res;
printf("enter the nth element");
scanf("%d",&n);
 res  =fibbanociseries(n);
printf("%d",res);
 return 0;
}
int fibbanociseries(int n){
  if(n==0)
  return 0;
  if(n==1)
  return 1;
  return fibbanociseries(n-1)+fibbanociseries(n-2);
 }
