#include<stdio.h>
int main(){
int a[10],n,i;
printf("Enter the number : ");
scanf("%d",&n);
for(i=0;n>0;i++)
{
a[i]=n%2;
n=n/2;
}
printf("\nBinary forms : ");
for(i=i-1;i>=0;i--)
{
printf("%d",a[i]);
}
return 0;
}
