//function to swap a number
#include<stdio.h>
void swap(int*,int*);
int main(){
	int a,b;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	printf("before swapping\n");
	printf("a=%d\nb=%d",a,b);
	swap(&a,&b);
	printf("\nafter swapping\n");
	printf("a=%d\nb=%d",a,b);
	return 0;
}
void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
 
