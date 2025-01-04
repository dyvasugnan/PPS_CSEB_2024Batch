#include<stdio.h>
int main(){
int a[3][3];
int i,j,trace=0,b[3][3];
   printf("enter 9 values\n");
  for(i=0;i<3;i++){
      for(j=0;j<3;j++){
         scanf("%d",&a[i][j]);
         b[i][j]=a[i][j];}}
       printf("\nmatrix\n");
  for(i=0;i<3;i++){
      for(j=0;j<3;j++)
          printf("%d ",b[i][j]);
           printf("\n");  } 
  for(i=0;i<3;i++){
      for(j=0;j<3;j++)
         if(b[i]==b[j])
            trace+=b[i][j];}
             printf("trace of b=%d", trace);
         
       return 0;}
       