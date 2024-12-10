//swapping of two nos using function
#include<stdio.h>
int swaping_of_twonos(int*,int*);
int main(){
    int num1,num2;
    printf("enter any two nos\n");
    scanf("%d%d",&num1,&num2);
    printf("values of nos before swaping \n");
    printf("num1=%d \t num2=%d \n",num1,num2);
    printf("values after swapping\n");
    swaping_of_twonos(&num1,&num2);//call by address
    printf("num1=%d  \t num2=%d",num1,num2);
    return 0;
    }
    int swaping_of_twonos( int *num1,int *num2){
       int temp;
        temp=*(num1);
        *(num1)=*(num2);
        *(num2)=temp;
        
        
    }
    
    