//length and reverse of a string
#include<stdio.h>
#include<string.h>
int main(){
char name[20];
int i,len;
printf("type your name:\n");
scanf("%s",name);
for(i=0;name[i]!='\0';i++){
len++;
 }
printf("length of given string:%d\n",len);
printf("reverse of name is:");
for(i=len-1;i>=0;i--){
printf("%c",name[i]);
}
return 0;
}
