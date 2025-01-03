//Simple and compound interest.
#include<stdio.h>
#include<math.h>
int main(){
	int principal;
	float rate, time;
	printf("Enter principal, rate and time: ");
	scanf("%d %f %f",&principal,&rate,&time);
	float simple = (principal * rate * time) / 100;
	float compound = pow(principal * (1 + rate),time) - principal;
	printf("Simple interest: %.2f\n",simple);
	printf("Compound interest: %.2f\n",compound);
	return 0; 
}
