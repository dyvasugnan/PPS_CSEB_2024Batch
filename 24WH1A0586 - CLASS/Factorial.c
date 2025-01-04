// factorial in function //

#include<stdio.h>
int factorial(int);
int main(){
    int n,fact;
    printf ("Enter n value\n");
    scanf ("%d",&n);
    fact=factorial(n);
    printf ("factorial=%d",fact);
    return 0;
}
int factorial(int num){
    int i,fact=1;
    for(i=1;i<=num;i++){
        fact=fact*i;
    }
    return fact;
}
