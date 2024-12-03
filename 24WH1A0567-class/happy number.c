#include<stdio.h>
int main() {
int n,rem;
  int sum=0;
  printf("enter number: ");
   scanf("%d",&n);
 
    while(n>0) {
        rem=n%10;
        sum=sum+rem*rem;
        n=n/10;
        if(n==0 && sum>9) {
        n=sum;
        sum=0;
        }
}
if(sum==1)
printf("It is a happy number");
else 
  printf("It is not a happy number");
 return 0;
}
