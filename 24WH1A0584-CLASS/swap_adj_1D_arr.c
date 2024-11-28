#include<stdio.h>
int main(){
    int a[10]={1,2,3,4,5,6},i,n=6,temp;
    for(i=0;i<n-1;i=i+2){
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
    printf("\n");
    return 0;
    
}