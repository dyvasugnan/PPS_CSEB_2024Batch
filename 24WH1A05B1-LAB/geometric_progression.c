//to calculate the geometric progression
#include<stdio.h>
#include<math.h>
int main()
{
int i,x,n,sum=1;
printf("enter  base value");
scanf("%d",&x);
printf("enter power value");
scanf("%d",&n);
for(i=1;i<=n;i++)
sum = sum+pow(x,i);
printf("%d",sum);
return 0;
}

