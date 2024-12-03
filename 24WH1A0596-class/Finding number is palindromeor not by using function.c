//Program for finding given number is palindrome or not by using function
#include <stdio.h> 
int reverse(int);
int main(){
int number,result;
    printf("enter a number: "); 
    scanf("%d",&number);
if(number==reverse(number))
printf("The number is palindrome");
else
printf("The number is not palindrome");
}
int reverse(int number){
int result=0;
while(number>0){
result=result*10+number%10;
number=number/10;


    }  
    
  return result; 
}