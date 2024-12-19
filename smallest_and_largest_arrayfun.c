#include<stdio.h>
int smallest(int[],int);
int largest(int[],int);
int main(){
    int a[5];
    int min,max;
    int i;
    int n=sizeof(a)/sizeofa[0];
    printf("enter any values\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
     }
   printf("the smallest element in array :%d",smallest(a,min));
   printf("the largest element in array :%d",largest(a,max));
   return 0;
}
int smallest(int a[5],int min=a[0]){
  int n,i;
  for(i=0;i<n;i++){
   if(a[i]< min){
 int  smallestnum = a[i];
}}}
int largest(int a[5],int max=a[0]){
int i,n;
  for(i=0;i<n;i++){
     if(a[i]>max){
    int largesnum=a[i];
}}
}
