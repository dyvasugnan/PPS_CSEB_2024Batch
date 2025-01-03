#include <stdio.h>
int main() {
    int n, i;
    int sum = 0;
    int min, max;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; 
    }
    min = arr[0];
    max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    double average = (double)sum / n;
    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);
    printf("Average value: %.2f\n", average);
    return 0;
}
