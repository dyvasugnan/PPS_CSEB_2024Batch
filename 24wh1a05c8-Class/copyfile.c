//Copying of one file to another
#include<stdio.h>
#include<ctype.h>

int main(){
	FILE *fp1;
	char ch;
	
	fp1 = fopen("read.txt","w");
	while((ch = getchar()) != '#')
		putc(ch,fp1);
	fclose(fp1);
	
	FILE *fp2 = fopen("copy.txt","w");
	fp1 = fopen("read.txt","r");
	while((ch = getc(fp1)) != EOF)
		putc(ch,fp2);
	fclose(fp1);
	fclose(fp2);
	
	return 0;
}
