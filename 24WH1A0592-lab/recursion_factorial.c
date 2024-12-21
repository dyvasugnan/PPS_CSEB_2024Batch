//factorial of a number by using recursion
#include<stdio.h>
int factorial(int n);
int main() {
    int n,result;
    printf("enter n value:\n");
    scanf("%d",&n);
    result=factorial(n);
    printf("result=%d",result);
}
int factorial(int x) {
    if(x==0)
        return 1;
    else
        return (x*factorial(x-1));
}