#include<stdio.h>

int main()
{
  int length=0,i;
  char name[20];
  printf("enter character") ;
  scanf("%c", name) ;
  for(i=0;name[i]!='\0';i++){
           length++;
           }
           printf("%d", length) ;
           return 0;
}