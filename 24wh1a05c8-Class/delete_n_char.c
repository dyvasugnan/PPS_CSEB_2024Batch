//To delete n characters from a string
#include <stdio.h>
#include <string.h>

void deleteSubstring(char *str, int position, int n) {
    int len = strlen(str);

    if (position >= len) {
        printf("Position is beyond the string length.\n");
        return;
    }

    if (position + n > len) {
        n = len - position;
    }

    for (int i = position; i < len - n; i++) {
        str[i] = str[i + n];
    }

    str[len - n] = '\0';
}

int main() {
    char str[100];
    int position, n;

    printf("Enter the string: ");
    scanf("%s", str); 

    printf("Enter the position to start deletion: ");
    scanf("%d", &position);
    printf("Enter the number of characters to delete: ");
    scanf("%d", &n);

    deleteSubstring(str, position, n);

    printf("Updated string: %s\n", str);

    return 0;
}

