#include<stdio.h>
int add(int arr1[3][3],int arr2[3][3]);
int main()
{
int i,j,arr1[3][3],arr2[3][3];
printf("enter array1");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
scanf("%d",&arr1[i][j]);
}
}
for(i=0;i<3;i++){
for(j=0;j<3;j++){
printf("%3d",arr1[i][j]);
}
printf("\n");
}
printf("enter 2nd matrix");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
scanf("%d",&arr2[i][j]);
}

}
for(i=0;i<3;i++){
for(j=0;j<3;j++){
printf("%3d",arr2[i][j]);
}
printf("\n");
}
add(arr1,arr2);
    return 0;
}
int add(int a[3][3],int b[3][3]){
int i,j,c[3][3];
for(i=0;i<3;i++){
for(j=0;j<3;j++){
 c[i][j]=a[i][j]+b[i][j];
}
}
printf("add of two matrices\n");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
printf("%3d",c[i][j]);
}
printf("\n");
}}
