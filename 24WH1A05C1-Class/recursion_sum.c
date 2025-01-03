#include<stdio.h>
int sum(int );
int main(){
int n;
printf("enter any integer\n");
scanf("%d",&n);
   printf("sum:%d",sum(n));
   return 0;
}
int sum(int n){
if(n==1){
  return 1;
}
int sumn=sum(n-1)+n;
 return sumn;
}

