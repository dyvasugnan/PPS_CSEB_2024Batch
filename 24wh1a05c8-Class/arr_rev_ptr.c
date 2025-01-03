//Display reverse array using pointer
#include<stdio.h>

int main(){
	int arr[10],n,*ptr;
	printf("Enter size: ");
	scanf("%d",&n);
	ptr = arr;
	
	for(int i = 0;i < n;i++){
		scanf("%d",ptr + i);
	}
	
	printf("Reverse of elements are: ");
	for(int i = n - 1;i >= 0;i--){
		printf("%3d",*(ptr + i));
	}
	
	return 0;
}
