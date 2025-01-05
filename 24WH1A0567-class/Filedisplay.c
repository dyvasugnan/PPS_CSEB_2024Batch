#include<stdio.h>
int main(){
  FILE *ptr;
  char ch;
   ptr= fopen("sample.txt","w");
   while((ch=getchar())!='\n')
    putc(ch,ptr);
    fclose(ptr);
   ptr= fopen("sample.txt","r");
   while((ch=getc(ptr))!=EOF)
   putchar(ch);
   fclose(ptr);
   return 0;
}
