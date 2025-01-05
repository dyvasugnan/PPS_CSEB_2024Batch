#include<stdio.h>
void swap(int ,int );
int main(){
int n1,n2;
printf("Enter the 2 numbers : ");
scanf("%d%d",&n1,&n2);
 swap(n1,n2);
 
return 0;
}
void swap(int n1,int n2){
 int temp;
 temp=n1;
 n1=n2;
 n2=temp;
printf("n1=%d n2=%d", n1,n2);
 }