#include<stdio.h>

void  ascend_sort(int arr [4]){
int n=4;
int temp;
for(int i=0;i<4;i++){
for(int j=i+1;j<4;j++) {
   if (arr[i]>arr[j]) {
     temp=arr[i];
     arr[i]=arr[j];
      arr[j]=temp;
         }
       }
     }
for(int i=0;i<4;i++){
printf("%d",arr[i]);
}

}

int main () {
int arr[4];
int i;
printf("enter array elements");
for( i=0;i<4;i++) {
scanf("%d",&arr[i]);
}

ascend_sort(arr);

return 0;
}
