//finding a no in a one dimensional array
#include<stdio.h>
int linear_search(int[],int,int);
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int n;
    printf("enter any no \n");
    scanf("%d",&n);
    
    int result=linear_search(arr,10,n);
    if(result==1){
        printf("element %d is found",n);
    }
    else{
        printf("element %d is not found",n);
    }
    return 0;
}
int linear_search(int a[],int size,int num){
    int i;
    for(i=0;i<size;i++){
        if(a[i]==num){
            return 1;
        }
        }
        
            return 0;
    
    
}