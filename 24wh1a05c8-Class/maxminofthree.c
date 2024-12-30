//Max and Min of three numbers.
#include<stdio.h>
int main(){
	int n1, n2, n3;
	printf("Enter three numbers: ");
	scanf("%d %d %d", &n1, &n2, &n3);
	if(n1 > n3){
	
		if(n1 > n2)
			printf("n1 is largest\n");
		else
			printf("n2 is largest\n");
	}
	else{
		if(n2 > n3)
			printf("n2 is largest\n");
		else 	
			printf("n3 is largest\n");
	}
	
	
	if(n1 < n3){
	
		if(n1 < n2)
			printf("n1 is smallest\n");
		else
			printf("n2 is smallest\n");
	}
	else{
		if(n2 < n3)
			printf("n2 is smallest\n");
		else 	
			printf("n3 is smallest\n");
	}
	return 0;
}
