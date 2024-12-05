//min using functions
#include<stdio.h>

  int min_elementinarr(int[],int);

int main(){
int n,i;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
int min = min_elementinarr(arr,n);

  printf("min  of array = %d",min);
 return 0;

}

int min_elementinarr(int arr[],int n){
int i,min=arr[0];
for(i=0;i<n;i++){
if(min>arr[i])
   min = arr[i];
}
return min;
}
