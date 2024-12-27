//factorial using recursion
#include <stdio.h>
int fact(int);
int main() {
   int n;
   scanf("%d",&n);
   printf("%d", fact(n));
    return 0;
}
int fact(int num){
    if (num==1)
    return 1;
return num*fact(num-1);
}
