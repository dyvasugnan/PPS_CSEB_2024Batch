//bubble sorting function 
#include<stdio.h>
void bubblesort(int[],int);
void swap(int*,int*);
int main(){
    int arr[50],i,n;
    printf("enter size\n");
    scanf("%d",&n);
    printf("enter %d elements",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("before sorting \n");
    for(int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    bubblesort(arr,n);
    printf("\n after sorting \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
} 
void bubblesort(int a[],int n){
    for(int pass=0;pass<n-1;pass++){
        for(int i=0;i<n-pass-i;i++){
            if(a[i]>a[i+1]){
                swap(&a[i],&a[i+1]);

            }
        }
    }
}
void swap(int *p1,int *p2){
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}