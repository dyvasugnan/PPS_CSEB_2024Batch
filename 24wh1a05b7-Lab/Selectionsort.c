//selection sort
#include<stdio.h>
void selectionSortDescending(int arr[],int n) {
    for(int i=0; i<n-1; i++) {
        int maxIndex=i;
        for(int j=i+1; j<n; j++) {
            if(a[j]>a[maxIndex]) {
                maxIndex=j;
            }

        }
        if(maxIndex!=i) {
            int temp=a[i];
            a[i]=a[maxIndex];
            a[maxIndex]=temp;
        }
    }
}
int main() {
    int n;
    printf("enter the number of elements in the array:");
    scanf("%d",&n);
    int a[n];
    printf("enter  the elements of the array: ");
    for(int i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    selectionSortDescending(a,n);
    printf("Sorted array in descending order:\n");
    for(int i=0; i<n; i++) {
        printf("%d",a[i]);





