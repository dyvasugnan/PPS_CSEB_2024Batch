#include <stdio.h>
#include <string.h>
#include <ctype.h> 

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]); 
    }

    printf("Uppercase string: %s\n", str);

    return 0;
}
