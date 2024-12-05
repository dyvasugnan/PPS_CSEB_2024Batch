#include <stdio.h>
int displayFibseries (int);
int main(){
    int n;
    printf("Enter the number of terms to be displayed:");
    scanf("%d",&n);
    int fib=displayFibseries(n);
    return 0;
}
int displayFibseries (int n){
    int t0=0;
    int t1=1;
    int i;
    printf("%d ",t0);
    printf("%d ",t1);
    for(i=3;i<=n;i++){
        int nxtterm=t0+t1;
        printf("%d ",nxtterm);
        t0=t1;
        t1=nxtterm;
    }
}
