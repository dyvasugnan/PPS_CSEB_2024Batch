#include<stdio.h>
int linearsearching(int [],int,int);
int main(){
    int element;
    scanf("%d",&element);
    int arr[]={1,2,3,43,12,78};
    int n=sizeof(arr)/sizeof(arr[0]);
    int index= linearsearching(arr,n,element);
    if(index<n)
      printf("element present at index=%d\n",index);
    else
      printf("element not present in an array\n");
    
 }
int linearsearching(int arr[],int n,int element){
    int index;
    for(int i=0;i<n;i++){
        if(arr[i]==element){
            index=i;
            break;
        }
    }
    return index;
 }







