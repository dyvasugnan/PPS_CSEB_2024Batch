// results of all operators
#include<stdio.h>
int main(){
     int n1,n2;
       printf("enter any two numbers\n");
       scanf("%d%d",&n1,&n2);
        printf("%d\n%d\n%d\n%d\n%d\n",n1+n2,n1-n2,n1*n2,n1/n2,n1%n2);
        printf("%d\n%d\n%d\n",n1&&n2,n1||n2,!n2);
        printf("%d\n%d\n%d\n%d\n%d\n%d\n",n1==n2,n1!=n2,n1>n2,n1<n2,n1>=n2,n1<=n2);
        printf("%d\n%d\n",n1++,n2--);
        printf("%d\n%d\n%d\n%d\n",n1&n2,n1|n2,n1^n2,~n2);
        printf("%d\n%d\n",n1>>2,n1<<1);
        printf("%d\n",n1>n2?n1:n2);
      
  return 0;}
