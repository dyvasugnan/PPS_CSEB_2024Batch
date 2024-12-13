//swapping using function
#include<stdio.h>
void swap(int,int);
int main(){
int n1=10,n2=5;
printf("before swap:n1=10\nn2=5\n");
swap(n1,n2);
return 0;
}
void swap(int n1,int n2){
int temp;
temp=n1;
n1=n2;
n2=temp;
printf("after swap;n1=%d\nn2=%d\n",n1,n2);
}
