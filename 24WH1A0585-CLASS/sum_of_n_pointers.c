#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    int *ptr = arr;
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", ptr + i); 
    }
    for (int i = 0; i < n; i++) {
        sum += *(ptr + i); 
    }
    printf("The sum of the elements is: %d\n", sum);
    return 0;
}
