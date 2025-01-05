#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int decimal = 0, i, rem;

    printf("Enter a binary number: ");
    scanf("%d", &n);
    
    while (n != 0) {
        rem = n % 10;
        n /= 10;
        decimal += rem * pow(2, i);
        ++i;
    }
    
    printf("Decimal number: %d\n", decimal);
    
    return 0;
}

