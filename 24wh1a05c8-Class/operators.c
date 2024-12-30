//Operators
#include<stdio.h>
int main(){
	int num1, num2;
	printf("Enter two numbers ");
	scanf("%d %d",&num1,&num2);
	printf("Addition: %d\n",num1 + num2);
	printf("Subtraction: %d\n",num1 - num2);	
	printf("Multiplication: %d\n",num1 * num2);
	printf("Quotient: %d\n",num1 / num2);
	printf("Remainder: %d\n",num1 % num2);
	printf("Logical AND: %d\n",(num1 < 5 )&& (num2 > 10));
	printf("Logical OR: %d\n",(num1 < 5 )|| (num2 > 10));
	printf("Logical NOT: %d\n",!(num1 == num2));
	printf("Bitwise AND: %d\n",num1 & num2);
	printf("Bitwise OR: %d\n",num1 | num2);
	printf("Bitwise NOT: %d\n",~(num1 & num2));
	printf("Bitwise XOR: %d\n",num1 ^ num2);
	printf("Bitwise Right Shift: %d\n",num1 >> num2);
	printf("Bitwise Left Shift: %d\n",num1 << num2);
	
}
