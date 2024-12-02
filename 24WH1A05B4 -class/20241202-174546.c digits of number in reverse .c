#include<stdio.h>
int main(){
int num,tem;
printf("enter any number");
scanf("%d",&num);
printf("all the digits in the number are:\n");
while (num!=0){
   tem=num%10;
   num=num/10;
   printf("%d\n",tem);
}
return 0;
}