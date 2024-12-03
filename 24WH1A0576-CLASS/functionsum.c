//to find sum of two numbers using function
#include<stdio.h>
int sum(int,int);
int main(){
int n1,n2;
printf("enter value of number 1:");
scanf("%d",&n1);
printf("enter value of number 2:");
scanf("%d",&n2);
sum(n1,n2); //calling of value
return 0;
}
int sum(int a,int b){
int result;
result=a+b;
printf("sum of two numbers is:%d",result);
return result;
}
