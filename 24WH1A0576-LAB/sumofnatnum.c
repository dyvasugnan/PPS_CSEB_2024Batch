//sum of n natural numbers
#include<stdio.h>
int sumofnatnum(int);
int main(){
int num,sum;
printf("enter value of n:\n");
scanf("%d",&num);
sum= sumofnatnum(num);
printf("sum:%d\n",sum);
return 0;
}
int sumofnatnum(int x){
int sum=0,i;
for(i=1;i<=x;i++)
sum+=i;
return sum;
}

