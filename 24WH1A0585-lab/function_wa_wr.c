#include<stdio.h>
int sum(int,int);
int main()
{ int n1=10,n2=40,result;
result=sum(n1,n2);
printf("sum of two numbers %d\n",result);
return 0;}
int sum (int n1,int n2)
int temp=n1+n2;
return temp;
}
