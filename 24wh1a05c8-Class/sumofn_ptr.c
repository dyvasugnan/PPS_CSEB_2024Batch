//Sum of n elements of array using pointer
#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int *ptr = arr;

    for (i = 0; i < n; i++) {
        sum += *(ptr + i);
    }

    printf("The sum of the elements is: %d\n", sum);

    return 0;
}

