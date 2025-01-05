#include<stdio.h>
 int arrinc(int[],int);
 int main(){

     int i,size;
     int a[]={1,2,3,4,5};
     int n= sizeof(a)/sizeof(a[0]);
          arrinc(a,n);
         for(i=0;i<n;i++)
            printf("%d",a[i]);
}
int arrinc(int x[],int n){

         for(int i=0;i<n;i++) 
          x[i]=x[i]+1; 
}
