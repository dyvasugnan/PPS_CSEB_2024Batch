#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
     int i;
      int *ptr=arr;
     printf("reverse of array\n");
     for( i=4;i>=0;i--){
    

printf("reverse of array :%d\n",*(ptr+i));
}
return 0;
}
