#include<stdio.h>
int SumofTwoNumbers(int,int);
int main(){
int n1,n2;
printf("enter any two numbers:\n");
scanf("%d%d",&n1,&n2);
SumofTwoNumbers(n1,n2);
return 0;
}
int SumofTwoNumbers(int a,int b){
int sum;
sum=a+b;
printf("sum of two numbers is:%d\n",sum);
return sum;
}

