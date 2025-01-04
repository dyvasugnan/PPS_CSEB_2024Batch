//sumof martix element
#include<stdio.h>
int main(){
    int a[100][100];
    int n,m,i,j;
    int sum=0;
    printf("enter the order");
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            sum=sum+a[i][j];
        }
    }
    float avg=sum/(n*m);
  printf("%d\n",sum);
printf("%f avg",avg);
  return 0;
}