//swapping of numbers using function
#include<stdio.h>
int swapnum(int*,int*);
int main()
{
int a=5,b=6;
printf("before swapping");
printf("a=%d\nb=%d",a,b);
    swapnum(&a,&b);
printf("beforeswapping");
printf("a=%d\nb=%d",a,b);

}
int swapnum(int *ptr1,int*ptr2){
 int temp;
  temp=*(ptr1);
  *(ptr1)=*(ptr2);
  *(ptr2)=temp;
}
