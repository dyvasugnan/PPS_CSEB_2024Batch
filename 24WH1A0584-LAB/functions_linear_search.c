//searching an element in functions (linear searching) //
#include<stdio.h>
int linear_search(int[],int,int);
int main(){
    int a[]={1,2,3,4,5},i,element,search;
    int n=sizeof(a)/sizeof(a[0]);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf ("Enter your element to be searched\n");
    scanf("%d",&element);
    search=linear_search(a,n,element);
    return 0;
}
int linear_search(int a[],int n,int element){
    int i;
    for(i=0;i<n;i++){
        if(a[i]==element){
            printf("Element is found at the index:%d\n",i);
            break;
        }
    }
    if(i==n){
        printf("Element is not found\n");
    }
}