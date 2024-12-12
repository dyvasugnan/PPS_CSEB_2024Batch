// using auto storage class //

#include<stdio.h>
void func();
int main(){
	int i;
	for(i=1;i<=5;i++){
		func();
	}
	return 0;
}
void func(){
	auto int x=0;
	printf("%3d",x);
	x++;
}