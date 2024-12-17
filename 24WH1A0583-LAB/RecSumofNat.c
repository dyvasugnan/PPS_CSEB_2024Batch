#include<stdio.h>
int SumofNat(int);
int main(){
int n=5,sum;
sum=SumofNat(n);
printf("%d",sum);
}
int SumofNat(int n){
if(n==1)
return 1;
return n+SumofNat(n-1);
}
