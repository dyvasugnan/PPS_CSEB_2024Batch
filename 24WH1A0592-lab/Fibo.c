//Fibonascci series 
#include<stdio.h>
int main(){
int n,a=0,b=1,i,c;
c=a+b;
printf("enter number of terms n:");
scanf("%d",&n);
printf("%d%4d",a,b);
for(i=0;i<n-2;i++){
a=b;
b=c;
c=a+b;
printf("%4d",c);
}
}
