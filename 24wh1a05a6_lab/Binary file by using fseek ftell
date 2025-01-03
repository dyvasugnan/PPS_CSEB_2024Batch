#include <stdio.h>

#include <stdlib.h>

int main(int argc, char *argv[])

{

if (argc != 12) {

printf("Usage: %s <filename> <num1> <num2> ... <num10>\n",

argv[0]); return 1;

}

FILE *file = fopen(argv[1], "wb");

if (file == NULL) {

printf("Error creating file: %s\n", argv[1]);

}

for (int i = 2; i < argc; i++) {

int num = atoi(argv[i]);fwrite(&num, sizeof(int), 1, file);

}

fclose(file);

file = fopen(argv[1], "rb+");

if (file == NULL) {

printf("Error opening file: %s\n", argv[1]);

}

int index, newValue;

printf("Enter the index (0-9) to update: ");

scanf("%d", &index);

if (index < 0 || index >= 10) {

printf("Invalid index. Index should be between 0

and 9.\n"); fclose(file);

return 1;

}

printf("Enter the new value: ");

scanf("%d", &newValue);

fseek(file, index * sizeof(int), SEEK_SET);

fwrite(&newValue, sizeof(int), 1, file);

fseek(file, 0, SEEK_SET);

printf("Updated values in the file:\n");

int readValue;

while (fread(&readValue, sizeof(int), 1, file) == 1) {
printf("%d\n", readValue);

}

fclose(file);

}

