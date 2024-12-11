// swapping 2 nos using pointers
#include<stdio.h>
int swap(int *ptr1,int *ptr2){
int temp;
temp=*(ptr1);
*(ptr1)=*(ptr2);
*(ptr2)=temp;
}
int main(){
int n1,n2;
printf("enter 2 nos:");
scanf("%d %d",&n1,&n2);
swap(&n1,&n2);
printf("num1=%d and num2=%d",n1,n2);
return 0;
}
