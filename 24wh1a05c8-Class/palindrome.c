//Palindrome
#include<stdio.h>
int main(){
	int num, rem, temp;
	printf("Enter number: ");
	scanf("%d", &num);
	int original = num;
	while(num != 0){
		rem = num % 10;
		temp = (temp * 10) + rem;
		num = num / 10;
	}
	if(temp == original)
		printf("Palindrome\n");
	else
		printf("Not a palindrome\n");
	return 0;
}
