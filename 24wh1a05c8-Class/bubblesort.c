//Bubble sort
#include<stdio.h>

void bubbleSort(int arr[], int n){
	int pass, i;
	for(pass = 0; pass < n - 1; pass++){
		for(i = 0; i < n - pass - 1;i++){
			if(arr[i] > arr[i + 1])
				swap(&arr[i], &arr[i + 1]);
		}
	}
}

void swap(int *p1, int *p2){
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main(){
	int arr[100], size, i;
	printf("Size: ");
	scanf("%d",&size);
	
	for(i = 0;i < size;i++){
		scanf("%d",&arr[i]);
	}
	printf("Before sorting: ");
	for(i = 0;i < size; i++){
		printf("%3d",arr[i]);
	}
	printf("\n");
	
	bubbleSort(arr,size);
	
	printf("After sorting: ");
	for(i = 0;i < size; i++){
		printf("%3d",arr[i]);
	}
	
	return 0;
}
