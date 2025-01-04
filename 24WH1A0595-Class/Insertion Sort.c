//insertion sort
#include <stdio.h>  
void insertionSort (int [],int);
int main(){
    int arr[50],n,i;
    printf("enter no of elements in array req:");
    scanf("%d",&n);
    printf("enter the elements: ");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("before sorting:");
    for(i=0;i<n;i++)
    printf("%d  ",arr[i]);
  insertionSort(arr,n);
   printf("\nafter sorting:");
   for(i=0;i<n;i++)
   printf("%d  ",arr[i]);
}
void insertionSort(int a[],int n){
    int key,step,j;
     for(step=1;step<n;step++){
         key=a[step];
         j=step-1;
         while(key<a[j] && j>=0){
             a[j+1]=a[j];
             j--;
         }
       a[j+1]=key;
     }
}
   
   
