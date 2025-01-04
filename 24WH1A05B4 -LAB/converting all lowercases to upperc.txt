//converting all lowercases to uppercase
#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *fp,*fp1;
char ch;
fp=fopen("read.txt","w");
printf("enter data");
while((ch=getchar())!='\n')
putc(ch,fp);
fclose(fp);
fp=fopen("read.txt","r");
fp1=fopen("output.txt","w");
 while((ch=getc(fp))!=EOF){
    if(ch>=97 && ch<=123){
putc(toupper(ch),fp1);
       }
else{
    putc(ch,fp1);
}
fclose(fp1);
fclose(fp);
fp1=fopen("output.txt","r");
while((ch=getc(fp1))!=EOF)
 putchar(ch);

fclose(fp1);
return 0;
}