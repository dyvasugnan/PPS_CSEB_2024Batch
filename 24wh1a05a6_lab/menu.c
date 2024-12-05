//menu card
#include<stdio.h>
#include<math.h>
float areaofcircle(float);
float areaofrectangle(float,float);
float areaoftriangle(float,float);
float area;
int main(){
int choice;
float radius,len,breadth,base,height;
printf("area of circle\narea of rectangle\narea of triangle");
printf("enter your choice");
scanf("%d",&choice);
printf("%d\n",choice);
switch(choice){
case 1:areaofcircle(radius);
     printf("the area of circle =%f",area);
     break;
case 2:areaofrectangle(len,breadth);
     printf("the area of rectangle =%f",area);
     break;
case 3:areaoftriangle(base,height);
     break;
     printf("the are of triangle =%f",area);
default:
printf("out of range");
}
return 0;
}
float areaofcircle(float radius){
const float PI=3.14;
printf("enter the radius");
scanf("%f",&radius);
printf("radius:%f",radius);
area=PI*radius*radius;
return area;
}
float areaofrectangle(float len,float breadth){
printf("enter the length and breadth");
scanf("%f%f",&len,&breadth);
printf("length and breadth are %f%f",len,breadth);
area=len*breadth;
return area;
}
float areaoftriangle(float base,float height){
printf("enter the base and height");
scanf("%f%f",&base,&height);
printf("base and height are %f%f",base,height);
area=0.5*base*height;
return area;
}

