#include<stdio.h>
int main(){
   int arr[10];
   int *ptr=arr;
    int i;
printf("array elements\n");
  for(i=0;i<10;i++){ 
    scanf("%d",(ptr+i));
   
}
printf("%d",*ptr);
for(i=0;i<10;i++){
   printf("elements:%d\n",*(ptr+i));
}
return 0;
}


