//incrementing array elements by 1
#include<stdio.h>
int arrInc(int [],int);
int main(){
int a[]={11,12,13,14,15};
int n=sizeof(a)/sizeof(a[0]);
int i;
for(i=0;i<n;i++)
printf("%d ",a[i]);
arrInc(a,n);
printf("\nafter sorting\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
return 0;
}
int arrInc(int a[],int n){
    for(int i=0;i<n;i++){
   a[i]=a[i]+1;
    }
}
