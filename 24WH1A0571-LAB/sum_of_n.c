#include<stdio.h>
int sumuptoN(int);
   int main(){
    int number;
    printf("enter number:");
    scanf("%d",&number);
    int result=sumuptoN(number);
    printf("%d",result);
    return 0;
}
 int sumuptoN(int n){
    return n*(n+1)/2;
}
