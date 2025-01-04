//finding sum of elements in the array using pointer
#include <stdio.h>
int main()
{
int a[60],i,s=0,t,n;
int *p=a;
printf("enter size of array: ");
scanf("%d",&n);
printf("Enter the Elements of Array: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
s=s+(*(p+i));
}
printf("sum=%d",s);
}