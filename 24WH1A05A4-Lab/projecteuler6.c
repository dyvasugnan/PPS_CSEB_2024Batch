//sum of squares of first 100 natural numbers-whole square of sum of first 100 natural numbers
#include<stdio.h>
int main(){
	int i,sum=0,sum1=0;
	for(i = 1;i <= 100;i++){
		sum=sum+i;
		}	
		printf("%d\n",sum*sum);
		
	for(i = 1;i <= 100;i++){
		sum1=sum1+(i*i);
	}
	printf("%d\n",sum1);
	printf("%d",((sum*sum)-(sum1)));
}
