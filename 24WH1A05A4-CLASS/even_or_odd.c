//function to check whether the given number is even or odd
#include<stdio.h>
#include<stdbool.h>
bool even_or_odd(int);
int main(){
	int n;
	bool res;
	printf("enter any number");
	scanf("%d",&n);
	res=even_or_odd(n);
	if(res==1)
	printf("%d is a even number",n);
	else
	printf("%d is a odd number",n);
	return 0;
	
}
bool even_or_odd(int n){
	if(n%2==0)
	return 1;
	return 0;
}
