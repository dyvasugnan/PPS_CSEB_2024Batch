#include <stdio.h>  
#include <string.h>  

void insertSubstring(char mainString[], char substring[], int position) {  
 
    int mainLength = strlen(mainString);  
    int subLength = strlen(substring);  
  
    char newString[100];  

    if (position < 0 || position > mainLength) {  
        printf(" Invalid position\n");  
        return;  
    }  

    strncpy(newString, mainString, position);  
    newString[position] = '\0'; 
    strcat(newString, substring);  
    strcat(newString, mainString + position);  

    printf("Resulting string: %s\n", newString);  
}  

int main() {  
    char mainString[100];
    printf("enter the main string:");
    scanf("%s",mainString);
    char substring[50];
     printf("enter the sub string:");
    scanf("%s",substring);
    int position;
     printf("enter the position:");
    scanf("%d",&position);

    insertSubstring(mainString, substring, position); // Call the function  

    return 0;  
}
