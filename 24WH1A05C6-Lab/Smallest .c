#include<stdio.h>
int smallest(int [],int);
int main(){
   int a[]={3,2,8,4,5};
   int min;
   int n=sizeof(a)/sizeof(a[0]);
    min=smallest(a,n);
     printf("smallest %d",min);
   return 0;}
int smallest(int x[5],int n){
    int i,min=x[0];
    for(i=0;i<n;i++){
       if(min>x[i])
         min=x[i];}
    
      
      return min;
      }   
   
 