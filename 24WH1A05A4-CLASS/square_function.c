//function to find square of a number
#include<stdio.h>
int squareofanumber(int);
int main(){
	int n,res;
	printf("enter the number");
	scanf("%d",&n);
	res=squareofanumber(n);
	printf("The square of %d is %d",n,res);
	return 0;
}
int squareofanumber(int n){
	return n*n;
}
