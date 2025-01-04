#include <stdio.h>

int main() {
    int num1, num2;
    int sum, difference, product, quotient, remainder;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    if (num2 == 0) {
        printf("Error: Division by zero is not allowed.\n");
        quotient = 0; 
    } else {
        quotient = num1 / num2;
    }

    remainder = num1 % num2;
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}
