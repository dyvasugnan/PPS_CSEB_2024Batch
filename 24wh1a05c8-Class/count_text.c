//To count the lines, words and characters in a text
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void countTextAttributes(char *text, int *lines, int *words, int *characters) {
    char ch;
    int inWord = 0;
    
    while ((ch = *text++) != '\0') {
        (*characters)++;
        
        if (ch == '\n') {
            (*lines)++;
        }
        
        if (isspace(ch)) {
            if (inWord) {
                inWord = 0;
                (*words)++;
            }
        } else {
            inWord = 1;
        }
    }

    if (inWord) {
        (*words)++;
    }
}

int main() {
    char text[1000];
    int lines = 0, words = 0, characters = 0;

    printf("Enter text (type '#' to stop):\n");

    while (1) {
        if (scanf("%[^\n]%*c", text) != 1) {
            break;  
        }

        if (strcmp(text, "#") == 0) {
            break;
        }

        countTextAttributes(text, &lines, &words, &characters);

        lines++;
    }

    printf("Lines: %d\n", lines);
    printf("Words: %d\n", words);
    printf("Characters: %d\n", characters);

    return 0;
}
