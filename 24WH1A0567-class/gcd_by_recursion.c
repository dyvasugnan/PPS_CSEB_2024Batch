#include <stdio.h>

int gcd(int num1,int num2){
  if (num1==0)
    return num2;
  if (num2==0)
    return num1;
  if(num2>num1 && num1!=0)
    return gcd(num1,num2%num1);
  if(num1>num2 && num2!=0)
    return gcd(num2,num1%num2);
}
int main() {
   int n1,n2;
   scanf("%d%d",&n1,&n2);
   printf("%d", gcd(n1,n2));
    return 0;
}
