#include<stdio.h>
int main(){
    int a[3][3],b[3][3],c[3][3];
    int i,j;
    printf("enter elements into matrix\n");
    for(i=0;i<3;i++){
       for(j=0;j<3;j++){
           scanf("%d",&a[i][j]);
     }      printf("\n");
    }
    printf("enter elements into matrix b\n");
    for(i=0;i<3;i++){
       for(j=0;j<3;j++){
           scanf("%d",&b[i][j]);
       }
     printf("\n");
    }
     printf("addition of matricesA and B: C\n");
     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
         c[i][j] = a[i][j]+b[i][j];
}}
      printf("matrix c\n");
      for(i=0;i<3;i++){
         for(j=0;j<3;j++){
            printf("%d\n", c[i][j] );
           } 
           printf("\n");
    }
     return 0;
}  
