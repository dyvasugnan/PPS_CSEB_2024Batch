#include<stdio.h>
void transpose(int matrix[][10], int rows, int cols, int transposed[][10]) {
 for (int i = 0; i < cols; i++) {
for (int j = 0; j < rows; j++) {
 transposed[i][j] = matrix[j][i];
}
}
}
void printMatrix(int matrix[][10], int rows, int cols) {
for (int i = 0; i < rows; i++) {
for (int j = 0; j < cols; j++) {
printf("%d ", matrix[i][j]);
}
printf("\n");
}
}

int main() {
int rows, cols;
printf("Enter the number of rows: ");
scanf("%d", &rows);
printf("Enter the number of columns: ");
scanf("%d", &cols);
int matrix[10][10];
printf("Enter the elements of the matrix:\n");
for (int i = 0; i < rows; i++) {
for (int j = 0; j < cols; j++) {
scanf("%d", &matrix[i][j]);
}
}

printf("Original Matrix:\n");
printMatrix(matrix, rows, cols);
int transposed[10][10];
transpose(matrix, rows, cols, transposed);
printf("Transposed Matrix:\n");
printMatrix(transposed, cols, rows);
return 0;
}
