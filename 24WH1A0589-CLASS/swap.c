#include <stdio.h>
void swap(int,int);
int main() {
    int num1,num2;
    printf("Enter two numbers \n");
    scanf("%d %d",&num1,&num2);
    printf("The original numbers are num1=%d , num2=%d\n",num1,num2);
    swap(num1,num2);
    return 0;
}
void swap(int num1,int num2){
    int temp=0;
    temp = num1;
    num1=num2;
    num2=temp;
    printf("The variables swapped are num1=%d,num2= %d",num1,num2);
}
