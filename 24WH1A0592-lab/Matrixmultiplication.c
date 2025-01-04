//multiplication of matrices
#include<stdio.h>
int main(){
int n1,m1,n2,m2,i,j,k,c[10][10],a[10][10],b[10][10];
printf("enter size of matrix A :\n");
scanf("%d%d",&n1,&m1);
printf("enter size of matrix B :\n");
scanf("%d%d",&n2,&m2);
printf("enter matrix A elements:\n");
for(i=0;i<n1;i++){
for(j=0;j<m1;j++){
scanf("%d",&a[i][j]);
}
}
printf("enter matrix B elements:\n");
for(i=0;i<n2;i++){
for(j=0;j<m2;j++){
scanf("%d",&b[i][j]);
}
}
if(m1==n2){
printf("multiplication of matrices is:\n");
for(i=0;i<n1;i++){
for(j=0;j<m1;j++){
for(k=0;k<m2;k++){
c[i][j]+=a[i][k]*b[k][j];
}
printf("%d ",c[i][j]);
}
printf("\n");
}
}
else
printf("\n multiplication of two matricesnot possible");
return 0;
}
