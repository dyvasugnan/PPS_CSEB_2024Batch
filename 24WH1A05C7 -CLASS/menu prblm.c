#include<stdio.h>

int main()
{
int i,n,l,r,b,choice;
float area;
printf("\nmenu");
printf(" \n***** ");
printf("\n1.Area of circle");
printf("\n2.Area of square");
printf("\nenter your choice");
scanf("%d",&choice);
switch(choice){
case 1:
printf("\nArea of circle");

printf("\nenter the r value");
scanf("%d",&r);
area=3.14*r*r;
printf("\n%2f",area);

break;
case 2:
printf("\nArea of square");
printf("\nenter your l value");
scanf("%d",&l);
area=l*l;
printf("\n%f",area);
default :
printf("\nexit from statement");

}
    return 0;
}