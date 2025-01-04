//displaying the contents of the file
#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *fp;
char ch;
fp=fopen("read.txt","w");
printf("enter data");
while((ch=getchar())!='\n')
putc(ch,fp);
fclose(fp);
fp=fopen("read.txt","r");
 while((ch=getc(fp))!=EOF)
 putchar(ch);

fclose(fp);

return 0;
}
