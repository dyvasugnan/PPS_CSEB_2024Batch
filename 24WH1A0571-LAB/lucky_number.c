#include<stdio.h>
int main(){
   int number;
   printf("enter number:");
   scanf("%d",&number);
   while(number>9){
       int sum=0;
       while(number!=0){
        int rem;
       rem=number%10;
       sum+=rem;
       number/=10;
    }
    number=sum;
}
  printf("lucky number is %d",number);
   return 0;
}
