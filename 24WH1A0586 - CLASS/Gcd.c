//gcd without recursion
#include <stdio.h>

int main() {
    int num1, num2, gcd, remainder;

   
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);


    if (num1 < 0) num1 = -num1;
    if (num2 < 0) num2 = -num2;

    
    while (num2 != 0) {
        remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;
    }

    gcd = num1;

    
    printf("GCD is: %d\n", gcd);

    return 0;
}
