#include <stdio.h>
int fibonacci(int n) {
    if (n == 1) 
        return 0; 
    if (n == 2)
        return 1; 

  return fibonacci(n - 1)+fibonacci(n - 2); 
    
}

int main() {
    int n; 
    printf("Enter the term (n) to find in the Fibonacci series: ");
    scanf("%d", &n);

           printf("The %d th term in the Fibonacci series is: %d", n, fibonacci(n));
       
return 0;
}
