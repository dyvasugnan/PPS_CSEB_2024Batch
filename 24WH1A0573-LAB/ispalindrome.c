#include<stdio.h>
#include<string.h>
   int ispalindrome(char str[])
{
       int i,n;
      n=strlen(str);
         for(i=0;i<n/2;i++){
            if(str[i]!=str[n-i-1]){
             return 0;
             }
          }
          return 1;
}
     int main()
{ 
      char str [100];
      printf("enter any string:");
      scanf("%s",str);
       if(ispalindrome (str))
        printf("%s is a palindrome \n",str);
      else
        printf("%s is not a palindrome \n",str);
       
      return 0;
}
