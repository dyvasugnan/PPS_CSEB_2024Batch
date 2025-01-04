#include <stdio.h>

int main() {
    FILE *fp;
    char line[100];

    fp = fopen("my_file.txt", "r"); 

    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    while (fgets(line, 100, fp) != NULL) {
        printf("%s", line); 
    }

    fclose(fp);

    return 0;
}
