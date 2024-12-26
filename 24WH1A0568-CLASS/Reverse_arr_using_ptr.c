#include <stdio.h>

int main() {
    int arr[20],n,i ;  
    printf("enter the no.of element in array:");
    scanf("%d",&n);
    printf("enter array elements \n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
    int *ptr = arr;  
    
    
    printf("Array in reverse order: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", *(ptr + i)); 
    }
    printf("\n");

    return 0;
}

