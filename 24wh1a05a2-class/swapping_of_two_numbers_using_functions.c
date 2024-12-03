#include<stdio.h>
//welcome to c program
int swapping_of_number(int,int);
int main() {
     int num,num1;
     scanf("%d%d",&num,&num1);
     printf("num=%d\t",num);
     printf("num1=%d\n",num1);
     int temp=num;
     
     num= swapping_of_number(num,num1);
     num1=temp;
     printf("num=%d\t,num1=%d",num,num1);
    
    return 0;
  }
    int  swapping_of_number(int a,int b){
         return b;
   }