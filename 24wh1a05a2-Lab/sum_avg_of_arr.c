#include<stdio.h>
//welcome to c

int arrsumavg(int [],int);

  int main(){
     int arr[] = {1,2,3,4,5,6};

     int n = sizeof(arr)/sizeof(arr[0]);

     int sum = arrsumavg(arr,n);

     float avg = sum/(n*1.0);
     
     printf("sum=%d\navg=%f",sum,avg);

     return 0;

    }
    int arrsumavg(int a[],int n){

          int sum = 0;

          for(int i=0;i<n;i++)

              sum = sum + a[i]; 

          return sum;
    }