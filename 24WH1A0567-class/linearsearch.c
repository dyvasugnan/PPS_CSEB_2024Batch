#include <stdio.h>
int linSearch(int [],int, int);
int main() {
    int arr[20],i,size,n;
    printf("enter size");
    scanf("%d",&size);
    printf("enter elements of the array:");
    for(i=0;i<size;i++)
    scanf("%d",&arr[i]);
    printf("enter the element to be searched");
    scanf("%d",&n);
    
    int pos= linSearch(arr, 10,n);
  if(pos==-1) 
    printf("element not found");
  else
    printf("Element found at %d location",pos);
    return 0;
}

int linSearch(int x[], int size,int num){
    int i,count=0;
    for(i=0;i<size;i++){
        if (x[i] == num){
        return i;
          break;
        }
    }
  
    return -1;
}
