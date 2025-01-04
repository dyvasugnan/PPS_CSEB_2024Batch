//position of a character in a string
#include<stdio.h>
#include<string.h>
int main() {
    char s[10],ch;
    int i,len,count=0;
    printf("enter any character:\n");
    scanf("%c",&ch);
    printf("enter a string:\n");
    scanf("%s",s);

    len=strlen(s);
    for(i=0; i<len; i++) {
        if(ch==s[i]) {
            printf("element found at %d",i);
            count++;
            break;
        }

    }
    if(count==0)
        printf("element not found");

    return 0;

}