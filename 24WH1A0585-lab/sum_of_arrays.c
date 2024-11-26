//sum of arrays//
#include<stdio.h>
int main(){
int arr1[5]={1,2,3,4,5};
int arr2[5]={6,7,8,9,10};
int sum[5];
int i;
printf("array 1:");
for( i=0;i<5;i++){
printf("%d",arr1[i]);
}
printf("\narray 2:");
for(i=0;i<5;i++){
printf("%d",arr2[i]);
}
printf("\nsum ofarrays:");
for(i=0;i<5;i++){
sum[i]=arr1[i] +arr2[i];
printf("%d",sum[i]);
}
return 0;
}
