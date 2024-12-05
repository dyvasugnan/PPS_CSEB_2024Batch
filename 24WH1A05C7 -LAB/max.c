//finfing maximum element in arrays
#include<stdio.h>
int maximum(int []);
int main(){
int i,max,a[5]={1,2,3,4,5};
      printf("array elements");
      for(i=0;i<5;i++){
         printf("%4d",a[i]);
         }
       max = maximum(a);
		 printf("\n");
	     printf("maximum element in array");
	    
        	  printf("%d",max);
	          
	  return 0;
	  }
   int maximum(int b[]){
   int i;
   int max=b[0];
   for(i=0;i<5;i++){
    if(b[i]>max)
	{
	max=b[i];
	}
	}
	return max;
	}


