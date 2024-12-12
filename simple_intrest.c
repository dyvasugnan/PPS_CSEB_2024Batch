// write a program for simple interst
#include<stdio.h>
int main()
{
int principal_amount,time;
float rate_of_interst,simple_interst;
printf("enter  principal_amount \n");
scanf("%d",&principal_amount);
printf("enetr time \n");
scanf("%d",&time);
printf("enter rate_of_interst \n");
scanf("%f",&rate_of_interst);
simple_interst= (principal_amount*rate_of_interst*time)/100;
printf("%f",simple_interst);
return 0;
}
