//given string is palindrome or not
#include<stdio.h>
#include<string.h>
int main() {
    char s[10];
    int len,i;
    printf("enter a string:\n");
    scanf("%s",s);
    len=strlen(s);
    for(i=0; i<=len/2; i++) {
        if(s[i]!=s[len-1-i])
            printf("not palindrome");
        else
            printf("palindrome");
        return 0;
    }
}