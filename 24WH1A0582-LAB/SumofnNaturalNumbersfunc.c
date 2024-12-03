#include<stdio.h>
int sumofnnaturalnumbers(int);
int main(){
int n;
printf("enter any number:\n");
scanf("%d",&n);
sumofnnatualnumbers(n);
return 0;
}
int sumofnnaturalnumbers(int a){
int result=0,i,n;
for(i=1;i<=n;i++){
result=n+i;
printf("sum of n natural numbers is:%d\n",result);
}
return result;
}
