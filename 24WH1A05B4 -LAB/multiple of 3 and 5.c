//multiples of 3 and 5 between n number
#include<stdio.h>

int main(){

int i,n;

   printf("enter no. of terms to be printed:\n");
   
   scanf("%d",&n);
 
for(i=0;i<n;i++)

    if(i%3==0)
    
         printf("%d\n",i);
         
 else if(i%5==0)
 
         printf("%d\n",i);  
 else 
 
          printf("");
   
   return 0;
   
   }

    