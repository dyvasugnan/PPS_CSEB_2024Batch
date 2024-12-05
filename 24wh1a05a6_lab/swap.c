//swaping of two numbers
#include<stdio.h>
int swap(int*,int*ini);
int main(){
int n1=10,n2=20;
printf("before swaping \n");
printf("n1=%d,n2=%d",n1,n2);
printf("add of n1=%d,add of n2=%d\n",&n1,&n2);
swap(&n1,&n2);
printf("after swaping\n");
printf("n1=%d,n2=%d",n1,n2);
return 0;
}
int swap(int*ptr1,int*ptr2){
int temp;
temp=*(ptr1);
*(ptr1)=*(ptr2);
*(ptr2)=temp;
}
