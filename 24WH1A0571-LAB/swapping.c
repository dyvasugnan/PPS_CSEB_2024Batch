#include<stdio.h>
void swapping(int*,int*);
  int main(){
      int a=10,b=20;
      printf("before swapping values are %d and %d",a,b);
      swapping(&a,&b);
      printf("after swapping values are %d and %d",a,b);
      return 0;
}
void swapping(int*ptr1,int*ptr2){
     int temp=*(ptr1);
       *(ptr1)=*ptr2;
       *(ptr2)=temp;
}

