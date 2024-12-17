//to find greatest common divisor using recursion
#include<stdio.h>
int gcd(int n1,int n2);
int main(){
int n1,n2;
printf("enter n1:\n");
scanf("%d",&n1);
printf("enter n2:\n");
scanf("%d",&n2);
gcd(n1,n2);
printf("GCD of %d and %d id %d\n",n1,n2,gcd(n1,n2));
return 0;
}
int gcd(int n1,int n2){
if(n2==0){
return n1;
}
return gcd(n2,n1%n2);
}

