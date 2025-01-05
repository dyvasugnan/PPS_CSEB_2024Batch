#include<stdio.h>

int main()
{
    char str[10]="MANASA",i;
    for(i=0;str[i]!='\0';i++){
    if(str[i] >= 'A'&& str[i] <= 'Z'){
    str[i]=str[i]+32;}
    }
    printf("%s",str);
    
    return 0;
}