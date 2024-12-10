#include<stdio.h>
int Fib(int);
int main(){
int n;
printf("enter nth term:\n");
scanf("%d",&n);
Fib(n);
return 0;
}
int Fib(int n){
int t1=0,t2=1,i,nextterm;
if(n==1){
printf("%d",t2);
}
else{
printf("%d ",t2);
for(i=2;i<=n;i++){
nextterm=t1+t2;
if(nextterm<n)
printf("%d ",nextterm);
t1=t2;
t2=nextterm;
}
}
}
