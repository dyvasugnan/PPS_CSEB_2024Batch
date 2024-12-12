//to find gcd of a number using fuction
#include<stdio.h>
int gcd(int,int);
int main(){
	int num1,num2,res;
	printf("enter two numbers");
	scanf("%d%d",&num1,&num2);
	res=gcd(num1,num2);
	printf("%d",res);
	return 0;
}
int gcd(int n1,int n2){
	int temp;
	while(n2!=0){
	temp=n2;
	n2=n1%n2;
	n1=temp;
    }
    return n1;
}
