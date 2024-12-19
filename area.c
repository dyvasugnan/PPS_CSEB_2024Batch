#include<stdio.h>
#include<math.h>
float circle_area(float rad);
float rectangle_area(float l,float b);
float triangle_area(float B,float H);
int main(){
    float rad;
    printf("enter any value\n");
    scanf("%f",&rad);
    printf("area:%f",circle_area(rad));
    float l,b;
    printf("enter value of l,b\n");
    scanf("%f%f",&l,&b);
    printf("area :%f",rectangle_area(l,b));
    float B,H;
    printf("enter values in base and height\n");
    scanf("%f%f",&H,&B);
    printf("area :%f", triangle_area(B,H));
    return 0;
    }
    float circle_area(float rad){
      return 3.14*rad*rad;
    }
    float rectangle_area(float l,float b){
    return l*b;
    }
    float triangle_area(float B,float H){
    return 0.5*B*H;
    }

