//Matrices menu using functions
#include<stdio.h>
void addmat(int mat1[10][10],int mat2[10][10],int result[10][10],int r,int c);
void substractmat(int mat1[10][10],int mat2[10][10],int result[10][10],int r,int c);
void multiplymat(int mat1[10][10],int mat2[10][10],int result[10][10],int r1,int c1
,int c2);
void transposemat(int mat[10][10],int result[10][10],int r,int c);
void displaymat(int mat[10][10],int r,int c);
int main(){
int mat1[10][10],mat2[10][10],result[10][10],r1,r2,c1,c2,choice;
int i,j;//index for row and col
//reading no.of rows and cols for mat1
printf("Enter number of rows for matrix 1:\n");
scanf("%d",&r1);
printf("Enter number of columns for matrix 1:\n");
scanf("%d",&c1);
//reading elements for mat1
printf("Enter %d elements of matrix 1:\n",r1*c1);
for(i=0;i<r1;i++){
    for(j=0;j<c1;j++){
        scanf("%d",&mat1[i][j]);
    }
  }
//reading no.of rows and cols for mat2
printf("Enter number of rows for matrix 2:\n");
scanf("%d",&r2);
printf("Enter number of columns for matrix 2:\n");
scanf("%d",&c2);
//reading elements for mat2
printf("Enter %d elements of matrix 2:\n",r2*c2);
for(i=0;i<r2;i++){
    for(j=0;j<c2;j++){
        scanf("%d",&mat2[i][j]);
    }
  }
  //switch case to display menu
do{
    printf("\nMATRIX MENU\n");
    printf("1.Addition of Matrix\n");
    printf("2.Substraction of Matrix\n");
    printf("3.Multiplication of Matrix\n");
    printf("4.Transpose of Matrix\n");
    printf("5.Exit\n");
    printf("Enter Your Choice:\n");
    scanf("%d",&choice);
    switch (choice){
        case 1:
        if(r1==r2&&c1==c2){
            addmat(mat1,mat2,result,r1,c1);
            printf("\nMATRIX:\n");
            displaymat(result,r1,c1);
        } else{
            printf("cannot be added due to difference in order of the matrix\n");
        }
        break;
        case 2:
        if(r1==r2&&c1==c2){
            substractmat(mat1,mat2,result,r1,c1);
            printf("\nMATRIX:\n");
            displaymat(result,r1,c1);
        } else{
            printf("cannot be substracted due to difference in order of matrix\n");
        }
        break;
        case 3:
        if(c1==r2){
            multiplymat(mat1,mat2,result,r1,c1,c2);
            printf("\nMATRIX\n");
            displaymat(result,r1,c2);
        } else{
            printf("cannot be multiplied due to difference in order of matrix\n");
        }
        break;
        case 4:
        transposemat(mat1,result,r1,c1);
        printf("\nMATRIX\n");
        displaymat(result,c1,r1);
        break;
        case 5:
        printf("you have exited the menu\n");
        break;
        default:
        printf("Invalid choice!Try Again\n");
    }
} while(choice !=5);
return 0;
}
//functions
void addmat(int mat1[10][10],int mat2[10][10],int result[10][10],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            result[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
}
void substractmat(int mat1[10][10],int mat2[10][10],int result[10][10],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            result[i][j]=mat1[i][j]-mat2[i][j];
        }
    }
}
void multiplymat(int mat1[10][10],int mat2[10][10],int result[10][10],int r1,int c1,int c2){
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            result[i][j]=0;
            for(int k=0;k<c1;k++){
                result[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }
    }
}
void transposemat(int mat[10][10],int result[10][10],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            result[j][i]=mat[i][j];
        }
    }
}
void displaymat(int mat[10][10],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d",mat[i][j]);
        } printf("\n");
    }
}
