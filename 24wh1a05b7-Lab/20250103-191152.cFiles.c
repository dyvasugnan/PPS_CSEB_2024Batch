//display the contents of file to stardard output device
#include<stdio.h>

int main(){
FILE *fp;
char ch;
fp=fopen("a. txt", "r") ;
printf("File content are \n") ;
ch=getc(fp)! ='%'
{
putchar(ch) ;
} 
fclose(fp) ;

   return 0;
}

