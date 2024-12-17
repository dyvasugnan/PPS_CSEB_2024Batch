#include<stdio.h>
int factorial(int);
int main(){
    int n,fact;
    printf("Enter any number\n");
    scanf("%d",&n);
    fact=factorial(n);
    printf("factorial of %d=%d\n",n,fact);
    return 0;
}
int factorial(int n){
    if(n==1)
       return 1;
    return n*factorial(n-1);
}
