//binary search
#include <stdio.h>
int binarySearch(int array[], int size, int key);
int main() {
    int size, key;
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    int array[size];
    printf("Enter %d elements in sorted order: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    printf("Enter the key to search for: ");
    scanf("%d", &key);
    int result = binarySearch(array, size, key);
    if (result == -1) {
        printf("Element not found in array\n");
    } else {
        printf("Element found at index %d\n", result);
    }
    return 0;
}
int binarySearch(int array[], int size, int key) {
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int middle = left + (right - left) / 2;
        if (array[middle] == key) {
            return middle; //if key==middle
        }
        if (array[middle] < key) {
            left = middle + 1; // Search right half
        } else {
            right = middle - 1; // Search left half
        }
    }
 return -1; // Key not found
}

