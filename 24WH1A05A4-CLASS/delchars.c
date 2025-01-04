// to delete n characters from string
#include<stdio.h>
#include<string.h>
void del(char[],int,int,int);
int main(){
	char str[50];
	int pos,num,l;
	l=strlen(str);
	printf("enter the string");
	scanf("%s",str);
	printf("enter the position");
	scanf("%d",&pos);
	printf("enter no.of characters");
	scanf("%d",&num);
	del(str,pos,num,l);
}
void del(char str[],int pos,int num,int l){
	int i;
	for(i=pos+num;i<=l;i++){
		str[pos]=str[i];
		pos++;
	}
	printf("%s",str);
}
