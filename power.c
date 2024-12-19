#include<stdio.h>
int power(int,int);
int main(){
int num,n;
printf("enter number and its power");
scanf("%d %d",&num,&n);
printf("%d^%d=%d",num,n,power(num,n));
return 0;
}
int power(int num,int n){
if(n==0){
    return 1;
}
else{
   int power_num=num*power(num,(n-1));
      return power_num;
}
}
