#include<stdio.h>

//welcome to c
 
 int arr_max(int [],int);

 int main(){
  
    int max;

    int arr[] = {1,2,3,4,51,9};

    int n = sizeof(arr)/sizeof(arr[0]);
   
    max = arr_max(arr,n);
 
    printf("maximum element in array=%d",max);
  
    return 0;

 }
  
 int arr_max(int a[],int n){
   
    int max = a[0];
       
     for(int i = 1 ; i < n ; i++){
     
         if(a[i] > max)
            
           max = a[i];
     }

   return max;

  }
  