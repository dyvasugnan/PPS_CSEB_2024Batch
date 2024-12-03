#include<stdio.h>
int sum(int,int);
int main(){
   int num1,num2;
   printf("enter number 1:");
   scanf("%d",&num1);
   printf("enter number 2:");
   scanf("%d",&num2);
   int result= sum(num1,num2);
   printf("%d",result);
    return 0;
}
 int sum(int x1,int x2){
     return x1+x2;
}
