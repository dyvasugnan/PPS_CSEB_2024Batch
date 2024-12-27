#include <stdio.h>
#include<string.h>
#include<stdbool.h>
bool isPalindrome(char []);
int main(){
   char str[]="racecar";
   if(isPalindrome(str))
    printf("Palindrome");
   else
    printf("not Palindrome");
    return 0;
}
bool isPalindrome(char s[]){
    int i=0;
    int len=strlen(s);
    for (i=0;i<len/2;i++){
        if(s[i]!=s[len-i-1])
        return false;
    }
    return true;
}
