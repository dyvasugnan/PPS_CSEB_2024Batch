#include<stdio.h>
int main(){
    int num,sum=0;
    printf("Enter any number\n");
    scanf("%d",&num);
    for(int i=1;i<num;i++){
        if(num%i==0){
           sum=sum+i;
        }
    }
    if(sum==num)
        printf("It is a perfect number\n");
    else
        printf("It is not a perfect number\n");
    return 0;
}