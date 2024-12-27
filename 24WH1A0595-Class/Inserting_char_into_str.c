//inserting a char into a str
#include <stdio.h>
#include<string.h>
int main() {
    char s[]="hi ello";
    char ch='h';
    int pos=3;
    int len,i;
    len = strlen(s);
    for(i=len;i>=pos;i--)
     s[i]=s[i-1];
     s[pos]=ch;
     s[len +1]='\0';
    printf("%s",s);
    return 0;
}
