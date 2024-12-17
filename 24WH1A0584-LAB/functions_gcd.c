// finding gcd of two numbers in function //

#include<stdio.h>
int gcd(int,int);
int main(){
	int n1,n2,res;
	printf("Enter any two numbers\n");
	scanf("%d%d",&n1,&n2);
	res=gcd(n1,n2);
	printf("gcd of 2 numbers=%d",res);
	return 0;
}
int gcd(int num1,int num2){
	int temp;
	while(num2!=0){
	    temp=num2;
	    num2=num1%num2;
	    num1=temp;
    }
    return num1;
}