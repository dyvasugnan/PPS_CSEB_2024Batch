#include<stdio.h>
int FACTORIAL(int);
int main(){
int n,k;
printf("enter a number:\n");
scanf("%d",&n);
k=FACTORIAL(n);
printf("%d",k);
return 0;
}
int FACTORIAL(int n){
int fact=1,i;
for(i=n;i>=1;i--)
fact=fact*i;
//return fact;
}
