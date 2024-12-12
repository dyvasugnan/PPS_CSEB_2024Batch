#include<stdio.h>

int linearSearch(int[],int,int);
int main(){
		int arr[10], element, size;
		printf("Enter size of array:");
		scanf("%d", &size);

		printf("Enter array:");
		for(int i = 0;i < size;i++){
			scanf("%d",&arr[i]);
		}

		printf("Enter element: ");
		scanf("%d", &element);

		int n = sizeof(arr) / sizeof(arr[0]);
		
		int index = linearSearch(arr,n,element);

		if(index < n && index != -1)
			printf("Element is present in index %d\n",index);
		else
			printf("Element is not present in array\n");

		return 0;
	}

int linearSearch(int arr[], int n, int element){
		int index = -1;
	
		for(int i = 0;i < n;i++){
			if(arr[i] == element)
				index = i;
			}

		return index;
	}
