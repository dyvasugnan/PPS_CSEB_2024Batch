// To calculate the sum of elments in array
#include<stdio.h>
int array_sum(int[],int);
int main(){
int n,sum;
printf("enter size of array");
scanf("%d",&n);
int a[]={9,4,7,5,2,6,3,1,4};
int i;
for(i=0;i<n;i++)
printf("%4d",a[i]);
sum=array_sum(a,n);
printf("\n sum:%d",sum);
return 0;
}
int array_sum(int a[],int n){
int i=0,sum=0;
for(i=0;i<n;i++){
sum+=a[i];
}
return sum;
}
