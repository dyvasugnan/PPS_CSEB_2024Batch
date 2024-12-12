#include<stdio.h>
#include"calc.c"
#include<stdbool.h>
int main(){
	int a=9,b=10,res;
	bool x;
	res=add(a,b);
	printf("%d \n",res);
	x=isprime(res);
	if(x)
	printf("prime");
	else
	printf("not");
	return 0;
}
