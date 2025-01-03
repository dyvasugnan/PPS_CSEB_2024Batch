//Roots of quadratic equation
#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	printf("Enter a,b,c: ");
	scanf("%d %d %d", &a, &b, &c);
	
	float det = (b * b) - (4 * a * c);
	float root1 = (-b + sqrt(det))/(2 * a);
	float root2 = (-b - sqrt(det))/(2 * a);
	
	printf("Roots of quadratic equation are: %.2f %.2f",root1,root2);
	return 0;
}
