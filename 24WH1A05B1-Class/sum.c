// sum of natural numbers
#include<stdio.h>
int sumofnatural(int n);
int main(){
	int n,sum;
	printf("enter any number \n");
	scanf("%d",&n);
	sum=sumofnatural(n);
	printf("%d \n",sum);
}
int sumofnatural(int n){
	if(n==1)
	return 1;
	return n+sumofnatural(n-1);
}
