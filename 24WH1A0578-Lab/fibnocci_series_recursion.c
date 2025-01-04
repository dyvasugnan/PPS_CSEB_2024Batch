//fibnocci series using recursion
#include <stdio.h>
 int fibnocci_Series(int)
  int main(){
    int n,fib;
    printf("enter a number");
    scanf("%d",&n);
    fib=fibnocci_Series(n);
    printf("%d",fib);
}
 int fibnocci_Series(int n){
    if(n==1){
        return 0;
    }
  return  fibnocci_Series(n-1)+fibnocci_Series(n-2);
    }
