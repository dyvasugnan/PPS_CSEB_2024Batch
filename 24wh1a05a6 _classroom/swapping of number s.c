#include<stdio.h>
void swapping_of_numbers(int,int);
int main(){
    int num1,num2;
    printf("Enter any two numbers:\n");
    scanf("%d%d",&num1,&num2);
    printf("Before swapping : num1= %d and num2= %d\n",num1,num2);
   swapping_of_numbers(num1,num2);
   
     return 0;
}
void swapping_of_numbers(int num1,int num2){
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
    printf(" After swapping num1 = %d , num2 = %d",num1,num2);
    
    
}
    