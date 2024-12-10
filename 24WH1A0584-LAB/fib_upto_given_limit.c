//fibonacci series upto the given element//
#include<stdio.h>
int fibonacci_upto_maxTerm_req(int);
int main(){
      int n;
      printf("Enter max terms needed:\n");
      scanf("%d",&n);
      int fib=fibonacci_upto_maxTerm_req(n);
      return 0;
}
int fibonacci_upto_maxTerm_req(int n){
      int t1=0,t2=1,i,nextterm;
      printf("%d",t1);
      printf("%4d",t2);
      nextterm=t1+t2;
      while(n){
         nextterm=t1+t2;
         if(nextterm>n)
              break;
         printf("%4d",nextterm);
         t1=t2;
         t2=nextterm;
      }
}

