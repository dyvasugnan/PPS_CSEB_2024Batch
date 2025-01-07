//To count characters in a file
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main() {
    FILE *fp1;
    char ch, f[100], c;
    int ct = 0;
    char text[500]; 

    printf("Enter the file name to create and write content into: ");
    scanf("%s", f);

    fp1 = fopen(f, "w");
    if (fp1 == NULL) {
        printf("Error creating the file.\n");
        return 1;  
    }

    printf("Enter the text to write into the file:\n");
    getchar();  
    fgets(text, sizeof(text), stdin); 

    fprintf(fp1, "%s", text);
    fclose(fp1);  
    fp1 = fopen(f, "r"); 
    if (fp1 == NULL) {
        printf("Error opening the file for reading.\n");
        return 1; 
    }

    printf("Enter character to count occurrences (case-insensitive): ");
    scanf(" %c", &c);

    c = tolower(c);

    while ((ch = fgetc(fp1)) != EOF) {
        if (tolower(ch) == c) {
            ++ct; 
        }
    }

    fclose(fp1);

    printf("The character '%c' appears %d times in the file.\n", c, ct);

    return 0;
}

