#include<stdio.h>
float avg_arr(float,int);
int main(){
float sum=0.0;
int size;
printf("enter size of the array");
scanf("%d",&size);
int arr[size],i;
printf("enter elements of array");
for(i=0;i<size;i++){
       scanf("%d",&arr[i]);
}
 printf("sum of elements in array is:");
       for(i=0;i<size;i++){
          sum=sum+arr[i];
}
 printf("%.2f\n",sum);
printf("average of array elements is : %.2f",avg_arr(sum,size));
return 0;
}
float avg_arr(float sum,int size){
       float avg;
       avg=sum/size;
  return avg;
}
