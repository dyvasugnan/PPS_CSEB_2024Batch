// write a program for compound interst
#include<stdio.h>
#include<math.h>
int main(){
int principal_amount,time;
float rate_of_intrest,compound_intrest;
printf("Enter principal_amount \n");
scanf("%d",& principal_amount);
printf("enter time \n");
scanf("%d",&time);
printf("enter rate_of_intrest\n");
scanf("%f",&rate_of_intrest);
compound_intrest= principal_amount*(pow((1+rate_of_intrest/100),time));
printf("%f",compound_intrest);
return 0;
}
