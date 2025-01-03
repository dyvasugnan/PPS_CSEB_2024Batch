#include<stdio.h>
#include<math.h>
int main(){
float p,r,t;
 printf("enter the principal amount");
 scanf("%f",&p);
 printf("\nenter the rate of intrest\n");
 scanf("%f",&r);
 printf("\nenter the time taken\n");
 scanf("%f",&t);
 float compound;
 compound = p * pow(1+r/100,t);
 printf("the compound intrest is %f",compound);
return 0;
}
