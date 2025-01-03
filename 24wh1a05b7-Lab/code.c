//finding x^n using recursion
#include<stdio.h>
#include<math.h>
int power(int,int);
      int main(){
       int x,n;
printf("enter the values\n");
scanf("%d%d",&x,&n);
printf("%d",power(x,n));
return 0;
}
int power(int  x,int n){
if(n==0)
return 1;
int power_n=x*power(x,n-1);
return power_n;
}
