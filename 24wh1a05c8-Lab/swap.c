//Even fibonacci sequence.

#include<stdio.h>
int main(){
		int t0 = 0, t1 =1, nxt, sum = 0;
		int i,n;
		scanf("%d",&n);
		for(i = 1;i <= n; i++){
					nxt = t0 + t1;
					t0 = t1;
					t1 = nxt;
					printf("%2d ", t1);
				if(i % 2 == 0)
					sum += t1;
			}printf("\n");

		printf("%d\n", sum);
		return 0;
	}						
