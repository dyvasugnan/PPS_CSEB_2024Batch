// to find out factorial in recursion
#include<stdio.h>
int fact(int);
int main(){
int n,a;
printf("enter value of n:\n");
scanf("%d",&n);
if(n<0){
printf("negative,no factorial");
}
else{
a=fact(n); //calling
printf("factorial of %d is %d",n,a);
}
}
int fact(int n){
 if(n==0||n==1){
 return 1;
 }
 return n*fact(n-1);
}

