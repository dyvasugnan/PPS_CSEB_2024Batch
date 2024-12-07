//write a function for given string is palindrome or not
#include<stdio.h>
#include<stdbool.h>
bool isPalindrome(char [ ]);
int main() {
    char str[ ]="aba";
    char ch;
    ch=isPalindrome(str);
    if(ch)
        printf("given string is palindrome");
    else
        printf("given string is not palindrome");
    return 0;
}
bool isPalindrome(char str [ ]) {
    int len,i;
    len=strlen(str);
    for(i=0; i<len/2; i++)
        if(str[i]==str[len-i-1])
            return true;
        else
            return false;
}