//sum of natural numbers number using recursion
#include <stdio.h>
 int sum_of_natural_nos(int)
  int main(){
    int n,sum;
    printf("enter a number");
    scanf("%d",&n);
    sum=sum_of_natural_nos(n);
    printf("%d",sum);
}
 int sum_of_natural_nos(int n){
    if(n==1){
        return 0;
    }
        return n * sum_Of_natural_nos(n-1);
    }
    

     
