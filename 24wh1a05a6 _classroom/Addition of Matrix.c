//Addition of matrix
#include <stdio.h>
int main(){
int i,j,k,m,n,p,q,a[3][3],b[3][3],c[3][3]={0};
printf("Enter array Size");
scanf("%d%d%d%d",&p,&q,&m,&n);
printf("Enter array elements");
for(i=0;i<m;i++)
{
for (j=0;j<n;j++)
{
scanf("%d%d",&a[i][j]b[i][j] );
}
}
 if (m==p&&n==a)
  { 
  for (i=0;i<3; i++) 
  {
   for (j=0;j<3;j++)
    {
    
    
    c[i][j]=a[i][j]+b[i][j]+c[i][j];
printf("%d", c[i][j]); 
 Printf("\n");
 }
   }
else
return 0;
}
}
