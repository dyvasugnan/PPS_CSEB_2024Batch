//function to find the biggestest no in the array
#include<stdio.h>
int biggest_no_of_array(int[],int);
int main(){
    int i, arr[50],n;
	printf("enter the range of elements");
	scanf("%d",&n);
	printf("enter all the elements");
	for(i=0;i<n;i++){
	   scanf("%d",&arr[i]);
	      }
	int maxno;
	 maxno=biggest_no_of_array(arr,n);
	 printf("%d is the biggest no of the array",maxno);
	 return 0;
      }
int biggest_no_of_array(int a[],int num){
       int max=0,j;
	   for(j=0;j<num;j++){
	       if(a[j]>max){
		        max=a[j];
				}
				}
		return max;
		}

	              

