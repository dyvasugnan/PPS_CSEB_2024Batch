// to calculate the mean,variance,standard deviation
#include<stdio.h>
#include<math.h>
int main()
{
int n,i,a[n];
int sum=0;
int sum1=0 ;
float mean,variance,standard_deviation;
printf("enter the size of array");
scanf("%d",&n);
for(i = 0;i < n;i++){
scanf("%d",&a[i]);
sum+=a[i];
}
printf("%d",sum); 
mean = sum/n;
printf("%.2f \n",mean);
for(i = 0;i < n;i++)
sum1+=pow(a[i]-mean,2);
variance = sum1/(float)n;
printf("%.2f \n",variance);
standard_deviation=sqrt(variance);
printf("%.2f \n",standard_deviation);
return 0;
} 
