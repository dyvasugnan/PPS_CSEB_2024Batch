//armstrong number
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool armstrong(int);
 
int main () {
int n;
bool flag;
printf("enter number");
scanf("%d",&n);
flag=armstrong(n);
if(flag) 
printf("%d armstrong number",n);
else 
printf("%d not a armstrong number",n);
return 0;
}
bool armstrong(int num) {
int rem,count=0,sum=0;
int temp=num;
int ori=num;
while(temp!=0) {
temp=temp/10;
count++;}
while (num!=0){
rem=num%10;
sum+=pow(rem,count);
num=num/10;
}
return (sum==ori);
}
 
