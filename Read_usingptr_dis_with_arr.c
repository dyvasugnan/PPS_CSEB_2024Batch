#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];  
    int *ptr = arr; 
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
       scanf("%d", ptr + i); 
  
    printf("The entered values are:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: %d\n", i + 1, arr[i]);  
    }

    return 0;
}
