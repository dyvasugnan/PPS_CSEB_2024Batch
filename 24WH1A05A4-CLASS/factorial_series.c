//to calculate the sum of 1!/1 +2!/2 +3!/3......+n!/n
#include<stdio.h>
int factorial_sum(int);
int main(){
	int n,res;
	printf("enter any number");
	scanf("%d",&n);
	res=factorial_sum(n);
	printf("%d",res);
}
int factorial_sum(int n){
	int i,sum=0,prod=1,j;
	for(i=n;i>=1;i--){
		prod=1;
		for(j=1;j<=i;j++){
			prod=prod*j;
		}
		sum=sum+prod/i;
	}
	return sum;
}

