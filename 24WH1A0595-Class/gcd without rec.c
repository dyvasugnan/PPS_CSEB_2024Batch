#include <stdio.h>
int gcd(int, int);
int main() {
   int n1;
   int n2;
   printf("enter any 2 integers:");
   scanf("%d%d",&n1,&n2);
  printf("%d", gcd(n1,n2));
    return 0;
}
int gcd(int num1,int num2){
    int i;
    if(num1>num2){
    for(i=num2;i>=1;i--){
     if(num1%i==0 && num2%i==0){
     return i;}
    }}
      if(num2>num1){
    for(i=num1;i>=1;i--){
     if(num1%i==0 && num2%i==0){
     return i;}
    }}}
