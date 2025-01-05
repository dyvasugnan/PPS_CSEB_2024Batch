#include<stdio.h>

int main()
{
    //printf("Hello world!");
    char a[30],i,c=0;
    gets(a);
    
    
    for(i=0;a[i]!='\0';i++){
    if(a[i]==' '){
    c++;
    }}
    printf("%d",c+1);
    
    return 0;
    
}