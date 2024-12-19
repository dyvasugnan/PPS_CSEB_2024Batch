#include<stdio.h>
 int gcd(int,int);
 int main(){
    int num1,num2;
    printf("enter any integer\n");
    scanf("%d",&num1);
scanf("%d",&num2);
   printf("%d",gcd(num1,num2));
   return 0;
}
  int gcd(int num1,int num2){
  if(num2!=0)
   return gcd(num2,num1%num2);
   else
   return num1;
  }
 
