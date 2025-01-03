//Addition of matrices
#include<stdio.h>
int main(){
	int i,j,mat1[10][10], mat2[10][10],n;
	printf("Enter size of elements: ");
	scanf("%d",&n);
	
	printf("Enter elements into mat1: ");
	for(i = 0;i < n;i++){
		for(j = 0;j < n;j++){
			scanf("%d",&mat1[i][j]);
		}
	}
	
	printf("Enter elements into mat2: ");
	for(i = 0;i < n;i++){
		for(j = 0;j < n;j++){
			scanf("%d",&mat2[i][j]);
		}
	}
	
	printf("Matrix 1: \n");
	for(i = 0;i < n;i++){
		for(j = 0;j < n;j++){
			printf("%4d",mat1[i][j]);
		}
		printf("\n");
	}
	
	
	printf("Matrix 2: \n");
	for(i = 0;i < n;i++){
		for(j = 0;j < n;j++){
			printf("%4d",mat2[i][j]);
		}
		printf("\n");
	}
		
	printf("Addition of matrices is:\n");
	for(i = 0;i < n;i++){
		for(j = 0;j < n;j++){
			printf("%4d",mat1[i][j] + mat2[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
