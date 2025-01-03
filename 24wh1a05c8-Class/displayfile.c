//Display contents of a file
#include<stdio.h>

int main(){
	FILE *fptr;
	char ch;
	fptr = fopen("sample.txt","w");
	while((ch = getchar()) != '#')
		putc(ch,fptr);
	fclose(fptr);
	
	fptr = fopen("sample.txt","r");
	while((ch = getc(fptr)) != EOF){
		putchar(ch);
	}
	return 0;
}
