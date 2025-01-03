//copying contents in a file into another file by capitalizing 
#include<stdio.h>
#include<ctype.h>
int main(){
  FILE *fp,*fp2;
  char ch;
   fp= fopen("sample.txt","w");
   while((ch=getchar())!='\n')
    putc(ch,fp);
    fclose(fp);
   fp= fopen("sample.txt","r");
   fp2= fopen("sample2.txt","w");
   char up;
  while((ch=getc(fp))!=EOF)
     if(ch>=97 || ch<=122){
      up= toupper(ch);
      putc(up,fp2);}
   else{
    putc(ch,fp2);}
   fclose(fp);
   fclose(fp2);
}
