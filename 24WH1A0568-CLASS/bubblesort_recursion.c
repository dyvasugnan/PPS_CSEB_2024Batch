//bubble sort using recursion
#include <stdio.h>  
void bubbleSort (int [],int);
void swap(int*,int*);
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
  bubbleSort(arr,n);
   printf("\nafter sorting:");
   for(i=0;i<n;i++)
   printf("%d  ",arr[i]);
}
void bubbleSort(int a[],int n){
    int i;
 if(n>0) {
       for(i=0;i<n-1;i++) {
         if(a[i]>a[i+1]){
             swap(&a[i],&a[i+1]);
         }
      bubbleSort(a,n-1);}
  }
else{
  return;
}
}
void swap(int *n1,int *n2){
    int temp;
     temp=*n1;
     *n1=*n2;
     *n2=temp;
}
