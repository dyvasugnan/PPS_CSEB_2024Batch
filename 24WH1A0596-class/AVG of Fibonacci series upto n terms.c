//Finding average of Fibonacci series upto nth term
#include <stdio.h>
float fibonacciAverage(int);
int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Average of Fibonacci series up to %d terms is: %.2f\n", n, fibonacciAverage(n));
    return 0;
}
float fibonacciAverage(int n) {
    int a = 0, b = 1;
    float sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += a;
        int temp = a + b;
        a = b;
        b = temp;
    }
    return sum / (float)n;
}