// factorial of number
#include<stdio.h>
int factorialofnumber(int);
int main(){
	int n,fact;
	printf("enter any number\n");
	scanf("%d",&n);
	fact=factorialofnumber(n);
	printf("%d",fact);
	return 0;
}
	int factorialofnumber(int n){
		if(n==1)
		return 1;
		return n*factorialofnumber(n-1);
	}
	

