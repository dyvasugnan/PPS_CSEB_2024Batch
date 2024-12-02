//sum of first n natural numbers
#include<stdio.h>
int sum_of_n_naturalnumbers(int);
int main(){
	int number,sum=0;
	printf("enter any number");
	scanf("%d",&number);
	sum=sum_of_n_naturalnumber(number);
	printf("sum:%d \n",sum);
	return 0;
}
int sum_of_n_naturalnumber(int number){
	int sum=0,i;
	for(i=1;i<=number;i++)
	sum+=i;
	return sum;
}
