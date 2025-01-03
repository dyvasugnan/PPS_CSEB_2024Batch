#include <stdio.h>
#include <ctype.h>
void countText(const char *text, int *lines, int *words, int *characters) {
    *lines = *words = *characters = 0;
    int inWord = 0;
    for (int i = 0; text[i] != '\0'; i++) {
        (*characters)++;
        if (text[i] == '\n') {
            (*lines)++;
        }
        if (isspace(text[i])) {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            (*words)++;
        }
    }
    if (*characters > 0 && text[*characters - 1] != '\n') {
        (*lines)++;
    }
}
int main() {
    char text[1000];
    int lines, words, characters;
    printf("Enter the text (end with an empty line):\n");
    fgets(text, sizeof(text), stdin);
    countText(text, &lines, &words, &characters);
    printf("\nStatistics:\n");
    printf("Lines: %d\n", lines);
    printf("Words: %d\n", words);
    printf("Characters: %d\n", characters);
    return 0;
}
