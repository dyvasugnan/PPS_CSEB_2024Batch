#include <stdio.h>

int gcd(int n1, int n2) {
    if (n2 == 0)
        return n1;
    return gcd(n2, n1 % n2);
}

int main() {
    int n1, n2, result;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    
    result = gcd(n1, n2);
    printf("GCD of %d and %d is %d\n", n1, n2, result);
    
    return 0;
}

