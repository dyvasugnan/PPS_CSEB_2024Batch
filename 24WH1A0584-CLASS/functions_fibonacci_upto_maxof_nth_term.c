//fibonacci series upto max term required in function //

#include<stdio.h>
int fibonacci_upto_maxterm_req(int);
int main(){
    int n;
    printf("Enter max term needed:\n");
    scanf("%d",&n);
    int fib=fibonacci_upto_maxterm_req(n);
    return 0;
}
int fibonacci_upto_maxterm_req(int n){
    int t0=0,t1=1,i,nextterm;
    printf("%d ",t0);
    printf("%5d ",t1);
    nextterm=t0+t1;
        while(n){
            nextterm=t0+t1;
            if(nextterm>n)
                break;  
            printf("%5d",nextterm);
            t0=t1;
            t1=nextterm;
    }
}