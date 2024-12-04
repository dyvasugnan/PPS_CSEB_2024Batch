#include<stdio.h>
int sum_arr(int[],int);
int main(){
  int a[5],i,sum;
  int n=sizeof(a)/sizeof(a[0]);
  printf("Enter array elements:\n");
  for (i=0;i<n;i++) {
        scanf("%d",&a[i]);
  }
  sum = sum_arr(a,n);
  printf("Sum of array elements= %d\n", sum);
    return 0;
}
int sum_arr(int a[],int n) {
    int i,sum=0;
    for (i=0; i<n;i++) {
        sum=sum+a[i];
    }
    return sum;
}