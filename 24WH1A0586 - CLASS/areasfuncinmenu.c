// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
float pi = 3.14;
float areaCir(float);
float areaRec(float,float);
float areaTri(float,float);
int main() {
    int n;
    float r,l,b,h;
    char c;
    do{
        printf("      MENU    \n1.Area Of a Circle\n2.Area Of a Rectangle\n3.Area of a Triangle\n4.EXIT");
    printf("\nEnter your choice:");
    scanf("%d",&n);
    switch(n){
        case 1:
            printf("Enter Radius Of Circle:");
            scanf("%f",&r);
            printf("Area = %f", areaCir(r));
            break;
        case 2:
            printf("Enter length Of Rectangle:");
            scanf("%f",&l);
            printf("Enter Base length Of Rectangle:");
            scanf("%f",&b);
            printf("Area =%f", areaRec(l,b));
            break;
        case 3:
            printf("Enter Base length Of Triangle:");
            scanf("%f",&b);
            printf("Enter height Of Triangle:");
            scanf("%f",&h);
            printf("Area =%f", areaTri(b,h));
            break;
        case 4:
            printf("EXIT");
            break;
        default :
            printf("No such choice is available");
    }
    printf("\nDo you want to continue :");
        scanf(" %c",&c);
    }
    while(c=='y'||c=='Y');
   
    return 0;
}
float areaCir (float r){
     return pi*pow(r,2);

}
float areaRec(float l,float b){

    return l*b ;
}
float areaTri(float b,float h){
    
    return 0.5*b*h;
}
