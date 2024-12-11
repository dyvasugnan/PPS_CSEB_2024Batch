 #include<stdio.h>
 #include<math.h>
 float AreaOfCircle(float);
 float AreaOfRectangle(float,float);
 float AreaOfTriangle(float,float);
 float area;
 int main(){
    int choice;
    float radius,len,breadth,base,height;
    
    printf("1. Area of circle\n2.Area pof rectangle\n3. Area of triangle\n");
    printf("Enter your choice :\n");
    scanf("%d",&choice);
    printf("%d\n",choice);
    switch(choice){

     case 1 :
        AreaOfCircle(radius);
    printf("The area of circle = %f",area);
        break;
     case 2:
       AreaOfRectangle(len,breadth);
    printf("Area of rectangle = %f", area);
       break;
   case 3:
      AreaOfTriangle(base,height);
      printf("Area of triangle = %f\n",area);
      break;
    default:
 
        printf("Out of Range");}

 return 0;
 }
 float AreaOfCircle(float radius){
   const float PI=3.14;
    printf("Enter your radius\n");
   
    scanf("%f",&radius);
    printf("radius :%f\n",radius);
     area = PI*pow(radius,2);
    return area;
 }
 float AreaOfRectangle(float len,float breadth){
 printf("Enter len and breadth\n");
    
 scanf("%f %f",&len,&breadth);
 printf("len and breadth are %f %f \n",len,breadth);
  area = len*breadth;


 return area;
 }
 float AreaOfTriangle(float base,float height){
    printf("Enter base and height\n");
    scanf("%f %f",&base,&height);
    printf(" Base and height are %f %f\n",base,height);
     area = 0.5 *base *height;
    return area;
 }