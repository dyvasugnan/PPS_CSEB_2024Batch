#include<stdio.h>
int sum(int,int);
 int main(){
   int n1,n2;
  printf("enter any two numnbers\n");
  scanf("%d",&n1,&n2);
int value = sum(n1,n2);
 printf("the sum of two numbers is%d",value);
return 0;
}

int sum(int num1,int num2 ){
 int add = num1+num2;
 return add;
}
  
