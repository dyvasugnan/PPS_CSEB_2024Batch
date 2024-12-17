// nth term of fibonacci using recursion //

#include <stdio.h>
int fib_nth_term (int);
int main(){
    int n, fib;
    printf ("Enter any term needed\n");
    scanf ("%d", &n);
    fib = fib_nth_term (n);
    printf ("%d", fib);
}
int fib_nth_term (int n){
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fib_nth_term (n-1) + fib_nth_term (n-2);
}