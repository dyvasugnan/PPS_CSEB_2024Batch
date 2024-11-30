#include <stdio.h>

int main() {
   int n=8;
   int i,j;
   for(i=n/2;i<n;i=i+2){
       for(j=1;j<n-i;j=j+2)
       printf(" ");
   
      for(j=1;j<i+1;j++)
       printf("*");
     
      for(j=1;j<n-i+1;j++)
       printf(" ");
     
       for(j=1;j<i+1;j++)
        printf("*");
        printf("\n");
   }  
   for(i=n;i>0;i--){
       for(j=0;j<n-i;j++)
       printf(" ");
     
       for(j=1;j<2*i;j++)
       printf("*");
       printf("\n");
       
   }
   return 0;
}
