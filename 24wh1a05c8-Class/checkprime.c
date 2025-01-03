//Prime
#include<stdio.h>
int main(){
	int num, count;
	printf("Enter number: ");
	scanf("%d",&num);
	for(int i = 2;i <= num / 2;i ++){
		if(num % i == 0)
			count++;
	}
	if(count)
		printf("Not a prime number\n");
	else
		printf("Prime number\n");
	return 0;
}
