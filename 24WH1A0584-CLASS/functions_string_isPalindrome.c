//function to find whether string is palindrome or not//
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool isPalindrome(char[]);
int main(){
    char str[20];
    printf("Enter any string\n");
    scanf("%s",str);
    bool x=isPalindrome(str);
    if(x)
        printf("It is a palindrome\n");
    else
        printf("It is not a palindrome\n");
    return 0;
}
bool isPalindrome(char str[20]){
    int i,len=strlen(str);
    for(i=0;i<len/2;i++){
        if(str[i]!=str[len-i-1]){
            return false;
        }
    }
    return true;
}
