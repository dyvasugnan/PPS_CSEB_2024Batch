#include <stdio.h>
#include <math.h>
double compute_mean(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (double)sum / n;
}
double compute_variance(int arr[], int n, double mean) {
    double variance = 0;
    for (int i = 0; i < n; i++) {
        variance += pow(arr[i] - mean, 2);
    }
    return variance / n;
}
double compute_standard_deviation(double variance) {
    return sqrt(variance);
}
void sort_array(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    double mean = compute_mean(arr, n);
    double variance = compute_variance(arr, n, mean);
    double std_deviation = compute_standard_deviation(variance);
    sort_array(arr, n);
    printf("\nMean: %.2f\n", mean);
    printf("Variance: %.2f\n", variance);
    printf("Standard Deviation: %.2f\n", std_deviation);
    printf("\nSorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
