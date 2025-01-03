//selection sort without recursion
#include<stdio.h>
void SelectionSort(int [], int);
void swap(int*, int*);
void printArray(int [], int);
int main(){
    int n, arr[200], i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: \n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Before Sorting: ");
    printArray(arr, n);
    SelectionSort(arr, n);
    printf("\nAfter Sorting: ");
    printArray(arr, n);
    return 0;
}
void SelectionSort(int arr[], int n){
    int range, j, min;
    for(range = 0; range < n - 1; range++){
        min = range;
        for(j = range + 1; j < n; j++){
           if(arr[j] < arr[min]){
               min = j;
            }
        }
        swap(&arr[min], &arr[range]);
    }    
}
void swap(int*p1, int*p2){
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
void printArray(int arr[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}
