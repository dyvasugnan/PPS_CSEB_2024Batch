#include <stdio.h>
void insertion_Sort(int a[], int n);
void printArray(int a[], int n);

int main() {
   int n, i;
   printf("Enter the size: ");
   scanf("%d", &n);
   int a[n];
   printf("Enter the array elements: ");
   for(i = 0; i < n; i++){
       scanf("%d", &a[i]);
   }
   printf("Array before sorting: ");
   printArray(a, n);
   insertion_Sort(a, n);
   printf("The Sorted Array: ");
   printArray(a, n);
   return 0;
}

void insertion_Sort(int a[], int n) {
    int step,key,j;
    for (step=1;step<n;step++) {
        key=a[step];
        j=step-1;
        while(key<a[j] && j>=0){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
      }
}


void printArray(int a[],int n){
    int i;
       for(i=0;i<n;i++){
       printf(" %d",a[i]);
   }printf("\n");
}
