#include<stdio.h>
 
int arr_min(int [],int);
 
int main(){
  
  int arr[] = {1,2,3,4,5,6,0};

  int n = sizeof(arr)/sizeof(arr[0]);

  int min = arr_min(arr, n);
 
  printf("minimum element  in an array  %d\n",min);
    
  return 0;
  
 }

 int arr_min(int a[],int n){
  
     int min = a[0];
 
     for(int i = 1 ; i < n ; i++){
   
         if(a[i]<min)

           min=a[i];

    }
 
  return  min;
   
  }