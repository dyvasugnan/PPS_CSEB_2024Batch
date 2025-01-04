//FINDING DUPLICATE ELEMENT IN AN ARRAY BY BRUTE FORCE METHOD.
#include <stdio.h>

void findDuplicates(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d is a duplicate element.\n", arr[i]);
            }
        }
    }
}

int main() {
    int arr[] = {12, 12, 39, 22, 44, 44, 63, 47, 58, 89, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    findDuplicates(arr, n);

    return 0;
}
