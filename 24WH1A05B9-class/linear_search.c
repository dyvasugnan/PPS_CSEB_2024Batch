#include<stdio.h>
int linearsearch(int [],int,int);
int main(){
    int num2;
    scanf("%d",&num2);
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
     linearsearch(arr,n,num2);
    
    
 }
int linearsearch(int arr[],int n,int num2){
    int num;
    for(int i=0;i<n;i++){
        if(arr[i]==num2){
            num=i;
            printf("element is found");
            break;
        
        }
    
    }printf("element is not found");
    
}







