//menu af areas of different types of shapes
#include<stdio.h>
float area_circle(float,float);
float area_rectangle(float,float);
float area_triangle(float,float);
float area_square(float);
int main(){
    float pi,r,l,br,h,base,s;
    pi=3.14;
    printf("enter all the parameter values\n");
    scanf("%f%f%f%f%f%f",&r,&l,&br,&h,&base,&s);
    int n;
    printf("enter any digit of your choice \n");
    printf("area of different shapes \n");
    printf("click-1=area of circle \n");
    printf("click-2=area of rectangle \n");
    printf("click-3=area of triangle \n");
     printf("click-4=area of square \n");
     scanf("%d",&n);
     float area_c,area_r,area_t,area_s;

     switch(n){
        case 1:
         area_c=area_circle(pi,r);
        printf("%.2f",area_c);
        break;

        case 2:
         area_r=area_rectangle(l,br);
        printf("%.2f",area_r);
        break;

        case 3:
         area_t=area_triangle(base,h);
        printf("%.2f",area_t);
        break;

        case 4:
         area_s=area_square(s);
        printf("%.2f",area_s);
        break;

        default:
        printf("no other shapes");
     }
     return 0;
}
float area_circle(float p,float radius){
    float area1=p*radius*radius;
    return area1;
}
     float area_rectangle(float length,float breadth){
    float area2=length*breadth;
    return area2;
}
float area_triangle(float base,float height){
    float area3=0.5*base*height;
    return area3;
}
float area_square(float  side){
    float area4=side*side;
    return area4;
}
    
    
