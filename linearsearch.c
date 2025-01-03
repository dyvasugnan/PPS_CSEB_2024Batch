#include<stdio.h>
int main(){
    int size,arr[50],n;
    int i,j;
    printf("enter size of array \n");
    scanf("%d",&size);
    printf("enter the no you want to search\n");
    scanf("%d",&n);
    printf("enter the elements of array\n");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(j=0;j<size;j++){
        if(n==arr[j]){
            printf("the required no %d is found at %d index",n,j);
          return 0;  }
  }
    if(n!=arr[j]){
          printf("the element not found");   
           }
          return 0;
}
    
