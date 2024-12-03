//sum and average of three numbers
#include<stdio.h>
int main(){
int num, months, days;
printf("any three digit number");
scanf("%d", &num);//5260
months=num/30;
days=num%30;
printf("months=%d\n days=%d", months, days );


 return 0;
 }