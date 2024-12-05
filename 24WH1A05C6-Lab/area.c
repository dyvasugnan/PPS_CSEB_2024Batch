//area of planes
#include<stdio.h>
float area_of_rectangle(float,float);
float area_of_circle(float);
float area_of_triangle(float,float);
int main(){
   float l,b,r,ba,h,area;
   int num;
   char ch;
 do{
     printf("Menu\n1.area of rectangle\n2.area of circle\n3.area of triangle\n4.exit\n");
     printf("enter your choice\n");
     scanf("%d",&num);
    
         switch(num){
             case 1:{
                  printf("area of rectangle\n");
                  printf("enter l and b\n");
                  scanf("%f%f",&l,&b);
                  area=area_of_rectangle(l,b);
                  printf("%.2f\n",area);
                  break;}
             case 2:{
                  printf("area of circle\n");
                  printf("enter radius");
                  scanf("%f",&r);
                  area=area_of_circle(r);
                  printf("%.2f\n",area);
                  break;}
             case 3:{
                  printf("area of triangle\n");
                  printf("enter base and height");
                  scanf("%f%f",&ba,&h);
                  area=area_of_triangle(ba,h);
                  printf("%.2f\n",area);
                  break;}
             case 4:{
                  printf("exit\n");
                  break;
                  return 0;}
   
                 }
             printf("do you want to continue ? Y/N\n");
              scanf("\n%c",&ch);}while(ch!='N');
             return 0;}
float area_of_rectangle(float l,float b){
        float area;
        area=l*b;
        return area;}
float area_of_circle(float r){
        float area,pi=3.14;
        area=pi*r*r;
        return area;}
float area_of_triangle(float ba,float h){
        float area;
        area=0.5*ba*h;
        return area;}

        

