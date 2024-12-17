//recursion on linear search
#include<stdio.h>
int linearsearch(int[],int,int,int);
int main(){
    int arr[100];
    int size;
    printf("enter the size of array\n");
    scanf("%d",&size);
    int n;
    printf("enter the no you want to search\n");
    scanf("%d",&n);
    printf("enter elements in array\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int result;
    result=linearsearch(arr,size,n,0);
    if(result==1){
        printf("element %d is found",n);
         }
      else{
        printf("element %d is not found",n);
      }
      return 0;
      }
      int linearsearch(int a[],int range, int num,int i){
        if(i>=range){
            return 0;
        }
        if(a[i]==num){
            return 1;
        }
        
     return linearsearch(a,range,num,i+1);
      }