//quadratic equations
#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,discriminant,root1,root2,root3,imgpart,realpart;
    printf("enter value of a:(first coefficient)\n");
    scanf("%f",&a);
    printf("enter value of b:(second coefficient)\n");
    scanf("%f",&b);
    printf("enter value of c(third coefficient)\n");
    scanf("%f",&c);
    discriminant=(b*b)-(4*a*c);
    if(discriminant>0){
        printf("roots are real and distinct");
        root1=(-b+sqrt(discriminant))/(2*a);
        root2=(-b-sqrt(discriminant))/(2*a);
        printf("Root 1=%f,Root 2=%f",root1,root2);
    }
    else if(discriminant==0){
        printf("roots are equal\n");
        root1=root2=-b/(2*a);
        printf("Root 1 is equal to Root 2 which is:%f",root2);
    }
    else{
        printf("imaginary roots");
    }
    return 0;
}
