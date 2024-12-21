// quadratic roots
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,dis;
    float x1,x2;
    printf("enter a,b,c values\n");
    scanf("%d%d%d",&a,&b,&c);

    dis=b*b-4*a*c;

    if(dis<0)
              printf("roots are imaginary\n");
    else if(dis==0){
                   printf("Roots are real and equal\n");
                   x1=-b/2*a;
                   printf("%.1f %.1f",x1,x1);}
           else{
                   printf("roots are real and disntinct\n");
                   x1=(-b+sqrt(dis))/(2*a);
                   x2=(-b-sqrt(dis))/(2*a);
                   printf("x1=%.1f x2=%.1f\n",x1,x2);}
          return 0;}
