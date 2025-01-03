#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int sum1, diff1;
    float sum2, diff2;
    int n1, n2;
    float num1, num2;

    scanf("%d%d", &n1, &n2);
    scanf("%f%f", &num1, &num2);

    sum1 = n1 + n2;
    diff1 = n1 - n2;

    printf("%d ", sum1);
    printf("%d\n", diff1);

    sum2 = num1 + num2;
    diff2 = num1 - num2;

    printf("%.1f ", sum2);
    printf("%.1f", diff2);

    return 0;
}