#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];

    fp = fopen("my_file.txt", "w"); 

    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1); 
    }

    printf("Enter your name: ");
    scanf("%s", name);

    fprintf(fp, "Hello, %s!\n", name); 

    fclose(fp); 

    printf(" file created  successfully.\n");

    return 0;
}
