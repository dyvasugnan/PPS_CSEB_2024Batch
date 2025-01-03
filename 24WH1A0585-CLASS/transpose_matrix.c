#include <stdio.h>
#include <stdlib.h>
void input_matrix(int** matrix, int rows, int cols) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}
void display_matrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
void transpose_matrix(int** matrix, int** transposed, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = matrix[i][j];  
        }
    }
int main() {
    int rows, cols;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);
    int** matrix = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int*)malloc(cols * sizeof(int));
    }
    int** transposed = (int**)malloc(cols * sizeof(int*));
    for (int i = 0; i < cols; i++) {
        transposed[i] = (int*)malloc(rows * sizeof(int));
    }
    input_matrix(matrix, rows, cols);
    transpose_matrix(matrix, transposed, rows, cols);
    printf("\nOriginal Matrix:\n");
    display_matrix(matrix, rows, cols);
    printf("\nTransposed Matrix:\n");
    display_matrix(transposed, cols, rows);
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
    for (int i = 0; i < cols; i++) {
        free(transposed[i]);
    }
    free(transposed);
    return 0;
}
