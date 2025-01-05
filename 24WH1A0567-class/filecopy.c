#include<stdio.h>
#include<ctype.h>
int main() {
  FILE *fp1,*fp2;
  char ch;
   fp1= fopen("sample.txt","w");
   while((ch=getchar())!='\n')
    putc(ch,f1p);
    fclose(fp1);
   fp1= fopen("sample.txt","r");
   fp2= fopen("sample2.txt","w");
   char up;
  while((ch=getc(fp1))!=EOF)
     if(ch>=97 || ch<=122){
      up= toupper(ch);
      putc(up,fp2);
}
   else {
    putc(ch,fp2);
}
   fclose(fp1);
   fclose(fp2);
}
