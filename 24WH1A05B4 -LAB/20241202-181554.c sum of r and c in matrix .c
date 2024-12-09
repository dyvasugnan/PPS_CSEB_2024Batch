#include<stdio.h>
int main(){
int a[20][20],i,j,r,c;
printf("enter no.of rows and columns");
scanf("%d%d",&r,&c);
printf("enter r*c values");
for(i=0;i<=r;i++){
for(j=0;j<=c;j++){
scanf("%d",&a[i][j]);
}
}
printf("\nelements of matrix are\n");
for(i=0;i<=r;i++){
for(j=0;j<=c;j++){
printf("%d",a[i][j]);
}
printf("\n");
}
printf("\n sum of rows is\n");
for(i=0;i<=r;i++){
int rsum=0;
for(j=0;j<=c;j++){
rsum+=a[i][j];
}
printf("\n sum of elements of rows  is :%d\n",rsum);
}
printf("\n column sum is\n");
for(i=0;i<=r;i++){
int csum=0;
for(j=0;j<=c;j++){
csum+=a[i][j];
}
printf("\n sum of elements in column  : %d\n",csum);
}
//scanf("%d",&a[i][j]);
//scanf("%d",&a[i][j]);
return 0;

}