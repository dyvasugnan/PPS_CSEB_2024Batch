#include <stdio.h>
#include <string.h>

int main() {
    char str = "Hello, world!";
    char ch = 'o';
    char *ptr = strchr(str, ch); 

    if (ptr != NULL) {
        printf("Character '%c' found at position %ld.\n", ch, ptr - str + 1); 
    } else {
        printf("Character '%c' not found.\n", ch);
    }

    return 0;
}
