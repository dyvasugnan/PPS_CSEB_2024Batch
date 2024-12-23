//to convert a decimal number into binary form
#include<stdio.h>
long long int dectobin(int);
int main(){
	int n;
	long long int res;
	printf("enter any number");
	scanf("%d",&n);
	res=dectobin(n);
	printf("binary=%lld",res);
	return 0;
}
long long int dectobin(int n){
	long long int rem,f=1,sum=0;
	while(n!=0){
	   rem=n%2;
	   sum=sum+rem*f;
	   f=f*10;
	   n=n/2;
	}
	return sum;
}
