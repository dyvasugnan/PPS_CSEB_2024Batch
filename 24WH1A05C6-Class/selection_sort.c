#include<stdio.h>
void swap(int*, int*);
void selectionSort(int [],int);
void printArr(int [],int);

int main(){
 int arr[10];
 int n,i;
 printf("Enter size of array:\n");
 scanf("%d",&n);
 printf("Enter the %d elements :\n",n);
 for(i=0;i<n;i++)
   scanf("%d",&arr[i]);
 printf("Before sorting: \n");
 printArr(arr,n); 
 selectionSort(arr,n);
 printf("\nAfter sorting: \n");
 printArr(arr,n);
return 0;
}

void selectionSort(int a[], int n){
    int i,range=0, min;
  for(range=0;range<n-1;range++){
    min=range;
      if (range == n)
       return;
    for(i=range+1;i<n;i++){
        if(a[i]<a[min]){
           min=i;
        }
    }
    swap(&a[min],&a[range]);
  }
}

void swap(int *n1, int *n2){
    int temp=*n1;
    *n1=*n2;
    *n2= temp;
}

void printArr(int a[],int n){
    int i;
    for(i=0;i<n;i++)
   printf("%d   ",a[i]);
}