//to find sum and avg of array elements using function
#include<stdio.h>
int sumandavg(int[],int);
int main(){
int n;
printf("enter the size of array");
scanf("%d",&n);
int a[n],i,x;
for(i=0;i<n;i++){
   scanf("%d",&a[i]);
}
 x = sumandavg(a,n);
  printf("sum=%d",x);
  printf("avg=%d",x/n);
 return 0;
}
int sumandavg(int a[],int n){
    int i,sum=0;
    for(i=0;i<n;i++){
        sum=sum+a[i];
       }
   return sum;
}
