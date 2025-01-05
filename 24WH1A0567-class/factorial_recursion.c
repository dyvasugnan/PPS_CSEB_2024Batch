#include<stdio.h>
  int fact(int);
  int main(){
  int n;
  printf("enter any integer");
  scanf("%d",&n);
  printf("%d",fact(n));
  return 0;
  }
  int fact(int n){
      int fact =n*fact(n-1);
          return fact;
      }
