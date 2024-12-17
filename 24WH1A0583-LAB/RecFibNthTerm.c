#include<stdio.h>
int NthTerm(int);
int main(){
int n,x;
scanf("%d",&n);
x=NthTerm(n);
printf("%d\n",x);
}
int NthTerm(int n){
if(n==0)
return 0;
if(n==1)
return 1;
return NthTerm(n-1)+NthTerm(n-2);
}

