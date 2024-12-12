//prime or not
#include<stdio.h>
int main(){
   int n,count=0;
int i;
printf("enter any number\n");
scanf("%d",&n);
for(i=1;i<=n;i++){
    if(n%i==0)
       count++;
}
if(count<=2)
    printf("number is prime\n");
else
    printf("number is not prime\n");
return 0;}
