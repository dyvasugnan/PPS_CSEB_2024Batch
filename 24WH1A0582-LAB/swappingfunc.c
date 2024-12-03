#include<stdio.h>
void Swappingof2Num(int,int);
int main(){
int n1,n2;
printf("enter value of n1:\n");
scanf("%d",&n1);
printf("enter value of n2:\n");
scanf("%d",&n2);
printf("before swapping two numbers:n1=%d,n2=%d\n",n1,n2);
Swappingof2Num(n1,n2);
return 0;
}
void Swappingof2Num(int a,int b){
int temp=a;
a=b;
b=temp;
printf("after swapping two numbers:n1=%d,n2=%d\n",a,b);
}
 



