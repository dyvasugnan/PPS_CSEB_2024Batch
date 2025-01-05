#include<stdio.h>
 int square(int);
 int main() {
   int a;
   printf("enter a");
   scanf("%d",&a);
  square(a);
   
    return 0;
}
int square(int a){
 int square;
 square = a*a;
 printf("square of number is %d",square);
return square;
}