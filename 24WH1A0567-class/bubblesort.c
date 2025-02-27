#include<stdio.h>
void bubblesort(int [], int);
void swap(int*, int*);
int main(){
    int n, arr[200], i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: \n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("The elements before sorting are:\n");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    bubblesort(arr, n);
    printf("\nThe elements after sorting are:\n");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
void bubblesort(int arr[], int n){
    int i;
    if(n == 1){
        return;
    }
    for(i = 0; i < n - 1; i++){
        if(arr[i] > arr[i + 1]){
            swap(&arr[i], &arr[i + 1]);
        }
    }
    bubblesort(arr, n - 1);
}
void swap(int*p1, int*p2){
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
