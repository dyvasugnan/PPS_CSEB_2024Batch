//searching for a element in given array using linear search 
#include<stdio.h>

int main(){
int a[100] ,n,i,se,found=0;
printf("enter the size of an array");
scanf("%d",&n);
printf("enter %d elements into the array ");
for(i=0;i<n;i++){
 scanf("%d",&a[i] );} 
 printf("enter search element ");
 scanf("%d", &se);
 for(i=0;i<n;i++){
 if(a[i]==se) {
 printf("search element is found at location%d", i);
   found=1;
   break;
   }
   }
   if(found==0){
   printf("search element is not found");
   }
   return 0;
}

