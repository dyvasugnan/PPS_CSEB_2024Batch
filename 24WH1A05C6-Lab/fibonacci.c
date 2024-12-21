// fibonacci sequence upto n terms
#include<stdio.h>
int main(){
      int num,t1,t2,t3,i;
        i=0,t1=0,t2=1;
      printf("enter any number\n");
      scanf("%d",&num);
      while(i<=num){  
         printf("  %d",t1);
         t3=t1+t2;
         t1=t2;
         t2=t3;
          i++;
             }
    return 0;}
          
