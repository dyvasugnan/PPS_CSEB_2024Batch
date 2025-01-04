//to find mean,variance and standard deviation
#include <stdio.h>
#include <math.h>//for root
int main() {
    int n;
    printf("Enter no. of elements in array:\n");
    scanf("%d", &n);
    int array[n];
    printf("Enter %d integers:\n", n);
     for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
  //mean
    float mean = 0;
     for (int i = 0; i < n; i++) {
        mean += array[i];
    }
    mean /= n;
  //variance
   float variance = 0;
    for (int i = 0; i < n; i++) {
        variance += pow(array[i] - mean, 2);
    }
    variance /= n;
  //standard deviation
    float std_dev = sqrt(variance);
  //output
    printf("\nMean: %.2f", mean);
    printf("\nVariance: %.2f", variance);
    printf("\nStandard Deviation: %.2f", std_dev);
    return 0;
}
