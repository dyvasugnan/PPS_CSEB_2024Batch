#include<stdio.h>
#include<math.h>
int main(){
    float compound_interest,amount,rate,time;
    printf("enter principle amount:");
    scanf("%f",&amount);
    printf("enter rate:");
    scanf("%f",&rate);
    printf("enter time in years:");
    scanf("%f",&time);
  compound_interest=amount * pow(1+rate/100,time);
    printf("compound interest is %f",compound_interest);
    return 0;
}
