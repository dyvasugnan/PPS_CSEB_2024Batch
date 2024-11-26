#include<stdio.h>
int main(){
    int a[3][3],b[3][3],i,j,i[3][3];
       for(i=0;i<3;i++){
          for(j=0;j<3;j++){
              scanf("%d",&a[i][j]);
             }
          }
      for(i=0;i<3;i++){
           for(j=0;j<3;j++){
             if(i=j)
                i[i][j]=1;
              else
                i[i][j]=0;
                }
}
    
     for(i=0;i<3;i++){
        b[1][i]= a[0][0]*i[1][i]-a[1][0]*i[0][i];
        b[2][i]= a[0][0]*i[2][i]-a[2][0]*i[0][i];
        b[2][i]= a[1][1]*i[2][i]-a[2][1]*i[1][i];
        b[1][i]= a[2][2]*i[1][i]-a[1][2]*i[2][i];
        b[0][i]= a[2][2]*i[0][i]-a[0][2]*i[2][i];
        b[0][i]= a[1][1]*i[0][i]-a[0][1]*i[1][i];
}
 printf("inverse of matrix");
      for(i=0;i<3;i++){
       for(j=0;j<3;j++){
         printf("%d",&b[i][j]);
          }
        printf("\n");
       }
    return 0;
}

        
