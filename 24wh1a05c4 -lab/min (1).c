// ti find the minimum of array using functions
#include<stdio.h>
int minnumber(int[],int);
int main(){
int i;
int a[5];
int n=sizeof(a)/sizeof(a[0]);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
int min=minnumber(a,n);

printf("%d",min);
return 0;
}
int minnumber(int a[],int n){
int i,min;
min=a[0];
for(i=1;i<n;i++){
if(a[i]<min){
min=a[i];
}}
return min;
}
