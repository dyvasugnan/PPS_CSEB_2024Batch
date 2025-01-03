#include <stdio.h>
#include <string.h>
void deleteCharacters(char *str, int position, int n) {
    int length = strlen(str);
    if (position < 0 || position >= length || n < 0) {
        printf("Invalid position or number of characters to delete.\n");
        return;
    }
    if (position + n > length) {
        n = length - position;
    }
    for (int i = position; i <= length - n; i++) {
        str[i] = str[i + n];
    }
}
int main() {
    char str[100];
    int position, n;
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 
    printf("Enter the position to delete characters: ");
    scanf("%d", &position);
    printf("Enter the number of characters to delete: ");
    scanf("%d", &n);
    deleteCharacters(str, position, n);
    printf("Resulting string: %s\n", str);
    return 0;
}
