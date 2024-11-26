#include<stdio.h>
int main(){
    int mat[10][10],i,j,m,n,sum_row,sum_col,sum_d=0;
    printf ("Enter no. of rows and columns of matrix\n");
    scanf ("%d%d",&m,&n);
    printf ("Enter %d elements\n",m*n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    printf ("\nMatrix elements are:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf ("%d",mat[i][j]);
        }
        printf ("\n");
    }
    for(i=0;i<m;i++){
        sum_row=0;
        for(j=0;j<n;j++){
            sum_row=sum_row+mat[i][j];
        }
        printf ("Sum of row%d:%d\n",i+1,sum_row);
    }
    for(j=0;j<n;j++){
        sum_col=0;
        for(i=0;i<m;i++){
            sum_col=sum_col+mat[i][j];
        }
        printf ("Sum of col%d:%d\n",j+1,sum_col);
    }
    if(i==j)
        for(i=0;i<m;i++){
            sum_d=sum_d+mat[i][i];
        }
        printf ("Sum of primary dia:%d\n",sum_d);
    return 0;
}
