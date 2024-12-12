#include<stdio.h>
void fun();
int main()
{
	int i=1;
	for(i=1;i<=10;i++){
		fun();
	}
		return 0;
}
void fun(){
	static int x=0;
	printf("%d",x);
	x++;
}
