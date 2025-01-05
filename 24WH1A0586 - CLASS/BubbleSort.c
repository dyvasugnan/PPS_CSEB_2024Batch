#include <stdio.h>

void bubbleSort(int a[],int n);
void swap(int *a,int *b);
void printArray(int a[],int n);

int main() {
   int n,i;
   printf("Enter the size:");
   scanf("%d",&n);
   int a[n];
   printf("Enter the array elements:");
   for(i=0;i<n;i++){
       scanf("%d",&a[i]);
   }
   printf("Array before soting:");
   printArray(a,n);
   bubbleSort(a,n);
    printf("\nThe Sorted Array:");
    printArray(a,n);
    return 0;
}

void bubbleSort(int a[],int n){
int pass,i;
for(pass=0;pass<n-1;pass++){
    for(i=0;i<n-pass-1;i++){
        if(a[i]<a[i+1]){
        swap(&a[i],&a[i+1]);
        }
      }
    }
}

void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void printArray(int a[],int n){
    int i;
       for(i=0;i<n;i++){
       printf(" %d",a[i]);
   }printf("\n");
}
