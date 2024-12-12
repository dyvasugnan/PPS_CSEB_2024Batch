//Program to find max and min of three nums.
#include<stdio.h>

int main(){
		int n1,n2,n3,max,min;
		printf("Enter three numbers: ");
		scanf("%d %d %d", &n1,&n2,&n3);

		if(n1 > n2){
				if(n1 > n3)
					max = n1;
				else
					max = n3;
			}
		else{
				if(n2 > n3)
					max = n2;
				else
					max = n3;
			}

		if(n1 < n2){
				if(n1 < n3)
					min = n1;
				else
					min = n3;
			}
		else{
				if(n2 < n3)
					min = n2;
				else
					min = n3;
			}
		printf("Maximum value is: %d\n", max);
		printf("Minimum value is: %d\n", min);

		return 0;

		}

