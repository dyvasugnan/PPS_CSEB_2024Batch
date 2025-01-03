#include<stdio.h>
int sumofnaturalnumbers(n){
int i;
int sum=0;
for(i=1;i<=n;i++){
sum+=i;}
return sum;
}
int main(){
int n;
printf("enter a positive number:");
scanf("%d",&n);
if(n>0){
int sum=sumofnaturalnumbers(n);
printf("sum of first %d natural numbers:%d\n",n,sum);
}
return 0;}

