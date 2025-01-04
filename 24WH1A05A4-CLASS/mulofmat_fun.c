//multiplication of a matrix using function
#include<stdio.h>
col=3;
void mul_of_matrix(int,int[][3],int[][3]);
int main(){
	int row;
	printf("enter the number of rows in a matrix");
	scanf("%d",&row);
	int i,j,mat1[row][3],mat2[row][3],mat3[row][3];
	for(i=0;i<row;i++){
		for(j=0;j<3;j++){
			printf("enter element in matrix 1"); 
			scanf("%d",&mat1[i][j]);
		}
	}	
	for(i=0;i<row;i++){
		for(j=0;j<3;j++){
			printf("enter element in matrix 2");
			scanf("%d",&mat2[i][j]);
		}
	}
	add_of_matrix(row,mat1,mat2);	
	
}
void add_of_matrix(int row,int mat1[][3],int mat2[][3]){
       int mat3[row][3],i,j,k; 
       	for(i=0;i<row;i++){
		for(j=0;j<3;j++){
			mat3[i][j]=0;
		}
	}
       for(i=0;i<row;i++){
       	for(j=0;j<3;j++){
       		for(k=0;k<3;k++){
       			mat3[i][j]=mat3[i][j]+(mat1[i][k]*mat2[k][j]);
			   }
		   }
	   }
	   for(i=0;i<row;i++){
       	for(j=0;j<3;j++){
       		printf("%d",mat3[i][j]);
		   }
		   printf("\n");
	   }
}
