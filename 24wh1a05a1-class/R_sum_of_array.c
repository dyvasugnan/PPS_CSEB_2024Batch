//finding sum of the array elements using recursions
#include<stdio.h>
int sum_of_array(int[],int);
int main(){
    int arr[50];
    int size;
    printf("enter the size of array\n");
    scanf("%d",&size);
    printf("enter elements in array\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int result;
    result=sum_of_array(arr,size);
    printf("\n%d",result);
    return 0;
}
int sum_of_array(int a[],int n){
    if(n==1){
        return a[0];
    }
    
    return a[n-1]+sum_of_array(a,n-1);
}