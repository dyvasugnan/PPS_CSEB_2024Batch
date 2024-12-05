#include <stdio.h>
 float areaofCircle (float);
float areaofrectangle(float, float);
float areaoftriangle(float, float);

int main(){
int n;
float x,r,l,b, ba, h;
char ch;
do {
printf("MENU\n");
printf("1.AREA OF CIRCLE\n");
printf("2.AREA OF RECTANGLE\n");
printf("3.AREA OF TRIANGLE\n");
printf("4.EXIT\n");
printf("enter any number");
scanf("%d",&n);
switch(n){
case 1:
  printf("enter radius");
  scanf("%f",&r);
  x=areaofCircle(r);
  printf("%f",x);
  break;
case 2:
  printf("enter length and breadth ");
  scanf("%f%f",&l,&n);
  x=areaofrectangle(l,b);
  printf("%f",x);
  break;
case 3:
   printf("enter base and height");
   scanf("%f%f",&ba,&h);
   x=areaoftriangle(ba,h);
   printf("%f",x);
   break;
case 4:
   printf("EXIT");
   break;
 }
printf("\ndo you want to continue?(y/n)");
scanf("\n%c",&ch);
}while(ch!='n');
}

float areaofCircle(float r){
  float pi=3.14, area; 
  area=pi*r*r;
  return area;
}

 float areaofrectangle(float l,float b){
   float area;
   area=1*b;
  return area;
}
 float areaoftriangle(float base, float heights){
  float area;
area=0.5*base*heights; 
return area;
}
