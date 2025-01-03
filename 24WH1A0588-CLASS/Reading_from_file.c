#include <stdio.h>

int main() {
    FILE *fptr;
    char line[100];

    fptr = fopen("my_file.txt", "r"); 

    if (fptr == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    while (fgets(line, 100, fptr) != NULL) {
        printf("%s", line); 
    }

    fclose(fptr);

    return 0;
}
