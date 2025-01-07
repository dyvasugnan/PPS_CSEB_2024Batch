//Display position of character in a string
#include <stdio.h>

int findCharPosition(char S[], char ch) {
    int i = 0;
    while (S[i] != '\0') {
        if (S[i] == ch) {
            return i;
        }
        i++;
    }
    return -1; 
}

int main() {
    char S[100], ch;

    printf("Enter a string: ");
    scanf("%[^\n]%*c", S); 

    printf("Enter a character: ");
    scanf("%c", &ch);

    int position = findCharPosition(S, ch);
    printf("Position: %d\n", position);

    return 0;
}

