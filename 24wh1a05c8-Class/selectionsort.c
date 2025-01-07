// Selection sort
#include <stdio.h>

void selectionSort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		int maxIndex = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] > arr[maxIndex]) {
				maxIndex = j;
			}
		}
		if (maxIndex != i) {
			int temp = arr[i];
			arr[i] = arr[maxIndex];
			arr[maxIndex] = temp;
		}
	}
}

int main() {
	int n;
	printf("Enter the number of elements in the array: ");
	scanf("%d", &n);
	
	int arr[n];
	printf("Enter the elements of the array:\n");
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	selectionSort(arr, n);
	
	printf("Sorted array:\n");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	
	return 0;
}

