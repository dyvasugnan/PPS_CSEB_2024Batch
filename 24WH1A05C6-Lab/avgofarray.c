//avg of array elements
#include<stdio.h>
float avgofarray(int [],int );
int main(){
   int a[]={5,2,4,3,1};
   int n=sizeof(a)/sizeof(a[0]);
   float avg;
   avg=avgofarray(a,n);
   printf("avg of array elements %.1f\n",avg);
 return 0;}
float avgofarray(int x[],int n){
    int i;
    float sum=0,avg;
    for(i=0;i<n;i++){
       sum+=x[i];}
       printf("sum = %.1f\n",sum);
      avg=sum/n;
     return avg;}
