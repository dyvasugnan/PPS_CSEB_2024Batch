//using arithmetic operators in switch case
#include<stdio.h>
int main(){
    char operator;
    printf("enter any aritmetic operator\n");
    scanf("  %c",&operator);
    int num1,num2;
    printf("enter any two nos \n");
    scanf("%d%d",&num1,&num2);
    switch(operator){
        case '+':
        printf("result : %d",num1+num2);
        break;
        case '-':
        printf("result : %d",num1-num2);
        break;
        case '*':
        printf("result  : %d",num1*num2);
        break;
         case '/':
        printf("result : %d",num1/num2);
        break;
       case '%':
        printf("result : %d",num1%num2);
        break;
        default:
        printf("it is not an arithmetic operator");
       }
  return 0;
  }