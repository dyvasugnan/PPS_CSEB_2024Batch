//insert char into a string
#include<stdio.h>
#include<string.h>
int main() {
    char s[20]="hello how re you";
    char ch='a';
    int i,pos=10;
    int l=strlen(s);
    for(i=l+1;i>=pos;i--){
        s[i]=s[i-1];
    }
    s[pos]=ch;
    printf("New string:%s",s);
 return 0;
}
