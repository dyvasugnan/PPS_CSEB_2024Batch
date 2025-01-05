#include<stdio.h>
int sum(int);
int main(){
int a;
a=sum(5);
printf("%d",a);
}
int sum(int n){
int s=0;
if(n==1)
return 1;
else
s = n+ sum(n-1);
return s;
}