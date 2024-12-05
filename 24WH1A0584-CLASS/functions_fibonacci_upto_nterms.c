// fibonacci series upto n terms in function //
#include<stdio.h>
int fibonacci_upto_n(int);
int main(){
    int n;
    printf("Enter the number of terms:\n");
    scanf("%d",&n);
    int fib=fibonacci_upto_n(n);
    return 0;
}
int  fibonacci_upto_n(int n){
    int t0=0,t1=1,i,nextterm;
    for(i=1;i<=n;i++){
        nextterm=t0+t1;
        printf("%5d",nextterm);
        t0=t1;
        t1=nextterm;
    }
}