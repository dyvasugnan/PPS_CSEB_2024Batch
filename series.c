//lab task 
#include<stdio.h>
#include<math.h>
int main(){
       int num,x;
	   printf("enter any no\n");
	   scanf("%d",&num);
	   printf("enter a no such that we can calculate sum to its power");
	   scanf("%d",&x);
	   int i,sum=0;
	   for(i=0;i<=x;i++){
	     sum=sum+pow(num,i);
		 }
		printf("%d",sum);
		return 0;
		}
