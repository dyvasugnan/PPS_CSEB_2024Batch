#include<stdio.h>
int gcd(int,int);
int main(){
int num1,num2;
printf("enter any two numbers");
scanf("%d %d",&num1,&num2);
printf("the gcd of %d and %d is %d",num1,num2,gcd(num1,num2));
return 0;
}
int gcd(int num1,int num2){
if(num2==0){
    return num1;
}
else{
    return gcd(num2,num1%num2);
 }
}