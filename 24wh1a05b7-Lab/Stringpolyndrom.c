//string polindrom
#include<stdio.h>
#include<string.h>
int main(){
    
     char str[]={"racecar"};
     int l=0;
     int h =strlen(str)-1;
     while(h>1){
         if(str[l++]!=str[h--]){
             printf("%s is not a polindrome\n",str);
             return 0;
         }
     }
    printf("%s is palindrome",str);
    return 0;
}