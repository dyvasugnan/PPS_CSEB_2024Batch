//display array by using pointers
#include<stdio.h>
int main(){
int arr[10],i,n;
printf("enter size of array:");
scanf("%d",&n);
printf("enter arrayelements\n" );
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("print the array elements:\n");
for(i=0;i<n;i++)
printf("%4d",*(arr+i));
return 0;
}
