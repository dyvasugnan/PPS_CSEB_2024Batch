#include<stdio.h>
int swap(int*,int*);
int main(){
      int num1=10,num2=20;
      printf("before swaping\n");
      printf("num1=%d \nnum=%d",num1,num2);
        swap(&num1,&num2);
         printf("\nafter swaping\n");
         printf("num1=%d \nnum2=%d",num1,num2);
         return 0;
        }
int swap(int *ptr1,int *ptr2){

        int temp=*ptr1;
            *ptr1=*ptr2;
            *ptr2=temp;

}