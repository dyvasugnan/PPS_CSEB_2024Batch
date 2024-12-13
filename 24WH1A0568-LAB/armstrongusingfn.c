//armstrong using a function
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool isarmstrong(int);
int main(){
int n;
bool flag;
scanf("%d",&n);
flag=isarmstrong(n);
if(flag)
printf("%d is armstrong num",n);
else
printf("%d is not armstrong",n);
return 0;
}
bool isarmstrong(int num){
int rem,count=0,sum=0;
int temp=num;
int temp1=num;
while(num!=0){
num=num/10;
count++;}
while(temp!=0){
rem=temp%10;
sum=sum+pow(rem,count);
temp=temp/10;
}
return (sum==temp1);}
