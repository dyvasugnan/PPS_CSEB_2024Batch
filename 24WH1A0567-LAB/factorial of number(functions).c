#include<stdio.h>
int factorial(int );

int main() {
int n,fact;
printf("enter number:");
scanf("%d",&n);
 fact=factorial(n);
printf("%d",fact);
return 0;
}
int factorial(int n) {
int fact=1;
for(int i=1;i<=n;i++) {
fact=fact*i;
}
return fact;
}
