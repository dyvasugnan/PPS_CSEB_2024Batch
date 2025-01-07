//Multiples of 3 or 5
#include<stdio.h>

int main(){
	int n,sum = 0;
	printf("Enter number: ");
	scanf("%d",&n);
	
	for(int  i = 0; i < n; i++){
		if(i % 3 == 0 || i % 5 == 0)
			sum += i;
			
	}
	printf("Sum: %d",sum);
	
	return 0;
	
}
