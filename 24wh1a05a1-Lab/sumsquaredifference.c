 //finding sum and squares diff in project euler
#include<stdio.h>

int main(){
 int n,sum_of_square,square_of_sum,result;
     printf("enter the range");
	 scanf("%d",&n);
	 sum_of_square=( n*(n+1)*(2*n+1))/6;
	 square_of_sum=((n*(n+1))/2)*((n*(n+1))/2);
	 result= square_of_sum-sum_of_square;
	 printf("%d",result);
	 return 0;
	 }
   
