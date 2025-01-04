//delete n characters by using functions
#include<stdio.h>
#include<string.h>
void deletech(char[],int,int);
int main() {
    char s[10];
    int len,pos,del;
    printf("enter a string: ");
    scanf("%s",s);
    len=strlen(s);
    printf("len %d\n",len);
    printf("enter delete characters: ");
    scanf("%d",&del);
    printf("enter position:");
    scanf("%d",&pos);
    printf("befor delete: %s\n",s);
    deletech( s,del,pos);
    printf("After delete: %s\n",s);
    return 0;
}
void deletech(char s[10],int del,int pos) {
    int len,i;
    len=strlen(s);
    for(i=pos-1; i<=len-del; i++)
        s[i]=s[i+del];
}