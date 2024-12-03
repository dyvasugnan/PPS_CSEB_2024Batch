#include<stdio.h>
int FactorialofNum(int);
int main(){
int n,product;
printf("enter any number:\n");
scanf("%d",&n);
product=FactorialofNum(n);
printf("factorial of given number is:%d",product);
return 0;
}
int FactorialofNum(int n){
int product=1,i;
for(i=1;i<=n;i++){
product=product*i;
//product++;
}
return product;
}

