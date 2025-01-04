//lower case to upper case using files
#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fptr;
	FILE *fptr1;
	char ch;
	fptr=fopen("sample7.txt","w");
	while((ch=getchar())!='@')
	  putc(ch,fptr);
	fclose(fptr);
	fptr=fopen("sample7.txt","r") ;
	fptr1=fopen("sample8.txt","w");
	while((ch=getc(fptr))!=EOF){
		if(ch>=97&&ch<=127)
		putc(toupper(ch),fptr1);
		else
		putc(ch,fptr1);
	}
	fclose(fptr1);
	fclose(fptr);
	fptr1=fopen("sample8.txt","r");
	while((ch=getc(fptr1))!=EOF){
		putc(ch,fptr1);
	}
	
}
