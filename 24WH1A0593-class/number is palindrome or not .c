#include <stdio.h>
int main() {
int n,rev=0, rem,temp;
printf("enter n value");
scanf("%d",&n);
temp=n;
while(n!=0){
 rem =n%10;
 rev=rev*10+rem;
 n/=10;
 }
 if( temp==rev)
 printf("%d given number is a palindrome:",temp);
 else
 printf("%d given number is not a palindrome:",temp);
   
   return 0;
}
    