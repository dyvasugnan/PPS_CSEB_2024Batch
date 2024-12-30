//Multiplication table
#include<stdio.h>
int main(){
	int num, row;
	printf("Enter number and rows: ");
	scanf("%d %d",&num,&row);
	for(int i = 1;i <= row;i ++){
		printf("%d * %d = %2d\n",num, i, num * i);
		
	}
	return 0;
}
