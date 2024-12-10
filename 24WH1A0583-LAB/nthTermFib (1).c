#include<stdio.h>
int NthTerm(int);
int main(){
int n;
printf("Enter nth term:\n");
scanf("%d",&n);
int x= NthTerm(n);
printf("%d\n",x);
return 0;
}
int NthTerm(int n){
int i,t0=0,t1=1,nextterm;
for(i=2;i<=n;i++){
nextterm=t0+t1;
t0=t1;
t1=nextterm;
if(i==n)
return nextterm;
}
}
