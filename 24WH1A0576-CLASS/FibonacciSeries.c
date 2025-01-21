// Fibonacci Series
#include<stdio.h>
int main(){
    int n,nexterm;
    printf("Enter no. of terms to be printed in Fibonacci sequence:\n");
    scanf("%d",&n);
    //printing
    int a=0,b=1; //first 2 terms
    printf("Fibonacci series:%d,%d",a,b);
    for(int i=3;i<n;i++){
        nexterm = a+b;
        printf(",%d",nexterm);
        a=b;
        b=nexterm;
    } printf("\n");
    return 0;
}
