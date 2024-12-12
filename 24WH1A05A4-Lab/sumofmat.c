//sum of matrices using function
#include<stdio.h>
int col=3;
void sum_of_mat(int[][col],int[][col],int);
int main(){
int row;
printf("enter no.of rows");
scanf("%d",&row);
int i,j;
int mat1[row][col],mat2[row][col];
for(i=0;i<row;i++){
   for(j=0;j<col;j++){
     printf("enter element in matrix1");
     scanf("%d",&mat1[i][j]);
}
}
for(i=0;i<row;i++){
   for(j=0;j<col;j++){
     printf("enter element in matrix2");
     scanf("%d",&mat2[i][j]);
}
}
    sum_of_mat(mat1,mat2,row);

}
void sum_of_mat(int mat1[][col],int mat2[][col],int row){
int mat3[row][col];
int i,j;
  for(i=0;i<row;i++){
    for(j=0;j<col;j++){
      mat3[i][j]=mat1[i][j]+mat2[i][j];
    }
  }
for(i=0;i<row;i++){
   for(j=0;j<col;j++){
   printf("%4d",mat3[i][j]);
}
printf("\n");
}
}
