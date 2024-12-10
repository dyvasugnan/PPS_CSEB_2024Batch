// swaping two numbers
#include<stdio.h>
int swap(int*,int*);
int main(){
int n1,n2;
scanf("%d %d",&n1,&n2);
printf("%d %d\n",n1,n2);
swap(&n1,&n2);
printf("%d %d",n1,n2);
return 0;
}
int swap(int *ptr1,int *ptr2){
int temp;
temp=*(ptr1);
*(ptr1)=*(ptr2);
*(ptr2)=temp;
}
