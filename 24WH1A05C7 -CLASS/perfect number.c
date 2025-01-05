#include<stdio.h>

int main()
{
    //printf("Hello world!");
    int i,n,sum=0;
    printf("enter number");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    if(n%i==0){
    printf(" %d ",i);
    
    
    sum=sum+i;
    }}
    printf("\nsum=%d\n",sum);
    if(n==sum){
    printf("Perfect number ");
    }
    else
    printf("No");
    
    return 0;
}