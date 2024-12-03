//factorial of n numbers using functions
#include<stdio.h>
int factorialof_n(int);
int main(){
int product,number;
printf("enter value of n\n");
scanf("%d",&number);
product=factorialof_n(number);
printf("product of given n numbers is:%d\n",product);
return 0;
}
int factorialof_n(int x){
int product=1,i;
for(i=1;i<=x;i++){
product=product*i;
}
return product;
}
