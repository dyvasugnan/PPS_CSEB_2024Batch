#include <stdio.h>

void selec_Sort(int a[],int n);
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
   selec_Sort(a,n);
    printf("\nThe Sorted Array:");
    printArray(a,n);
    return 0;
}
void selec_Sort(int a[],int n){
int range,i,min;
for(range=0;range<n-1;range++){
    min=range;
    for(i=range+1;i<n;i++){
        if(a[i]<a[min]){
        min=i;
        }
      }
        swap(&a[min],&a[range]);
        
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
   }
}
