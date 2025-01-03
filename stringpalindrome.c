//find whether the given string is palindrome or not
//using another string and few built-in of strings
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool ispalindrome(char[]);
int main(){
    char str[100];
    int n;//n=length of the string
    scanf("%s",str);
    n=strlen(str);
    bool x;
    x=ispalindrome(str);
    if(x==1){
        printf("%s is palindrome",str);
    }
    else{
        printf("%s is not a palindrome",str);
    }
    return 0;
}

bool ispalindrome(char s[]){
    int num=strlen(s);
    char rev_s[num];
    for(int j=0;j<num;j++){
        rev_s[j]=s[num-1-j];
              }
              int result=strcmp(s,rev_s);
              if(result==0){
                return 1;
              }
               else{
                return 0;
               }
}
