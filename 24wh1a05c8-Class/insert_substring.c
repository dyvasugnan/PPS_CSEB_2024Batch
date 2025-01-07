//Insert a substring into a main string
#include <stdio.h>
#include <string.h>

void insertSubstring(char *str1, const char *str2, int pos) {
    int i, j;

    int str1Len = strlen(str1);
    int str2Len = strlen(str2);

    if (pos > str1Len) {
        pos = str1Len;
    }

    for (i = str1Len - 1; i >= pos; i--) {
        str1[i + str2Len] = str1[i];
    }

    for (i = pos, j = 0; j < str2Len; i++, j++) {
        str1[i] = str2[j];
    }

    str1[str1Len + str2Len] = '\0';
}

int main() {
    char str1[100], str2[50];
    int pos;

    printf("Enter the main string (without spaces): ");
    scanf("%s", str1);  

    printf("Enter the substring to insert (without spaces): ");
    scanf("%s", str2);  

    printf("Enter the position to insert the substring: ");
    scanf("%d", &pos); 

    insertSubstring(str1, str2, pos);

    printf("Updated string: %s\n", str1);

    return 0;
}
