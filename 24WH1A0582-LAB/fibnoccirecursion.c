#include<stdio.h>
int fibnocci(int);
int main(){
int n,fibno;
printf("enter any number:\n");
scanf("%d",&n);
fibno=fibnocci(n);
printf("%d",fibno);
}
int fibnocci(int n){
if(n==1)
return 0;
if(n==2)
return 1;
return fibnocci(n-1)+fibnocci(n-2);
}


