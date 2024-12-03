//swapping of two numbers
#include<stdio.h>
void swap2num(int,int);

int main(){
int n1,n2;
printf("enter value of number 1:\n");
scanf("%d",&n1);
printf("enter value of number 2:\n");
scanf("%d",&n2);
printf("before swapping two numbers the values are: n1=%d,n2=%d\n",n1,n2);
swap2num(n1,n2);
return 0;
}
void swap2num(int a,int b){
int temp=a;
a=b;
b=temp;
printf("after swapping two numbers the values are: n1=%d,n2=%d\n",a,b);
}

