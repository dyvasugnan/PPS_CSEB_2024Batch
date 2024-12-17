//displaying reverse of an array by recursions
#include<stdio.h>
void revarrray(int arr[],int size);
int main(){
    int arr[100];
    int size;
    printf("enter the size\n");
    scanf("%d",&size);
    printf("enter all elements in array\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
  void  revarray( arr,size);
    return 0;
}
void revarray(int a[],int n){
    if(n==1){
        printf("%d",a[0]);
    }
    printf("%d",a[n-1]);
    revarray(a,n-1);
}