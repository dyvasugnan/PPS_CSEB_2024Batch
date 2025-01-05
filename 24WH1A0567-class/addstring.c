#include<stdio.h>
#include<string.h>
int main () {
char str1[]="abcf";
char str2[]="de";
int len1=strlen(str1);
int len2=strlen(str2);
int pos;
printf("enter position to add");
scanf("%d",&pos);
int j=0;
for(int i=len1;i>=0;i--) {
if (i>=pos) {
str1[i+len2]=str1[i];
}
}
for(int i=0;i<len2;i++) {
str1[i+pos]=str2[j];
j++;
}

printf("%s",str1);
return 0;
}
