//program to find the element in the array by binary search
#include<stdio.h>
int binary_search(int[],int,int);
int main(){
    int arr[100],n,key,i,mid;
      printf("enter the size of array\n");
      scanf("%d",&n);
      printf("enter the number to be searched \n");
      scanf("%d",&key);
      for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
      }
      int result;
      result=binary_search(arr,key,n);
if(result==-1){
    printf("not found");
     }
else{
    printf("element %d found at %d index",key,mid);
}
return 0;
  }
int binary_search(int a[],int key,int size){
    int low,high,mid;
    low=0;
    high=size-1;
    while(low<=high){
        mid=(low+high)/2;
    if(key==a[mid])
    return mid;
    else if(key>a[mid])
     low=mid+1;
     else 
     high=mid-1;
     }
     return -1;
}