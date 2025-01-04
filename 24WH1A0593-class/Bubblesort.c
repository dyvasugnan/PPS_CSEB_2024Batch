//Bubble sorting of an array
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
    int pass, i=0;
    for(pass=0;pass<=n-1;pass++){
        for(i=0;i<n-pass-1;i++){
            if(a[i]>a[i+1])
            swap(&a[i],&a[i+1]);
    }  } }
void swap(int *n1,int *n2){
    int temp;
     temp=*n1;
     *n1=*n2;
     *n2=temp;
}
