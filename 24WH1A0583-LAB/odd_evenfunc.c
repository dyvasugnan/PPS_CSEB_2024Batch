#include<stdio.h>

int OddorEven(int);
int main(){
int n;
printf("enter a number:\n");
scanf("%d",&n);
OddorEven(n);
return 0;
}
int OddorEven(int n){
if(n%2==0)
printf("It is even");
else
printf("It is odd");
}

