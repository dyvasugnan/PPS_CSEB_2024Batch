#include <stdio.h>
void multiply_matrices(int A[][10], int B[][10], int C[][10], int rowA, int colA, int rowB, int colB) {
    if (colA != rowB) {
        printf("Matrix multiplication is not possible. Number of columns of A must equal number of rows of B.\n");
        return;
    }
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colB; j++) {
            C[i][j] = 0;
            for (int k = 0; k < colA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}
void input_matrix(int matrix[][10], int rows, int cols) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}
void display_matrix(int matrix[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int A[10][10], B[10][10], C[10][10];
    int rowA, colA, rowB, colB;
    printf("Enter the number of rows and columns for matrix A: ");
    scanf("%d %d", &rowA, &colA);
    input_matrix(A, rowA, colA);
    printf("Enter the number of rows and columns for matrix B: ");
    scanf("%d %d", &rowB, &colB);
    input_matrix(B, rowB, colB);
    multiply_matrices(A, B, C, rowA, colA, rowB, colB);
    printf("Result of multiplication:\n");
    display_matrix(C, rowA, colB);
    return 0;
}
