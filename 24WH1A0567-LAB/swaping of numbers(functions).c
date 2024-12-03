#include<stdio.h>
void swap(int,int);

int main () {
int n1,n2;
printf("enter 2 numbers");
scanf("%d%d",&n1,&n2);
printf("%d %d",n1,n2);
swap(n1,n2);
return 0;
}
void swap (int n1,int n2) {
int temp=n1;
n1=n2;
n2=temp;
printf("\n %d %d",n1,n2);
}



