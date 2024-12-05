#include<stdio.h>
float area_circle(float);
float area_rectangle(float,float);
float area_triangle(float,float);
int main(){
int choice;
float radius,length,breadth,base,height;
printf("choose a number to calculate its area:\n");
printf("1.circle\n");
printf("2.Rectangle\n");
printf("3.Triangle\n");
printf("enter your choice");
scanf("%d",&choice);
switch(choice){
           case 1:
                printf("enter the radius of circle");
                scanf("%f",&radius);
                printf("The area of circle is : %.2f",area_circle(radius));
                break;
           case 2:
                printf("enter length and breadth of rectangle:");
                scanf("%f %f",&length,&breadth);
                printf("The area of rectangle is:%.2f",area_rectangle(length,breadth));
                break;
           case 3:
                printf("enter base and height of triangle:");
                scanf("%f %f",&base,&height);
                printf("The area of triangle is:%.2f",area_triangle(base,height));
                break;
           default:
                printf("invalid choice");
                break;
}
 return 0;
}
    float area_circle(float radius){
          float area;
          area=3.14*radius*radius;
        return area;
    }
    float area_rectangle(float length, float breadth){
          float area;
          area=length*breadth;
        return area;
      }
    float area_triangle(float base,float height){
          float area;
          area=0.5*base*height;
        return area;
     }
