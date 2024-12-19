#include<stdio.h>
int circle_area(int);
int rectangle_area(int,int);
int triangle_area(int,int);
int main(){
   int num;
   int rad=2;
   int len=3,bre=5;
   int  base=4,height =7;
   printf("1:area of circle\n,2:area of rectangle\n,3:area of trangle\n");
   printf("enter any number");
   scanf("%d",&num);
   switch(num){
   case 1:    
     printf("area of circle:%d",circle_area(rad));
   break;
   case 2:
     printf("area of rectangle:%d",rectangle_area(len,bre));
   break;
   case 3:
     printf("area of triangle:%d",triangle_area(base,height));
    break;
 default :
     printf("invalid");
}
   return 0;
  }
int  circle_area(int rad){
   int  area=3.14*rad*rad;
   return area;
 }
int rectangle_area(int len,int bre){
    int area=len*bre;
   return area;
  }  
 int  triangle_area(int base,int height){
   int area= base*height;
  return area;
}

                                                                                                                                                         


