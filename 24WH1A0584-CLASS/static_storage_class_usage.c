//using "static" :increasing life time //

#include<stdio.h>
void func();
int main(){
	int i;
	for(i=1;i<=11;i++){
		func();
	}
	return 0;
}
void func(){
	static int x=0;
	printf("%3d",x);
	x++;
}