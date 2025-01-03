//Max of array
#include<stdio.h>
int main(){
	int arr[10],n;
	printf("Enter size: ");
	scanf("%d",&n);
	
	printf("Enter elements: ");
	for(int i = 0;i < n;i++){
		scanf("%d",&arr[i]);
	}
	int max = arr[0];
	for(int i = 0;i < n;i++){
		if(arr[i] > max)
			max = arr[i];
	}

	printf("Max is: %d ",max);
	return 0;
}
