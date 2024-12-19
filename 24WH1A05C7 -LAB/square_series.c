#include<stdio.h>
#include<math.h>
int main(){
    int i,n,x,sum=1;
	 printf("enter value of n");
	  scanf("%d",&n);
	   printf("enter value of x");
	    scanf("%d",&x);
		  for(i=1;i<=n;i++){
		  
		
		     sum=sum+pow(-1,i)*pow(x,i)/(2*i);
			 
			  }
			  printf("sum=%d",sum);
			  return 0;
			  }

