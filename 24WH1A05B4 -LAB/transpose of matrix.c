#include<stdio.h>
int main(){

  int m,n,i,j;
  
//  printf("enter no.of rows and columns");
  
  scanf("%d %d",&m,&n);
  
 int a[m][n] , b[m][n] , d[m][n];
 
 printf("\n matrix1 elements are:\n");

for(i=0;i<m;i++){

for(j=0;j<n;j++){

    scanf("%4d",&a[i][j]);
}
    }
    printf("\n matrix1 elements are:\n");
for(i=0;i<m;i++){

for(j=0;j<n;j++){

       printf("%4d",a[i][j]);
       
    }     
    printf("\n");
       
          }


 printf("\ntranpose of matrix 1 is:\n");
          
for(i=0;i<m;i++){

for(j=0;j<n;j++){

       scanf("%4d",&b[i][j]);
}
printf("\n");
     }
     printf("\n transpose elements are:\n");
for(i=0;i<m;i++){

for(j=0;j<n;j++){

       printf("%4d",b[j][i]);
       
    }     
    printf("\n");
       
          }

return 0;
}

