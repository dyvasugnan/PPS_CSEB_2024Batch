#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("my_file.txt", "a"); 

    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    fprintf(fp, "This is appended text.\n"); 

    fclose(fp);

    printf("Data appended to file successfully.\n");

    return 0;
}
