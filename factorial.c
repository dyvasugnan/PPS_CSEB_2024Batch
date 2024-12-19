#include<stdio.h>
int factorial(int);
int main(){
int num;
printf("Enter any number");
scanf("%d",&num);
printf("The factorial of %d is %d",num,factorial(num));
return 0;
}
int factorial(int num){
int fact;
if(num==0){
   return 1;
}
else{
  fact=num*factorial(num-1);
 return fact;
}
}
