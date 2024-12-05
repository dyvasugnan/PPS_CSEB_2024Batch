//sum and average of array elements
#include<stdio.h>
  int array_sum(int [],int);
  float array_avg(int[],int);
  int main(){
      int a[5]={1,2,3,4,5};
      int num;
       num=sizeof(a)/sizeof(a[0]);
     int  sum=array_sum(a,num);
    
    printf("sum=%d",sum);
   float  avg= array_avg(a,num);
    printf("avg=%f",avg);
    return 0;
    }
  int aray_sum(int a[5],int num){
   int sum=0,i;
    for(i=0;i<num;i++){
    sum+=a[i];
    }
   return sum;
   }
  float array_avg(int a[5],int num){
   int sum=0,i;
   for(i=0;i<num;i++){
   sum+=a[i];
    }
  float avg=(float)sum/num;
   return avg;
   }

      
