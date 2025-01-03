//Lowercase to uppercase using files
#include<stdio.h>
#include<ctype.h>

int main(){
	FILE *fp1;
	char ch,ch1;
	
	fp1 = fopen("input.txt","w");
	while((ch = getchar()) != '#')
		putc(ch,fp1);
	fclose(fp1);
	
	FILE *fp2 = fopen("output.txt","w");
	fp1 = fopen("input.txt","r");
	while((ch = getc(fp1)) != EOF){
		if(ch >= 'a' && ch <= 'z'){
			ch1 = toupper(ch);
			putc(ch1,fp2);
		}
		else
			putc(ch,fp2);
	}
	fclose(fp1);
	fclose(fp2);
	
	return 0;
		
}
