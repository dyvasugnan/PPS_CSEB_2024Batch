#include <stdio.h>
int fibseries_Upto_n(int);
int main(){
    int n;
    printf("Enter the limit of the series:");
    scanf("%d",&n);
    int fib=fibseries_Upto_n(n);
    return 0;
}
int fibseries_Upto_n(int n){
    int t0=0;
    int t1=1;
    int i;
    printf("%d ",t0);
    printf("%d ",t1);
     int nxtterm=t0+t1;
        while(n){
        nxtterm=t0+t1;
        if(nxtterm>n)
        break;  
        printf("%d ",nxtterm);
        t0=t1;
        t1=nxtterm;
    }
}
