//Star pattern1
#include <stdio.h>
int main() {
	int i, j, n = 3;
	for(i = 1; i <= n; i++) {
		for(j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
