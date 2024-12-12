// sum of natural numbers using Recursion//

#include<stdio.h>
int sumOfNatural(int);
int main(){
	int n,sum;
	printf("Enter any number \n");
	scanf("%d",&n);
	sum=sumOfNatural(n);
	printf("Sum=%d \n",sum);
}
int sumOfNatural(int n){
	if(n==1)
	    return 1;
	return n+sumOfNatural(n-1);
}
