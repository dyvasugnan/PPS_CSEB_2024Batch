#include<stdio.h>
int main(){
    char str[30]="helo how re you";
    int i,pos=9,length=0;
    char ch='a';
    for(i=0;str[i]!='\0';i++){
        length++;
    }
    for(i=15;i>=pos;i--){
        str[i]=str[i-1];
    }
    str[pos]=ch;
    str[length+1]='\0';
    printf ("%s\n",str);
    return 0;
}