//Menu driven program to find largest, smallest, sum or average
#include <stdio.h>
void findSmallest(int numbers[], int n){
	int smallest = numbers[0];
	for (int i = 1; i < n; i++){
		if (numbers[i] < smallest){
			smallest = numbers[i];
		}
	}
	printf("Smallest number: %d\n", smallest);
}

void findLargest(int numbers[], int n){
	int largest = numbers[0];
	for (int i = 1; i < n; i++){
		if (numbers[i] > largest){
			largest = numbers[i];
		}
	}
	printf("Largest number: %d\n", largest);
}

void findSum(int numbers[], int n){
	int sum = 0;
	for (int i = 0; i < n; i++){
		sum += numbers[i];
	}
	printf("Sum: %d\n", sum);
}

void findAverage(int numbers[], int n){
	int sum = 0;
	for (int i = 0; i < n; i++){
		sum += numbers[i];
	}
	printf("Average: %.2f\n", (float)sum / n);
}

int main(){
	int n, choice;
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	int numbers[n];
	printf("Enter %d numbers: \n", n);
	for (int i = 0; i < n; i++){
		scanf("%d", &numbers[i]);
	}
	do {
		printf("\nMenu:\n");
		printf("1. Find Smallest Number\n");
		printf("2. Find Largest Number\n");
		printf("3. Find Sum\n");
		printf("4. Find Average\n");
		printf("5. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		switch (choice) {
			case 1:
				findSmallest(numbers, n);
				break;
			case 2:
				findLargest(numbers, n);
				break;
			case 3:
				findSum(numbers, n);
				break;
			case 4:
				findAverage(numbers, n);
				break;
			case 5:
				printf("Exiting program.\n");
				break;
			default:
				printf("Invalid choice! Please try again.\n");
		}
	} while (choice != 5);
	return 0;
}
