#include<stdio.h>
int swapNum(int,int);
int main(){
int n1,n2;
printf("enter 2  numbers:\n");
scanf("%d %d",&n1,&n2);
swapNum(n1,n2);
return 0;
}
int swapNum(int n1,int n2){
int temp;
temp=n1;
n1=n2;
n2=temp;
printf("num1=%d and num2=%d",n1,n2);
}
