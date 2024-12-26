#include<stdio.h>
#include<string.h>


void deleteCharacters(char *str, int position, int n) {
    int length = strlen(str);
 for (int i = position; i <= length - n; i++) {
        str[i] = str[i + n];
    }
}

int main() {
    char str[100];
    int position, n;
    printf("Enter a string: ");
    scanf("%s",str);
    printf("Enter the position to start deletion: ");
    scanf("%d", &position);

    printf("Enter the number of characters to delete: ");
    scanf("%d", &n);
    deleteCharacters(str, position, n);
    printf("Modified string: %s\n", str);

    return 0;
}

