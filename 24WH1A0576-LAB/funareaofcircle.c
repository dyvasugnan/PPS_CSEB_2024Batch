//to find area of circle using functions
#include<stdio.h>
#include<math.h>
#define PI 3.14
float areaofcircle(int r);
int main(){
int r;
printf("enter radius of circle:\n");
scanf("%d",&r);
areaofcircle(r);
return 0;
}
float areaofcircle(int r){
float area;
area=PI*r*r;
printf("area of circle is:%.2f",area);
}
