#include<stdio.h>

int main()
{
    //printf("Hello world!");
    int t1,t2,nextterm,n,i;
    t1=0;
    t2=1;
    printf("enter elements");
    scanf("%d",&n);
    printf("%d %d ",t1,t2);
    for(i=2;i<=n;i++){
    nextterm=t1+t2;
    printf("%d ",nextterm);
    t1=t2;
    t2=nextterm;
    }
    return 0;
}