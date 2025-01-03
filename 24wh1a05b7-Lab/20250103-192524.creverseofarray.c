//displaying the reverse of an array
#include<stdio.h>
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
     int i;
      int *ptr=arr;
     printf("reverse of array\n");
     for( i=9;i>=0;i--){
    

printf("reverse of array :%d\n",*(ptr+i));
}
return 0;
}