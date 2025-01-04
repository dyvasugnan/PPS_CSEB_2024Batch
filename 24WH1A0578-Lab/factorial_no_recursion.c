//factorial number using recursion
#include <stdio.h>
 int fact_no(int)
  int main(){
    int n,factorial;
    printf("enter a number");
    scanf("%d",&n);
    factorial=fact_no(n);
    printf("%d",factorial);
}
 int fact_no(int n){
    if(n==1){
        return 0;
    }
        return n * fact_no(n-1);
    }
    
