#include<stdio.h>
int main() {
  int i;
  char str[5]="bvrit";
  char n;
  printf("enter n value ") ;
  scanf("%c", &n) ;
       for(i=0;i<n;i++) 
          if(str[i]==n) 
             printf("%d", i) ;
               return 0;
               }