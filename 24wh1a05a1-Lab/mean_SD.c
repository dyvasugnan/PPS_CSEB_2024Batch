//finding mean SD andc variance
#include<stdio.h>
#include<math.h>
int main()
{
int i, m, v, a[20], n;
float sd;
int sum=0, p=0;
printf("Enter n value:");
scanf("%d",&n);
printf("Enter array values:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum+=a[i];
}
m=sum/n;
printf("Mean= %d\n",m);


for(i=0;i<n;i++)
{
p+=pow((a[i]-m),2);
}
v=p/n;
printf("Variance= %d\n",v);
sd=sqrt(v);
printf("Standard Division= %f",sd);
return 0;
}