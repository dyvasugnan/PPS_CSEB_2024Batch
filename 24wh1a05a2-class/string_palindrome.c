#include <stdio.h>
#include <string.h>
#include <stdbool.h>
  bool str_pailndrome(char str[],int n){
      int count=0;
      for(int i=0;i<n/2;i++){
          if(str[i]==str[(n-1)-i])
             count++;
      }
     return(count==n/2);
  }
int main() {
    char str[100];
    scanf("%s",str);
    int n=strlen(str);
   if(str_pailndrome(str,n)==1)
        printf("string is a palindrome");
   else
        printf("string is  not a palindrome");
    return 0;
}