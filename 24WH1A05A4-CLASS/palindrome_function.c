//to check whether the given number is a palindrome or not using functions
#include<stdio.h>
#include<stdbool.h>
bool palindrome(int);
int main(){
	int n;
	bool x;
	printf("enter any number");
	scanf("%d",&n);
	x=palindrome(n);
	printf("%d",x);
	return 0;
}
bool palindrome(int n){
	int rem,sum=0,temp;
	temp=n;
	while(n!=0){
		rem=n%10;
		n=n/10;
		sum=sum*10+rem;
	}
	if(temp==sum)
	return true;
	else
	return false;
}
