#include<stdio.h>
int main(){
int i,sum=0,num,count=0;
scanf("%d",&num);
for(i=1;i<=num;i++){
if(num%i==0){
sum=sum++;
}
}
if(sum=2*num)
printf("perfect number");
else
printf("not perfect number");
return 0;}

