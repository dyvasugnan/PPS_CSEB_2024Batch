#include<stdio.h>
#include<math.h>
int main(){
int num;
int sum = 0;
printf("enter any number");
scanf("%d",&num);
while(num!=0&&sum!=1){
 int rem=num%10;
num=num/10;
sum=sum+pow(rem,2);
}
if(sum==1)
printf("happy number");
else
printf("no");
return 0;
}
