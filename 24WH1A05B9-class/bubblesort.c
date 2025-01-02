#include<stdio.h>
void bubbleshot(int[],int);
void swap(int* ,int* );
int main(){
    int arr[]={1,2,5,3,7,9,4};
    int n=sizeof(arr)/sizeof(arr[0]);
     bubbleshot(arr,n);
     for(int i=0;i<n;i++){
     printf("%4d",arr[i]);
     }

}
void bubbleshot(int arr[],int n){
    int i,pass;
    for(pass=0;pass<n-1;pass++){
        for(i=0;i<n-pass-1;i++){
            if(arr[i]>arr[i+1]){
                swap(&arr[i],&arr[i+1]);
            }
        }
    }
}
void swap(int*p1,int*p2){

    int temp=*p1;
      *p1=*p2;
      *p2=temp;

}