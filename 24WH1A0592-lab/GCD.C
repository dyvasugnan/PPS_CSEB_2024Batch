//GCD of two numbers without recursion 
#include<stdio.h>
int main(){
int a,b,gcd,temp;
printf("enter a b values: ");
scanf("%d%d",&a,&b);
while(a%b!=0){
temp=a%b;
a=b;
b=temp;
}
printf("GCD of a,b is:%d",b);
return 0;
}
