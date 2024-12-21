//To calculate the gcd (24wh1a05b1)
#include<stdio.h>
int gcd(int,int);
int main()
{
int num1,num2,res;
printf("enter any two numbers");
scanf("%d %d",&num1,&num2);
res = gcd(num1,num2);
printf("%d",res);
return 0;
}
int gcd(int n1,int n2){
if(n1<n2)
 return gcd(n2,n1);
if(n2 == 0)
 return n1;
 return  gcd(n2,n1%n2);
}

