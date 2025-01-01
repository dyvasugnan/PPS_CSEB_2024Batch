//sum,product,avg of 2 nums using functions
#include <stdio.h>
void sum(int a,int b);
void prod(int a,int b);
void avg(int a,int b);
int main(){
   int a,b;
   printf("enter a:\n");
   scanf("%d",&a);
   printf("enter b:\n");
   scanf("%d",&b);
sum(a,b);
prod(a,b);
avg(a,b);
return 0;
}
void sum(int a,int b){
    printf("sum: %d+%d=%d\n",a,b,a+b);
}
void prod(int a,int b){
    printf("product: %dX%d=%d\n",a,b,a*b);
}
void avg(int a,int b){
    printf("average: %d+%d/2=%d",a,b,(a*b)/2);
}
