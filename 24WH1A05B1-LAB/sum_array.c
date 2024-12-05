#include<stdio.h>
int main()
{
int n,i,sum=0;
int numbers[100];
float average;
printf("enter the no.of elements:");
scanf("%d",&n);
if(n<=0 || n>100)
{
printf("invalid no.of elements.Please enter a value between 1 and 100");
return 0;
}
printf("enter the elements:\n");
for(i=0;i<n;i++)
{
printf("element of numbers[%d]:",i);
scanf("%d",&numbers[i]);
sum=sum+numbers[i];
}
average=(float)sum/n;
printf("sum=%d\n",sum);
printf("average=%.2f\n",average);
return 0;
}

