#include<stdio.h>
int Fact(int);
int main(){
int n=5,fact;
fact=Fact(n);
printf("%d",fact);
}
int Fact(int n){
if(n==1)
return 1;
return n*Fact(n-1);
}

