//x power n using recursion
#include stdio.h>
int power(int,int);
int main() {
    int x, n, result;
    printf("Enter base number: ");
    scanf("%d", &x);
    printf("Enter power number: ");
    scanf("%d", &n);
    result = power(x,n);
    printf(" %d",result);
    return 0;
}

int power(int base, int a) {
    if (a == 0)
       return 1;
      return (base * power(base, a - 1));
}
