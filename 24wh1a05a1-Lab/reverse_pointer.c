//displaying reverse of arrray using pointer
#include<stdio.h>
int main()
{
int arr[100];
int n ,i;
int *ptr=arr;
printf("Enter size of the array: ");
scanf("%d",&n);
printf("Enter values of array: ");
for(i=0;i<n;i++)
{
scanf("%d",ptr);
ptr++;
}
ptr=arr;
printf("Array elements: ");
for(i=0;i<n;i++)
{
printf("%d ",*ptr);
ptr++;
}
ptr=&arr[n-1];
printf("\nAfter Reversing:");
{
for(i=n-1;i>=0;i--)
{
printf("%d ",*ptr);
ptr--;
}
}
return 0;
}