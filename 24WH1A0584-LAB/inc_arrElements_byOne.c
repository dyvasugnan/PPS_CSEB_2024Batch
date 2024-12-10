//incrementing arr elements//
#include<stdio.h>
int arr_inc(int[],int);
int main(){
      int a[]={1,6,5,4,8};
      int i,n;
      n=sizeof(a)/sizeof(a[0]);
      for(i=0;i<n;i++)
         printf("%4d",a[i]);
      arr_inc(a,n);
      printf("\n");
      for(i=0;i<n;i++)
         printf("%4d",a[i]);
      return 0;
}
int arr_inc(int x[],int n){
      int i;
      for(i=0;i<n;i++)
          x[i]=x[i]+1;
}

