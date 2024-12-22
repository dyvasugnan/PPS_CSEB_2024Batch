//GCD calculation using Recursion
#include<stdio.h>
int gcd(int , int);
int main () {
	int num1,num2,res;
	printf("Enter any two numbers");
	scanf("%d %d",&num1,&num2);
	res = gcd(num1,num2);
        printf("gcd of %d and %d is:%d",num1,num2,res);
        return 0;
        }
int gcd(int n1,int n2){
	if(n1 % n2 == 0)
	return n2;
        return(n2 , n1 % n2);
}
