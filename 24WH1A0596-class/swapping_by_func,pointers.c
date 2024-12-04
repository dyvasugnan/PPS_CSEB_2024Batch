//swapping of two numbers by using pointers and function.
#include<stdio.h>
int swapping(int,int);
int main(){
int number1,number2;
printf("enter values of twonumbers\n:");
scanf("%d %d",&number1,&number2);
swapNum(&number1,&number2);
printf("number1=%d and number2=%d",number1,number2);
return 0;
}
int swapNum(int *ptr1,int *ptr2){
int temp;
temp=*(ptr1);
*(ptr1)=*(ptr2);
*(ptr2)=temp;
}