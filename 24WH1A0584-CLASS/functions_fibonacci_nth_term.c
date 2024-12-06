// fibonacci series nth term in function //
#include<stdio.h>
int fibonacci_nth_term(int);
int main(){
    int n;
    printf("Enter the nth term needed:\n");
    scanf("%d",&n);
    int fib=fibonacci_nth_term(n);
    printf ("%dth term=%d",n,fib);
    return 0;
}
int  fibonacci_nth_term(int n){
    int t0=0,t1=1,i,nextterm;
    for(i=3;i<=n;i++){
        nextterm=t0+t1;
        t0=t1;
        t1=nextterm;
    }
    return t1;
}