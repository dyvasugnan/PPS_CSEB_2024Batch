#include<stdio.h>
#include<stdlib.h>
int main(){
FILE *fp;
char ch;
fp=fopen("sample.txt","r”);
printf(“data from a file are\n”);
while((ch=getc(fp)!=’%’){
putchar(ch);
}
fclose(fp);
}
