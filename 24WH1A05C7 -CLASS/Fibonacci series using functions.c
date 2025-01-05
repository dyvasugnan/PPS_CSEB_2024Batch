#include<stdio.h>
int fibo(int n);
int main()
{
int n,i,to=0,t1=1,nextterm;
printf("enter");
scanf("%d",&n);
printf("%d %d",to,t1);
nextterm=fibo(n);

 return 0;
}
int fibo(int n){
int nextterm,to=0,t1=1,i;
for(i=0;i<=n;i++){
nextterm=to+t1;
printf(" %d ",nextterm);
to=t1;
t1=nextterm;
}

return nextterm;
}