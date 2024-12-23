//addition using recurrsion 
#include<stdio.h>
int sumofnumbers(int);
int main(){
int n,res;
printf("enter any number");
scanf("%d",&n);
res = sumofnumbers(n);
printf("sum=%d",res);
return 0;
}
int sumofnumbers(int n){
  if(n==1)
  return 1;
  return n+sumofnumbers(n-1);
}
