//Calculating power using recursion
#include<stdio.h>
#include<math.h>
int power(int , int);
int main() {
	int num , x , res;
	printf("Enter the number ");
	scanf("%d",&num);
	printf("enter the power of the number you want to calculate");
	scanf("%d",&x);
	res=power(num,x);
	printf("%d power %d is:%d",num,x,res);
	return 0;
        }
int power(int x, int n){
	if(n == 0)
	return 1;
        return pow(x,(n));
}
	
