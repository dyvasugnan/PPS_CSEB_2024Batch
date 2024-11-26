#include<stdio.h>
int main(){
int n,r1,r2,r3,r4;
printf("enter any number:\n");
scanf("%d",&n);
r1=n%10;
printf("%d",r1);
n=n/10;
r2=n%10;
printf("%d",r2);
n=n/10;
r3=n%10;
printf("%d",r3);
r4=n/10;
printf("%d",r4);
return 0;
}
