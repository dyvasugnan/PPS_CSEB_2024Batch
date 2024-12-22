#include<stdio.h>

//factorial of a number

int factorial(int);

 int main(){

  int num;

 scanf("%d",&num);

 int result=factorial(num);
 
 printf("factorial of a num(%d)=%d",num,result);

 return 0;

 }
 
 int factorial(int num){

   if(num==1)
 
     return 1;

  return num*factorial(num-1);

 }