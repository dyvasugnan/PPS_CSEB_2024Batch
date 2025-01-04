#include<stdio.h>
#include<string.h>
//palindrome or not a palindrome
void ispalindrome (char str[20]);//declaration of function
int main(){
    char str[20];
    printf("enter a word\n");
    scanf("%s",&str);
    ispalindrome(str); //calling of function
    return 0;
}
void ispalindrome (char str[]){ //body of the function
int len=strlen(str);
int i;
for(i=0;i<len/2;i++){
    if(str[i]!=str[len-1-i]){
        printf("not a palindrome\n");
        return; //returns to main function if the condition is true
    }
} printf("is a palindrome\n"); //executes if the above condition is false
}
