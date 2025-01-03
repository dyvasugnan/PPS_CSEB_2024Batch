//Multiplication of matrices
#include<stdio.h>
int main(){
	int mat1[10][10], mat2[10][10], mat3[10][10];
	int i,j,m,n,p,q,k;
	
	printf("Enter rows and columns of mat1: ");
	scanf("%d %d",&m,&n);
	
	printf("Enter rows and columns of mat2: ");
	scanf("%d %d",&p,&q);
	
	printf("Enter mat1: ");
	for(i = 0;i < m;i++){
		for(j = 0;j < n;j++){
			scanf("%d",&mat1[i][j]);
		}
	}
	
	printf("Enter mat2: ");
	for(i = 0;i < p;i++){
		for(j = 0;j < q;j++){
			scanf("%d",&mat2[i][j]);
		}
	}
	
	printf("Matrix 1:\n");
	for(i = 0;i < m;i++){
		for(j = 0;j < n;j++){
			printf("%4d",mat1[i][j]);
		}
		printf("\n");
	}
	
	printf("Matrix 2:\n ");
	for(i = 0;i < p;i++){
		for(j = 0;j < q;j++){
			printf("%4d",mat2[i][j]);
		}
		printf("\n");
	}
	
	if(n == p){
		
	for(i = 0;i < m;i++){
		for(j = 0;j < q;j++){
			mat3[i][j] = 0;
		}
	}
	
	
		for(i = 0;i < m;i++){
			for(j = 0;j < q;j++){
				for(k = 0;k < n;k++){
					mat3[i][j] += mat1[i][k] * mat2[k][j];
				}
			}
		}
		
		printf("Multiplication of matrices: \n");
		for(i = 0;i < m;i++){
			for(j = 0;j < q;j++){
				printf("%4d",mat3[i][j]);
			}
			printf("\n");
		}
	}
	
	return 0;
}
