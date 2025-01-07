//Number pattern 3
#include <stdio.h>

int main() {
	int i, j, num = 1, n = 3;
	for(i = 1; i <= n; i++) {
		for(j = 1; j <= i; j++) {
			printf("%d ", num);
			num++;
		}
		printf("\n");
	}
	return 0;
}
