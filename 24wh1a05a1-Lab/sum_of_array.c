//fuction to find sum of all elements in c
#include<stdio.h>
int sum_of_array(int[],int);
int main(){
     int arr[50];
	 int n,i;
	 printf("enter the range of elements");
	 scanf("%d",&n);
	 for(i=0;i<n;i++){
	    scanf("%d",&arr[i]);
		}
     int sum;
	    sum=sum_of_array(arr,n);
		printf("%d",sum);
		return 0;
		}
  int sum_of_array(int a[],int num){
         int sum1=0,j;
		 for(j=0;j<num;j++){
		     sum1=sum1+a[j];
			    }
		return sum1;
		}
