//series : 1+11+111+1111+........
#include<stdio.h>
int main(){
    int i,num,sum=0,temp=0;
    printf("enter number");
    scanf("%d",&num);
    
    for(i=0;i<=num;i++){
        temp=(temp*10)+1;
        sum=sum+temp;
        printf(" %d ",temp) ;
       }
       printf("\n%d",sum);
return 0;
}