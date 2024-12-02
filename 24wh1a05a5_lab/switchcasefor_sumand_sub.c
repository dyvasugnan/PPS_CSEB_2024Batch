#include<stdio.h>
int main() {
    int num1,num2,num;
    scanf("%d%d",&num1,&num2);
    printf("enter num");
    scanf("%d",&num);
    switch(num) {
    case 1:
        printf("%d",num1+num2);
        break;
    case 2:
        printf("%d",num1-num2);
        break ;
    default:
        printf("invalid");

    }
    return 0;
}