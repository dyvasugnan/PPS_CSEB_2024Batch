#include<stdio.h>
int linear(int arr[],int n);
int main(){
int index;
int arr[]={1,2,3,4,5};
int n=3;
index= linear(arr,n);
   if(index!=-1 && index<5)
   printf("%d\n",index);
   else
   printf("not present");
    
   }
   int linear(int a[],int n){
   int i,index=-1;
   for(i=0;i<5;i++){
   n=3;
   
    if(a[i]==n){
      index = i;
	  break;
	  }}
	  return index;
	  }
