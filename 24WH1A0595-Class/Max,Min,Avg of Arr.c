//max, min and avg of array elements
#include<stdio.h>
int main(){

 int arr[10];
 int n,i;
 printf("Enter no of elements:");
 scanf("%d",&n);
 printf("Enter the elements into array:");
 for(i=0;i<n;i++){
   scanf("%d",&arr[i]);
 }
 int sum=0;
 int max= arr[0];
 for(i=0;i<n;i++){
    if(max<arr[i])
        max=arr[i];
 }
 int min= arr[0];
 for(i=0;i<n;i++){
    if(min>arr[i])
        min=arr[i];
 }
printf("max=%d\n",max);
printf("min=%d\n",min);
for(i=0;i<n;i++){
    sum=sum+arr[i];
}

printf("avg=%f\n",sum/10.0);
return 0;
}
