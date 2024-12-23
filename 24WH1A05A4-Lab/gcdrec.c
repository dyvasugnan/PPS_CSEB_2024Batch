//to find gcd using recurssion
#include<stdio.h>
int gcd(int,int);
int main(){
  int n1,n2,res;
  printf("enter two numbers");
  scanf("%d%d",&n1,&n2);
  res=gcd(n1,n2);
  printf("gcd=%d",res);
  return 0;
}
int gcd(int a,int b){
  if(b==0)
  return a;
  return gcd(b,a%b);
  
}
  
