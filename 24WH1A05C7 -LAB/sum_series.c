#include<stdio.h>
#include<math.h>
int main(){
     int i,n,x,sum=0;
	 printf("enter value of x");
	 scanf("%d",&x);
	    printf("enter value of n");
		scanf("%d",&n);
		    for(i=0;i<=n;i++){
			    sum=sum+pow(x,i);
		          	      
			     }
		        printf("sum of deries is %d",sum);
				 return 0;
				 }


