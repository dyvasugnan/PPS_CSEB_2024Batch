#include<stdio.h>
int largest_num(int[]);
int smallest_num(int[]);
int main(){
int max,min;
printf("The largest number in the array is:%d\n",largest_num(max));
printf("The smallest number in the array is:%d\n",smallest_num(min));
return 0;
}
int largest_num(int max){
    int arr[5],i;
for(i=0;i<5;i++){
      scanf("%d",&arr[i]);
}
int max=arr[0];
for(i=1;i<5;i++){
   if(arr[i]>max){
    max=arr[i];
}
   else{
     continue;
}
}
   return max;
}
int smallest_num(int min){
      int arr[5],i;
   for(i=0;i<5;i++){
      scanf("%d",&arr[i]);
   }
int min=arr[0];
   for(i=1;i<5;i++){
      if(arr[i]<min){
           min=arr[i];
  }
       else{
         continue;
}

