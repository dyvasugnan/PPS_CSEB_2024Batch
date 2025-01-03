#include <stdio.h>
#include <string.h>
void insertSubstring(char *mainStr, char *subStr, int position, char *result) {
    int mainLen = strlen(mainStr);
    int subLen = strlen(subStr);
    if (position < 0 || position > mainLen) {
        printf("Invalid position.\n");
        return;
    }
    strncpy(result, mainStr, position);
    result[position] = '\0'; 
    strcat(result, subStr);
    strcat(result, mainStr + position);
}
int main() {
    char mainStr[100], subStr[50], result[150];
    int position;
    printf("Enter the main string: ");
    fgets(mainStr, sizeof(mainStr), stdin);
    mainStr[strcspn(mainStr, "\n")] = '\0'; 
    printf("Enter the substring to insert: ");
    fgets(subStr, sizeof(subStr), stdin);
    subStr[strcspn(subStr, "\n")] = '\0'; 
    printf("Enter the position to insert the substring: ");
    scanf("%d", &position);
    insertSubstring(mainStr, subStr, position, result);
    printf("Resulting string: %s\n", result);
    return 0;
}
