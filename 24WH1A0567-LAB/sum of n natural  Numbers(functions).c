//sum of n natural numbers 
#include<stdio.h>
int sumofNNumbers(int);

int main () {
 int sum= sumofNNumbers(10);
printf("%d",sum);
return 0;
}




int sumofNNumbers(int n) {
int sum=(n*(n+1))/2;
return sum;
}

