//function to concatenate two strings using pointers
#include<stdio.h>
void concatenate (char*,char*);
int main(){
char str1[20]="Hello ";
char str2[20]="How are you?";
printf("string1 is : %s\n",str1);
printf("string2 is : %s\n",str2);
concatenate(str1,str2);
printf("concatenated string is :%s\n",str1);
return 0;
}
void concatenate(char *str1,char *str2){
while(*str1!='\0'){
str1++;
}
while(*str2!='\0'){
*str1=*str2;
str1++;
str2++;
}
*str1='\0';
}