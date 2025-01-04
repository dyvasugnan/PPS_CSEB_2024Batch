// min and max and avg of array elements
#include<stdio.h>
int main(){
  int a[100],n,min,max,i;
  float sum=0,avg;
  printf("Enter size of array\n");
  scanf("%d",&n);
  printf("Enter %d elements\n",n);
  for(i=0;i<n;i++){
     scanf("%d",&a[i]);
    }
     
     min=a[0],max=a[0];
     for(i=0;i<n;i++){
     sum=sum+a[i];
     if(min>a[i])
        min=a[i];
     if(max<a[i])
        max=a[i];}    
      avg=sum/n;
      printf("\nmin : %d\nmax : %d\navg : %.1f\n",min,max,avg);
      return 0;}