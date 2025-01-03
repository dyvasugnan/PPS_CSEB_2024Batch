#include <stdio.h>
void add_arrays(int arr1[], int arr2[], int result[], int n) {
    for (int i = 0; i < n; i++) {
        result[i] = arr1[i] + arr2[i];
    }
}
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr1[n], arr2[n], result[n];
    printf("Enter the elements of the first array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the elements of the second array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }
    add_arrays(arr1, arr2, result, n);
    printf("Resultant array after addition:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    return 0;
}
