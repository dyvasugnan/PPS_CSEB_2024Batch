//palindrome or not
#include<stdio.h>
int main(){
int num,temp,rem,rev=0;
printf("enter number:");
scanf("%d",&num);
temp=num;
while(num!=0){
rem=num%10;
rev=rev*10+rem;
num=num/10;
}
if(temp==rev)
printf("%d isPalindrome",temp);
else
printf("%d is not palindrome",temp);
return 0;
}
