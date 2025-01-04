//to check whether the given character is present in string or not
#include<stdio.h>
#include<string.h>
int main(){
	char str[1000],ch;
	int i,l;
	printf("enter the string");
	scanf("%s",str);
	printf("enter the character");
	scanf("\n%c",&ch);
	l=strlen(str);
	for(i=0;i<l;i++){
		if(str[i]==ch)
		{
		printf("position=%d",i+1);
		break;
       }
	}
   if(i==l)
   printf("-1");
}
