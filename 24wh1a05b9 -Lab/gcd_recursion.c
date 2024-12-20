// GCD OF TWO NUMBERS USING RECURSION
#include<stdio.h>
 int cal_gcd(int,int);
   int main (){
       int num1,num2;
      printf("enter the number");
      scanf("%d %d",&num1,&num2);
      int gcd=cal_gcd(num1,num2);
         printf("GCD of %d and%d is%d",num1,num2,gcd);
        return 0;
        }
      int cal_gcd(int num1,int num2){
         if(num2==0){
            return num1;
            }
            return cal_gcd(num2,num1%num2);
            }
