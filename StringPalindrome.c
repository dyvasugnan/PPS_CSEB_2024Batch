
#include<stdio.h>

#include<stdbool.h>
 bool isPalindrome(char[]);
 int i;
int main(){
  char str[20];
	int n;
bool ch;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("Enter any string :\n");
    
    scanf("%s",str);
   ch=isPalindrome(str);
   if(ch==true)
   printf("Palindrome");
   else 
   printf("Not a Palindrome");
    
    return 0;
}

bool  isPalindrome(char str[]){
     int count=0; 
     while(str[i]!='\0'){
      count++;
      i++;
}
   
   int len=count;
     for(i=0;i<=len/2;i++){
     if(str[i]!=str[len-1-i]){
      return false;

     }
  
     else
     return true;

  } 
 }
 
        
    
