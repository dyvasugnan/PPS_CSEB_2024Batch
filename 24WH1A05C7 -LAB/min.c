//finfing minimum element in given array elements
#include<stdio.h>
int minimum(int []);
int main(){
int n,a[5],i;
printf("enter elements\n");
  for(i=0;i<5;i++){
  scanf("%d",&a[i]);
  }
int min = minimum(a);
  printf("minimum element %d\n",min);
  return 0;
  }
  int minimum(int b[]){
   int i,min=b[0];
   for(i=0;i<5;i++){
    if(b[i]<min){
	min = b[i];
	}
	}
	return min;
	}

