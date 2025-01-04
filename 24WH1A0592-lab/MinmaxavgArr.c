// min man avg of an array 
#include<stdio.h>
int main(){
int max,min,i,n,a[10],sum=0;
printf("enter array size: ");
scanf("%d",&n);
printf("\nenter array elements:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
min=a[0],max=a[0];
for(i=0;i<n;i++){
if(min>a[i])
min=a[i];
if(max<a[i])
max=a[i];
}
printf("maximum number:%d\nminimum number:%d\n",max,min);
for(i=0;i<n;i++)
sum=sum+a[i];
float avg=sum/n;
printf("%f",avg);
return 0;
}
