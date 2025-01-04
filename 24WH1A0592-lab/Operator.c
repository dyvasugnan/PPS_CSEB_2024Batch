// Two integer operands
#include<stdio.h>
int main(){
char ch;
printf("enter any operator: ");
scanf("%c",&ch);
int num1,num2;
printf("enter any two integers:\n");
scanf("%d%d",&num1,&num2);
switch(ch){
case'+':
        printf("sum=%d",num1+num2);
        break;
case'-':
        printf("difference=%d",num1-num2);
        break;
case'*':
        printf("multiplication=%d",num1*num2);
        break;
case'/':
        printf("division=%d",num1/num2);
        break;
case'%':
        printf("remainder=%d",num1%num2);
        break;
default:
        printf("invalid operator");   
}
}
