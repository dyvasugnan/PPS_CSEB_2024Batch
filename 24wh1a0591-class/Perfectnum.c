#include<stdio.h>
int main(){
    int number;
    int sum=0;
    printf("Enter any number:");
    scanf("%d",& number);
    for(int i=1;i<number;i++){
        if(number%i==0)
           sum=sum+i;
        
    }
    if(sum==number)
        printf("%d is a perfect number",number);
    else
        printf("%d is not a perfect number",number);
    return 0;
}
