//string palindrome or not
#include<stdio.h>
#include<string.h>
int palindrome_str(char []);
int main(){
   int x;
    char ch[5];
  printf("enter any string\n");
  scanf("%s",ch);
 x=palindrome_str(ch);
  if(x==0)
    printf("string is palindrome\n");
  else
      printf("not palindrome\n");}
int palindrome_str(char ch[5]){
      int i;
      int x;
     char temp1[5],temp2[5];
   for(i=0;i<5;i++)
        temp1[i]=ch[i];
    for(i=5;i>=0;i--)
         temp2[i]=ch[i];
   x=strcmp(temp1,temp2);
   return x;}

