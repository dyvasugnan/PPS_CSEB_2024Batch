//To check if string is palindrome or not
#include <stdio.h>
#include <string.h>
int isPalindrome(char str[]) {
	int i, length = strlen(str);
	for (i = 0; i < length / 2; i++){
		if (str[i] != str[length - i - 1]){
		return 0;
		}
	}
	return 1;
}

int main() {
	char str[100];
	printf("Enter a string: ");
	scanf("%s",str);
	
	if (isPalindrome(str)) {
        printf("Palindrome\n");
    } 
	else {
        printf("Not Palindrome\n");
    }
    
	return 0;
}


