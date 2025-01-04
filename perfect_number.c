//a number is said to be perfect no if sum of it's factorials is equal to twice the number
#include<stdio.h>
int main(){
    int num,sum=0;
    printf("enter any number\n");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        if(num%i==0){
            sum=sum+i;
        }
    }
    if(sum==2*num)
    printf("%d is the perfect no",num);
    else
    printf("%d is not a the perfect no",num);
return 0;
}