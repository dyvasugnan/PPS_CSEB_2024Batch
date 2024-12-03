//sum of n natural numvers
#include <stdio.h>
int factorial(int);
int main(){
int number;
printf("Enter the value of a number \n");
scanf("%d",&number);
printf("Factorial is %d",factorial(number));
}
int factorial(int number2){
int result=1,x;
for(x=1;x<=number2;x++){
result=result*x;
}
return result;
}