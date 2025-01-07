//Sum square difference
#include<stdio.h>
#include<math.h>

int main(){
	int n, sum1 = 0, sum2 = 0,square;
	printf("Enter num: ");
	scanf("%d",&n);
	
	for(int i = 1;i <= n; i++){
		sum1 += i * i;
		sum2 += i;		
	}
	square = sum2 * sum2;
	
	printf("Sum of square: %d\n",sum1);
	printf("Square of sum: %d\n",square);
	printf("Difference: %d",square - sum1);
	
	return 0;
}
