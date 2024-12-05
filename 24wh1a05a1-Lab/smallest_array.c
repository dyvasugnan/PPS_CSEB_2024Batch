//function to find the smallest no in the array
#include<stdio.h>
int smallest_no_of_array(int[],int);
int main(){
    int i, arr[50],n;
	printf("enter the range of elements");
	scanf("%d",&n);
	printf("enter all the elements");
	for(i=0;i<n;i++){
	   scanf("%d",&arr[i]);
	      }
	int smallno;
	 smallno=smallest_no_of_array(arr,n);
	 printf("%d is the smallest no of the array",smallno);
	 return 0;
      }
int smallest_no_of_array(int a[],int num){
       int min=0,j;
	   for(j=0;j<num;j++){
	       if(a[j]<min){
		        min=a[j];
				}
				}
		return min;
		}

	              

