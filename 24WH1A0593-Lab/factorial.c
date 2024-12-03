// sum of n natural numbers
// using functions
#include<stdio.h>
int factorial(int);
int main(){
int number,mul;
printf("enter number value");
scanf("%d",&number);
mul=factorial (number);
printf("factorial of a number: %d \n",mul);
}
int factorial (int number){
int mul=1,i;
for(i=1;i<=number;i++){
mul =mul*i;
}
return mul;
}