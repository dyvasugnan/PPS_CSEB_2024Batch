#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int i, j, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str) - 1; 

    for (i = 0, j = len; i <= len; i++, j--) {
        rev[i] = str[j];
    }

    rev[len + 1] = '\0';

    printf("Reversed string: %s\n", rev);

    return 0;
}
