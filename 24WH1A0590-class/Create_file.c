#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *fp;
char ch;
fp=fopen("a.txt","r”);
printf(“File contents are\n”);
while((ch=getc(fp)!=’%’)
{
putchar(ch);
}
fclose(fp);
}
