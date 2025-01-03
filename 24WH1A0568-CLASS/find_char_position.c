#include <stdio.h>

int find_char_position(char s[], char ch) {
    int i = 0;
   
    while (s[i] != '\0') {
        if (s[i] == ch) {
            return i; 
        }
        i++;
    }
    return -1; 
}
//finding char position in a string
int main() {
    char s[100], ch;
    
    
    printf("Enter a string: ");
 
    scanf("%[^\t]s",s);
   
    printf("Enter character to search for:\n");
     fflush(stdin);
    scanf("%c", &ch);

    int position = find_char_position(s, ch);
    
    if (position != -1) {
        printf("Character '%c' found at position %d.\n", ch, position);
    } else {
        printf("Character '%c' not found in the string.\n", ch);
    }
    
    return 0;
}
