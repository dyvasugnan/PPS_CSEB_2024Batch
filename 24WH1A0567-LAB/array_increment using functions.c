#include<stdio.h>

int arr_increment(int arr[],int n){
for(int i=0;i<n;i++) {
arr[i]=arr[i]+1;
}
}

int main () {
int arr[]={1,2,3,4,5};
int n=sizeof(arr)/sizeof(arr[0]);
arr_increment(arr,n);
for(int i=0;i<n;i++) {
printf("%d",arr[i]);
}
return 0;
}


