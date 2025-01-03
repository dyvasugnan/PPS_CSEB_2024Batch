//finding roots of quadratic equation
#include<stdio.h>
#include<math.h>
int main(){
float a,b,c,disc,root1,root2;
  printf("enter a value ");
  scanf("%f",&a);
  printf("enter b value");
  scanf("%f",&b);
  printf("enter c value");
  scanf("%f",&c);
 
   disc=b*b-4*a*c;
root1=(-b+sqrt(disc))/(2*a);
root2=(-b-sqrt(disc))/(2*a);

printf("root1=%f\n",root1);
printf("root2=%f\n",root2);
return 1;
}


