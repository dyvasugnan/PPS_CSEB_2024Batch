#include <stdio.h>
#include <string.h>
#include <ctype.h>
void preprocessString(char *str, char *processed) {
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalnum(str[i])) {
            processed[j++] = tolower(str[i]);
        }
    }
    processed[j] = '\0';
}
int isPalindrome(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return 0; 
        }
    }
    return 1; 
}
int main() {
    char input[100], processed[100];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';
    preprocessString(input, processed);
    if (isPalindrome(processed)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}
