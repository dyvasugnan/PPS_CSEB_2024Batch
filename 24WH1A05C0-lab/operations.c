#include<stdio.h>
int main(){
int num,num1;
char operator;
printf("enter the operator you want to use");
scanf("%c",&operator);
printf("enter any two numbers");
scanf("%d %d",&num,&num1);
switch(operator){
              case '+':
              printf("%d%c%d=%d",num,operator,num1,num+num1);
              break;
              case '-':
              printf("%d%c%d=%d",num,operator,num1,num-num1);
              break;
              case '*':
              printf("%d%c%d=%d",num,operator,num1,num*num1);
              break;
              case '/':
              printf("%d%c%d=%d",num,operator,num1,num/num1);
              break;
              case '%':
              printf("%d%c%d=%d",num,operator,num1,num%num1);
              break;
              default:
              printf("no such case is possible");
}
return 0;
}
