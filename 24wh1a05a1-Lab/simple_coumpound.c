//finding simple and comound interest
#include<stdio.h>
#include<math.h>
int main()
{
float p,r,t,si,amount,ci;
printf(" Enter principal amount :");
scanf("%f",&p);
printf("Enter rate of interest:");
 scanf("%f",&r);
printf("Enter time :");
scanf("%f",&t);
si=p*t*r/100;
printf("\nSimple interest =%f",si); 
amount=p*pow((1+r/100),t);
ci=amount-p;
printf("\nCompound interest = %f",ci);
return 0;
}