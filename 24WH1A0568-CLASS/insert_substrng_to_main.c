//inserting substring to main string
#include <stdio.h>
#include <string.h>

void insertSubstring(char *mainStr,  char *subStr, int position) {
    int mainLen = strlen(mainStr);
    int subLen = strlen(subStr);

    
    if (position < 0 || position > mainLen) {
        printf("Invalid position.\n");
        return;
    }

    
    for (int i = mainLen; i >= position; i--) {
        mainStr[i + subLen] = mainStr[i];
    }

   
    for (int i = 0; i < subLen; i++) {
        mainStr[position + i] = subStr[i];
    }
}

int main() {
    char mainStr[200]; 
    char subStr[100];
    int position;


    printf("Enter the main string: ");
    scanf("%[^\n]s",mainStr);
    


    printf("Enter the substring to insert: ");
    scanf("%s",subStr);
    

   
    printf("Enter the position to insert the substring: ");
    scanf("%d", &position);

    
    insertSubstring(mainStr, subStr, position);


    printf("Modified string: %s\n", mainStr);

    return 0;
}
