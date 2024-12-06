// 2-D array using pointers in function //
#include<stdio.h>
int row,col;
void printArray(int *arr, int row, int col) {
    int i,j;
    for (i=0;i<row;i++) {
        for (j=0;j<col;j++) {
            printf("%4d",*(arr++));
        }
        printf("\n");
    }
}
int main() {
    int arr[][3] = {1,2,3,4,5,6,7,8,9};
    int row=3,col=3;
    printArray(&arr[0][0],row,col);
    return 0;
}