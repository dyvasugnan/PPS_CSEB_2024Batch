#include<stdio.h>
void swap(int *,int *);
int main(){
int n1,n2;
printf("Enter the 2 numbers : ");
scanf("%d%d",&n1,&n2);
 swap(&n1,&n2);
 printf("n1=%d n2=%d", n1,n2);
return 0;
}
void swap(int *ptr1,int *ptr2){
 int temp;
 temp=*(ptr1);
 *(ptr1)=*(ptr2);
 *(ptr2)=temp;}