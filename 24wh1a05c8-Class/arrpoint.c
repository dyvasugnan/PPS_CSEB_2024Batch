//Display array using pointer
#include<stdio.h>
int main(){
	int *ptr, arr[10],n,i;
	printf("Size: ");
	scanf("%d",&n);
	ptr = arr;
	
	printf("Elements of array: ");
	for(i = 0;i < n;i++){
		scanf("%d",ptr + i);
	}		
	
	printf("Elements are: \n");
	for(i = 0;i < n;i++){
		printf("%2d",*(ptr + i));
	}
	
	return 0;
}
