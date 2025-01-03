//selection sorting function
#include<stdio.h>
void selectionsort(int[],int);
void swapping(int*,int*);
void printarray(int[],int);
int main(){
    int arr[200],size;
    printf("enter the size of array \n");
    scanf("%d",&size);
    printf("enter the elements into array\n");
  for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
  }
  printf("elements before sorting\n");
  printarray(arr,size);
  selectionsort(arr,size);
  printf("\nelements after sorting \n");
  printarray(arr,size);
  return 0;
  }
  void printarray(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
  }
  void selectionsort(int a[],int n){
    int range,min;
    for(range=0;range<n-1;range++){
        min=range;
        for(int j=range+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        swapping(&a[min],&a[range]);
    }
  }
  void swapping(int *n1,int *n2){
    int temp=*n1;
    *n1=*n2;
    *n2=temp;
  }