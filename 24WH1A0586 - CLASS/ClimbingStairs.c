#include <stdio.h>

int climbStairs(int );

int main() {
    int n;
    printf("Enter the number of steps: ");
    scanf("%d", &n);
    
    printf("Number of ways to climb %d steps: %d\n", n, climbStairs(n));
    
    return 0;
}

int climbStairs(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    
    int prev1 = 1, prev2 = 1, current;
    
    for (int i = 2; i <= n; i++) {
        current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }
    
    return prev1;
}
