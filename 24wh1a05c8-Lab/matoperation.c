#include<stdio.h>

void addmat(int mat1[10][10],int mat2[10][10],int row, int col){
	int i,j;
	int mat3[10][10];
	for(i = 0;i < row;i++){
		for(j = 0;j < col; j++){
			mat3[i][j] = mat1[i][j] + mat2[i][j];
			}
		printf("\n");

	}
	printf("Result of addition:\n");

	for(i = 0;i < row;i++){
		for(j = 0;j < col;j++)
			printf("%3d", mat3[i][j]);
			printf("\n");
	}
}

int main(){
		int mat1[10][10], mat2[10][10];
		int row,col;
		int i,j;

		printf("Enter rows and columns: ");
		scanf("%d %d", &row,&col);

		printf("Enter mat1:");
		for(i = 0;i < row;i++){
			for(j = 0;j < col;j++)
				scanf("%d",&mat1[i][j]);
		}

		printf("Matrix 1: \n");
		for(i = 0;i < row;i++){
			for(j = 0;j < col;j++)
				printf("%3d", mat1[i][j]);
				printf("\n");
		}

		printf("Enter mat2:");
		for(i = 0;i < row;i++){
			for(j = 0;j < col;j++)
				scanf("%d",&mat2[i][j]);
		}

		printf("Matrix 2:\n");
		for(i = 0;i < row;i++){
			for(j = 0;j < col;j++)
				printf("%3d",mat2[i][j]);
				printf("\n");
		}

		addmat(mat1,mat2,row,col);

		return 0;
}
