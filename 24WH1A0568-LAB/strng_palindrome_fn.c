//string is palindrome or not
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool isPalindrome(char s[]){
int i;
int len=strlen(s);
for(i=0;i<=len/2;i++){
   if(s[i]!=s[len-i-1]){
     return false;
   }
}
 return true;
}
int main(){
char str[10];
printf("enter a string");
scanf("%s",str);
int result = isPalindrome(str);
if(result)
  printf("%s is a palindrome",str);
else
  printf("%s is not a palindrome",str);
return 0;
}
