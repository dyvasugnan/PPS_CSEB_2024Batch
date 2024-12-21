//write a program to the factorial of given number  (24wh1a05b1)
#include<stdio.h>
int factorial_of_number(int);
int main()
{
int num,fact;
printf("enter any number");
scanf("%d",&num);
fact = factorial_of_number(num);
printf("%d",fact);
return 0;
}
int factorial_of_number(int n){
if(n == 1)
 return 1;
 return n*factorial_of_number(n-1);
}
