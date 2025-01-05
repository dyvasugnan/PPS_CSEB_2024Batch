#include<stdio.h>
int linear(int arr[],int n);
int main()
{
    int arr[] = { 1,2,3,4,5 };
    int n;
    printf("enter number");
    scanf("%d",&n);
    int index = linear(arr,n);
    if(index!=-1 && index<5)
    printf("%d\n",index);
    else
    printf("not found");
    
    return 0;
}
   int linear(int a[],int n){
   int i,index = -1;
   for(i=0;i<5;i++){
    if(a[i]==n){
    index = i;
    break;
    }
    }
    return index;
    }