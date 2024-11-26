#include<stdio.h>
int main(){
int n1,n2,n3;
printf("enter any 2 numbers, for all calculation outputs:\n");
scanf("%d %d",&n1,&n2);
int *ptr1=&n1;
int *ptr2=&n2;
printf("sum of numbers is:%d\n",*ptr1+*ptr2);
printf("differnce of numbers is:%d\n",*ptr1-*ptr2);
return 0;
}

