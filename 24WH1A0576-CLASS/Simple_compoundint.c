//to find simple and compound interest
#include<stdio.h>
#include<math.h>
int main()
{
  //for simple intrest
float p,r,t,simple_int;
printf("Enter principal amount :\n");
scanf("%f",&p);
printf("Enter rate of interest:\n");
scanf("%f",&r);
printf("Enter time of intrest :\n");
scanf("%f",&t);
simple_int=(p*r*t)/100;
printf("Simple interest is =%f\n",simple_int); 
//compound intrest
float cp,cr,ct,compound_int;
printf("Enter principal amount(ci):\n");
scanf("%f",&cp);
printf("Enter rate of interest(ci):\n");
scanf("%f",&cr);
printf("Enter time of intrest(ci) :\n");
scanf("%f",&ct);
compound_int=cp*pow((1+cr/100),ct);
printf("Compound interest = %f\n",compound_int);
return 0;
}
