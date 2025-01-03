//finding variance mean and std_dev
#include <stdio.h>
#include <math.h>
int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    float mean = 0;
    for (int i = 0; i < n; i++) {
        mean += arr[i];
    }
    mean /= n;

    float variance = 0;
    for (int i = 0; i < n; i++) {
        variance += pow(arr[i] - mean, 2);
    }
    variance /= n;

    float std_dev = sqrt(variance);



    printf("\nMean: %.2f", mean);
    printf("\nVariance: %.2f", variance);
    printf("\nStandard Deviation: %.2f", std_dev);
   

    return 0;
}
