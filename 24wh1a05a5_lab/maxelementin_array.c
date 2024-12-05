//max of the array
#include<stdio.h>

  int max_elementinarr(int[],int);
 
int main(){
int n,i;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
int max = max_elementinarr(arr,n);

  printf("max of array = %d",max);
 return 0;

}

int max_elementinarr(int arr[],int n){
int i,max=arr[0];
for(i=0;i<n;i++){

if(arr[0]<arr[i])
max = arr[i];

}

return max;

    }
