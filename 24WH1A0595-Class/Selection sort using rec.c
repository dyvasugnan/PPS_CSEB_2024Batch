//Selection sorting using recursion
#include<stdio.h>
void swap(int*, int*);
void selectionSort(int [],int ,int);
void printArr(int [],int);

int main(){
 int arr[10];
 int n,i;
 printf("Enter no of elements:");
 scanf("%d",&n);
 printf("Enter the elements into array:");
 for(i=0;i<n;i++)
   scanf("%d",&arr[i]);
 printf("Before sorting: \n");
 printArr(arr,n); 
 selectionSort(arr,0,n);
 printf("\nAfter sorting: \n");
 printArr(arr,n);
return 0;
}

void selectionSort(int a[],int range, int n){
    int i,min;
    min=range;
      if (range == n)
       return;
    for(i=range+1;i<n;i++){
        if(a[i]<a[min]){
           min=i;
        }
    swap(&a[min],&a[range]);
    }
    selectionSort(a,range+1,n);
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
