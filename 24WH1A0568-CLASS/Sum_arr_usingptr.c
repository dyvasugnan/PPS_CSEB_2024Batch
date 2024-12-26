#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);

    int arr[n];  
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    int *ptr = arr;
    int sum = 0;

   
    for (int i = 0; i < n; i++) {
        sum += *(ptr + i);  
    }


    printf("The sum of the elements is: %d\n", sum);

    return 0;
}
