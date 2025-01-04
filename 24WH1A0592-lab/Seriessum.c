//sum of series 
#include<stdio.h>
#include<math.h>
int main(){
float x,sum=1;
int i;
printf("enter x value: ");
scanf("%f",&x);
for(i=1;i<=3;i++){
sum=sum+pow((-x),i)/(2*i);
}
printf("%f",sum);
return 0;
}
