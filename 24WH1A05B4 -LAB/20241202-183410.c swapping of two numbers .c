#include<stdio.h>

int main(){

int a,b;
printf("enter two numbers\n");
scanf("%d%d",&a,&b);
printf("\nbefore swapping\na=%d\nb=%d\n",a,b);

a=a+b;
b=a-b;
a=a-b;

printf("\nafter swapping\na=%d\nb=%d\n",a,b);

return 0 ;
}