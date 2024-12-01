#include<stdio.h>
int sum(int a,int b);
int main(){
    int a;
    int b;
    printf("enter the number");
    scanf("%d",&a);
    printf("enter the second number");
    scanf("%d",&b);
    int s=sum(a,b);
    printf("sum is :%d",s);
    return 0;
}
int sum(int x,int y){
  return x+y;
}
