//HappyNumber//
#include<stdio.h>
int main(){
int n,sum=0,m,temp;
    printf("Enter n value\n");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        m=n%10;
        sum=sum+m*m;
        n=n/10;
        if(n==0 && sum>9){
           n=sum;
           sum=0;
        }
    }
    if(sum==1)
    printf("%d is a happy number",temp);
    else
    printf("%d is not a happy number",temp);
    return 0;
}

   