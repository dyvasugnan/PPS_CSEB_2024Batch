//factorial of a number by using non- recursion 
#include<stdio.h>
int main(){
int i,n,factorial=1;
printf("enter n value: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
factorial*=i;
printf("%d",factorial);
return 0;
}
