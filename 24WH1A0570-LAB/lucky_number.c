#include<stdio.h>
int main(){
 int n;
printf("enter any number");
scanf("%d",&n);
while(n>9){
     int sum = 0;
  while(n!=0){
  int rem = n%10;
  n = n/10;
  sum +=rem;
       }
  n = sum;
       }
printf("the lucky number is:%d",n);
 return 0;

}
