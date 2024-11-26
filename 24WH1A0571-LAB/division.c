#include<stdio.h>
int main(){
    int number;
    printf("enter any number:");
    scanf("%d",&number);
    if(number%3==0&&number%5==0){
      printf("the number is a multiple of 3 and 5");
}
    else
      printf("the number is not a multiple of 3 and 5");
    return 0;
}
