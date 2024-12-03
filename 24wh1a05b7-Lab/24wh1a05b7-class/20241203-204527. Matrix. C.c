// displaying matrix
#include<stdio.h>
int main(){
int a[3][3];
int i,j;
printf("enter a value\n");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
scanf("%d",&a[i][j] );
}
printf("\n");
}
printf("matrix elements\n");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
printf("%4d",a[i][j]);
}
printf("\n");
}
 return 0;
 }