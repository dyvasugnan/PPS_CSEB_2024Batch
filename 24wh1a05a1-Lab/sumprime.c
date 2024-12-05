//summation of all the primes in the given range
#include<stdio.h>
int main(){
   int i,count=0,sum=0,number,range;
   
   printf("enter range \n");
   scanf("%d",&range);
   for(number=2;number<range;number++){
          count=0;
		  for(i=2;i<number;i++){
		     if(number%i==0){
			    count++;
				}}
				if(count==0){
				  // printf("%d",number);
			sum=sum+number;	   }
         				   }
         printf("/n");				   
			printf("%d",sum);			   
		             		   
	
	return 0;
	}
