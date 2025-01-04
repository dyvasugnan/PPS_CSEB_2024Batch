//finding first n terms of a fibonacci series
#include<stdio.h>
int main(){
    int n;
    printf("enter no.of terms \n");
    scanf("%d",&n);
    int t0=0,t1=1,next_term;
    printf("fibonacci sequence\n");
    printf("%d %d ",t0,t1);
    for(int i=0;i<n-2;i++){
        next_term=t0+t1;
        printf("%d ",next_term);
        t0=t1;
        t1=next_term;
    }
return 0;
}