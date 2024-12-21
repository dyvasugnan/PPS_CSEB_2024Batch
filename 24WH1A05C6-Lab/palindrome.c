// palindrome or not
#include<stdio.h>
int main(){
int num,temp,rem,rev=0;
printf("enter number\n");
scanf("%d",&num);
temp=num;
while(temp!=0){
rem=temp%10;
rev=rev*10+rem;
temp=temp/10;
}
printf("reverse number is %d\n",rev);
if(num==rev)
     printf("%d is palindrome\n",num);
else
   printf("%d is not a palindrome\n",num);
   return 0;}
