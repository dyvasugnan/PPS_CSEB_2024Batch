// Write a program for swapping of numbers by functions
#include<stdio.h>
int swap(int*,int*);
int main(){
int n1=56,n2=78;
printf("before swapping \n");
printf("n1=%d n2=%d \n",n1,n2);
printf("addofn1=%d addofn2=%d \n",&n1,&n2);
swap(&n1,&n2);
printf("after swapping \n");
printf("n1=%d n2=%d \n",n1,n2);
return 0;
}
int swap(int*ptr1,int*ptr2){
int temp;
temp=*(ptr1);
*(ptr1)=*(ptr2);
*(ptr2)=temp;
}
