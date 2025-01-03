//Power of a number
#include<stdio.h>
#include<math.h>

int power(int x,int n){
	if(n == 0)
		return 1;
	else
		return x * pow(x,n - 1);
}

int main(){
	int x,n;
	printf("Enter x and n: ");
	scanf("%d %d",&x,&n);
	
	int result = power(x,n);
	printf("Result is : %d\n",result);
	
	return 0;
}
