//Geometric progression
#include<stdio.h>
#include<math.h>
int main(){
	int x,n,sum;
	printf("Enter x and n: ");
	scanf("%d %d",&x,&n);
	
	for(int i = 0;i <= n;i++){
		sum += pow(x,i);
	}
	printf("Sum is: %d",sum);
}
