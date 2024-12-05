

#include<stdio.h>
int main(){
    int row,col,mat[5][5];
    printf("enter the matrix elements \n");
    for(row=0;row<5;row++){
        for(col=0;col<5;col++){
            scanf("%d",&mat[row][col]);
        }
    }
    printf("\n matrix elements are:\n");
    for(row=0;row<5;row++){
        for(col=0;col<5;col++){
            printf("%4d",mat[row][col]);
        }
        printf("\n");
    }
    printf("transpose of matrix :\n");
    for(row=0;row<5;row++){
        for(col=0;col<5;col++){
            printf("%4d",mat[col][row]);
        }
        printf("\n");
    }
    return 0;
}
