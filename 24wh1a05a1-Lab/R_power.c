//finding power by recursion
#include <stdio.h>
int power(int,int);
int main()
{
int x,n,a;
printf("enter x,n values: ");
scanf("%d%d",&x,&n);
a=power(x,n);
printf("%d^%d= %d",x,n,a);
}
int power(int k,int m)
{
if(m==0)
{
return(1);
}
else {
return k*power(k,m-1);
}
}