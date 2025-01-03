#include <stdio.h>
void findSmallest(int arr[], int n) {
    int smallest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    printf("The smallest number is: %d\n", smallest);
}
void findLargest(int arr[], int n) {
    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    printf("The largest number is: %d\n", largest);
}
void findSum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("The sum of the numbers is: %d\n", sum);
}
void findAverage(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("The average of the numbers is: %.2f\n", (float)sum / n);
}
int main() {
    int n, choice;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid number of elements.\n");
        return 1;
    }
    int arr[n];
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
       scanf("%d", &arr[i]);
    }
    do {
        printf("\nMenu:\n");
        printf("1. Find Smallest\n");
        printf("2. Find Largest\n");
        printf("3. Find Sum\n"); 
        printf("4. Find Average\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                findSmallest(arr, n);
                break;
            case 2:
                findLargest(arr, n);
                break;
            case 3:
                findSum(arr, n);
                break;
            case 4:
                findAverage(arr, n);
                break;
            case 5:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);
    return 0;
}
