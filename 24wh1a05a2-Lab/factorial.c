#include<stdio.h>

int factorial(int);

 int main(){

  int number,fact;
 
  scanf("%d",&number);

  fact =factorial(number);

  printf("factorial of number =%d\n",fact);

  return 0;

 }
 
 int factorial(int n){

   int m=1;

   for(int i=1;i<=n;i++){

       m= m*i;
    }
   
   return m;


 }
 