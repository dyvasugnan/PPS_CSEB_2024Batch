//to find greatest common devisor using recursions
#include<stdio.h>

int gcd(int,int );
int main(){
int n1,n2,n3;
printf("enter n1:\n");
scanf("%d",&n1);
printf("enter n2:\n");
scanf("%d",&n2);
n3=gcd(n1,n2); //calling
printf("GCD of%dand %dis %d\n",n1,n2,n3);
return 0;
}
int gcd(int n1,int n2){
if (n2==0){
 return n1;
 }
 return gcd(n2,n1%n2);
}
