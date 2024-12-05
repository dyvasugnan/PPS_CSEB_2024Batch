//largest element in array
#include<stdio.h>
int largest_ele(int [],int);
int main(){
        int a[]={2,4,9,13,1};
        int n=sizeof(a)/sizeof(a[0]),max;
        max=largest_ele(a,n);
       printf("largest element in array:%d\n",max);
      return 0;}
int largest_ele(int x[],int n){
       int i,max=x[0];
       for(i=0;i<n;i++){
            if(max<x[i])
              max=x[i];}
          return max;}
