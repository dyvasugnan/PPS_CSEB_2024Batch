#include<stdio.h>
 

int swapping(int*,int*);
 
 int main(){
 
   int n1 = 3 , n2 = 6;

   printf("before swapping\n");

   printf("n1=%d and n2=%d\n",n1,n2);

   

   swapping(&n1,&n2);

   printf("after swapping");

   printf("n1=%d  and  n2=%d\n",n1,n2);

   return 0;

  }

  int swapping(int *ptr1,int*ptr2){
   
        int temp = *(ptr1);

        *(ptr1) = *(ptr2);

        *(ptr2) = temp;
   }