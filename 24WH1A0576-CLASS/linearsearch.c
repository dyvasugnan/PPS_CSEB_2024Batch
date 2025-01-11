//linear search (sequential search)
#include<stdio.h>
int linearSearch(int key,int arr[],int size);
int main(){
    int size;
    printf("Enter no. of Elements in an Array:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter elements in array:\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    } 
    int key;
    printf("Enter the Element to be Searched:\n");
    scanf("%d",&key);
    int res;
    res=linearSearch(key,arr,size);
    if(res!=-1){
        printf("%d is found in %d index\n",key,res);
    } else{
        printf("%d is not available in the array\n",key);
    }
}
int linearSearch(int key,int arr[],int size){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
         return i;
    }
  } return -1;
}
