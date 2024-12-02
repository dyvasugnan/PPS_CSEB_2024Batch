#include<stdio.h>
int main()
{
int t,r,n,rev=0;
printf("enter any nunber");
scanf("%d",&n);
t=n;
printf("the given no=%d",n);
while(n>0){
r=n%10;
rev=rev*10+r;
n=n/10;
}
printf("\nthe reverse value=%d\n",rev);


return 0;
}