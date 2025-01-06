//Addition of matrix using function//

#include<stdio.h>
void matrix_addition(int a[10][10],int b[10][10],int sum[10][10]);
int r,c;
int main(){
    int a[10][10],b[10][10],sum[10][10],i,j;
    printf("Enter number of elements\n");
    scanf("%d %d",&r,&c);
    printf("Enter first matrix\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        } 
    }
    printf("enter second matrix\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
        scanf("%d",&b[i][j]);
        }
    }
    matrix_addition(a,b,sum);
    printf("\nAddition of matrix:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
        printf("%d",sum[i][j]);
        printf("\t");
        }
        printf("\n");
    }
    return 0;
}
void matrix_addition(int a[10][10],int b[10][10],int sum[10][10]){
    int i,j;
    for(i=0;i<r; i++){
        for(j=0;j<c;j++){
           sum[i][j]=a[i][j]+b[i][j];
        }
    }
}
