//Switch operators
#include<stdio.h>
int main(){
	int num1, num2;
	char op;
	printf("Enter two numbers: ");
	scanf("%d %d",&num1, &num2);
	fflush(stdin);
	printf("Enter operator: ");
	scanf("%c",&op);
	
	switch(op){
		case '+':
			printf("Result: %d\n",num1 + num2);
			break;
		case '-':
			printf("Result: %d\n",num1 - num2);
			break;
		case '*':
			printf("Result: %d\n",num1 * num2);
			break;
		case '/':
			printf("Result: %d\n",num1 / num2);
			break;
		case '%':
			printf("Result: %d\n",num1 % num2);
			break;
		default:
			printf("expression not valid\n");
			break;
	}
	return 0;
}
