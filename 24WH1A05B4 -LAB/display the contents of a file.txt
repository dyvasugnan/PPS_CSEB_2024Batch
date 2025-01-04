// display the contents of a file
#include <stdio.h>
#include<stdlib.h>
int main() {
    FILE *fp;
    char ch;
    fp=fopen("sample.text","r");
    printf("file contents are:\n");
    while((ch=getc(fp))!='%'){
        putchar(ch);
    }
    fclose(fp);
}