//Binary search
#include<stdio.h>

int binarySearch(int a[],int key, int n){
	int low, high, mid;
	low = 0, high = n - 1;
	while(low <= high){
		mid = (low + high) / 2;
		if(key == a[mid])
			return mid;
		else if(key > a[mid])
			low = mid + 1;
		else
			high = mid - 1;
			
	}
	return -1;
}

int main(){
	int a[100], n, key, i;
	printf("Enter size: ");
	scanf("%d",&n);
	
	for(i = 0;i < n; i++){
		scanf("%d",&a[i]);	
	}
	printf("Enter key value: ");
	scanf("%d",&key);
	
	int res = binarySearch(a,key,n);
	if(res == -1)
		printf("Not found\n");
	else
		printf("Element is found in index %d",res);
		
	return 0;
}
