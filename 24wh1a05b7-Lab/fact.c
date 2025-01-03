//factorial of a number using recursion
#include<stdio.h>
int factorial(int);
int main(){
   int num;
printf("enter the number");
scanf("%d",&num);
 int fact=factorial(num);
printf("%d",fact);
return 0;
}
int factorial(int num)
{
if(num==1)
return 1;
return num*factorial(num-1);
}

