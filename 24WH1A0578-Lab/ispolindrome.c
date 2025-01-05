#include<stdio.h>
int ispolindrome(int);
int main(){
    int num;
    printf("Enter any number:\n");
    scanf("%d",&num);
   if( isPalindrome(num))
    printf("%d is a palinndrome",num);
  else
  printf("%d is not a palindrome",num);
  return 0;
}
int isPalindrome(int num){
int rem,rev=0;
int temp = num;
 while(num!=0){
      rem=num%10;
      rev=rev*10+rem;
      num/=10;
}
if( rev==temp)
return rev;
else
 return 0;
}
