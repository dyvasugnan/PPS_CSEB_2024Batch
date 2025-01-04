//count the lines,words,characaters on text
#include<stdio.h>
#include<string.h>int main(){
char s[100];
int i,count=0,words=0,lines=0;
printf("enter text:\n");
scanf("%[^@]s",s);
int len=strlen(s);
for(i=0;i<len;i++){
if(s[i]=='\n')
lines++;
if(s[i]=='\t'||s[i]=='\n'||s[i]==' ')
words++;
if(s[i]!='\n')
count++;
}
printf("\nno.of lines:%d",lines+1);
printf("\nno.of words:%d",words+1);
printf("\nno.of characaters:%d",count);
return 0;
}