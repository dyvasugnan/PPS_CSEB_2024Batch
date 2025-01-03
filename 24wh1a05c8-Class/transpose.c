//Transpose of matrix
#include<stdio.h>
int main(){
	int n,i,j, mat[10][10];
	printf("Enter size: ");
	scanf("%d",&n);
	
	printf("Enter elements: ");
	for(i = 0;i < n;i++){
		for(j = 0;j < n;j ++){
			scanf("%d",&mat[i][j]);
		}
	}
	
	printf("Elements of matrix:\n");
	for(i = 0;i < n;i++){
		for(j = 0;j < n;j ++){
			printf("%4d",mat[i][j]);
		}
		printf("\n");
	}
	
	printf("Transpose of matrix:\n");
	for(i = 0;i < n;i++){
		for(j = 0;j < n;j ++){
			printf("%4d",mat[j][i]);
		}
		printf("\n");
	}
	
	return 0;
}
