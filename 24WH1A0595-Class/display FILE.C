//Displaying contents in a file
#include<stdio.h>
int main(){
  FILE *fp;
  char ch;
   fp= fopen("sample.txt","w");
   while((ch=getchar())!='\n')
    putc(ch,fp);
    fclose(fp);
   fp= fopen("sample.txt","r");
   while((ch=getc(fp))!=EOF)
   putchar(ch);
   fclose(fp);
   return 0;
}
