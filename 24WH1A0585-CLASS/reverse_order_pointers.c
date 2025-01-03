#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    int *ptr = arr;
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", ptr + i); 
    }
    printf("\nThe elements in reverse order are:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    return 0;
}
