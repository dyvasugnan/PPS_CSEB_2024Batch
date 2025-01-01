//structure padding 
#include<stdio.h>
struct test{
   int a;
   float b;
   char c;
   }t={12,14.4,'d'};
   
   int main(){
   
   printf("%d\n", sizeof(t));
      printf("%d\n", t.a);
         printf("%f\n",t.b);
            printf("%c\n",t.c);
   
   
   return 0;
   }
   