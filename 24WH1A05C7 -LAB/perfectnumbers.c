//perfect number:number is equal to sum of its divisors
#include<stdio.h>
int main() {
    int i,n,sum=0;
    printf("enter number");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        if(n%i==0){
            printf(" %d ",i);
            sum=sum+i;
     
        }
    }

        printf("sum = %d\n",sum);
    if(n==sum){
    
            printf("given number is a perfect number");
    }
        else{
            printf("given number is not a perfect number");
        }
return 0;
    }
    