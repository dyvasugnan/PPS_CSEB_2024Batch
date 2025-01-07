//Insertion sort
#include<stdio.h>

void insertionSort(int a[], int n){
	int key, step, j;
	for(step = 1; step < n; step++){
		key = a[step];
		j = step - 1;
		while(key < a[j] && j >= 0){
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = key;
	}
}

int main(){
	int n, a[100];
	printf("Size: ");
	scanf("%d",&n);
	
	for(int i = 0; i < n; i++)
		scanf("%d",&a[i]);
		
	printf("Before sorting: ");
	for(int  i = 0; i < n; i++)
		printf("%3d",a[i]);
	printf("\n");
	
	insertionSort(a,n);
	
	printf("After sorting: ");
	for(int i = 0; i < n; i++){
		printf("%3d",a[i]);
	}
	
	return 0;
}
