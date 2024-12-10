#include<stdio.h>
#include<stdbool.h>
#include<string.h>
bool isPalindrome(char s[]) {
int len=strlen(s);
for(int i=0;i<=len/2;i++) {
   if(s[i]!=s[len-i-1]) {
     return false;
    }
}
return true;
}

int main () {
char str[]="malayalam";
 bool result=isPalindrome(str);
if(result) {
printf("it is a palindrome");
  }
else {
printf("not a palindrome");
}
return 0;
}


