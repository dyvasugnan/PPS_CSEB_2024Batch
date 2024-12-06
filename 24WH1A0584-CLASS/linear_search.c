#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5},element,i;
    int n=sizeof(a)/sizeof(a[0]);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf ("Enter your element to be searched\n");
    scanf("%d",&element);
    for(i=0;i<n;i++){
        if(a[i]==element){
            printf ("Element is found at the index:%d\n",i);
            break;
        }
    }
    if(i==n){
        printf ("Element is not found\n");
    }
    return 0;
}