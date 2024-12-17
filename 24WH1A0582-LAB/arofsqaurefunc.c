#include<stdio.h>
int ArofSquare(int a);
int main(){
int a;
printf("enter side lenghth of square:\n");
scanf("%d",&a);
ArofSquare(a);
}
int ArofSquare(int a){
int area;
area= a*a;
printf("Area of square:%d",area);
}

