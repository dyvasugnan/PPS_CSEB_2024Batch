#include<stdio.h>
int arrinc(int[],int);
int main(){
int i;
int a[]={1,2,3,4,5};
int n = sizeof(a)/sizeof(a[0]);
for(i=0;i<n;i++){
  printf("%d",a[i]);
}
 arrinc(a,n);
 printf("\n");
 for(i=0;i<n;i++){
     printf("%d",a[i]);
}
 return 0;
}
 int arrinc(int x[],int n){
 int i;
for(i=0;i<n;i++)
   x[i]=x[i]+1;
}
