//Factorial using recursion
#include<stdio.h>
int factorial(int num){
	if(num == 0)
		return 1;
	else
		return num * factorial(num - 1);
}
int main(){
	int num,i,fact;
	printf("Enter number: ");
	scanf("%d",&num);
	
	fact = factorial(num);
	printf("Factorial is %d\n",fact);
	
	return 0;
}
