//display array in reverse order using pointer
#include <stdio.h>

int main() {
    int  n;
    int *ptr;


    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
 int arr[n];
  
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    ptr = &arr[n - 1];

    
    printf("Array in reverse order:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", *ptr);
        ptr--;
    }

    return 0;
}
