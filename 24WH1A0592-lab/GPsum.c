//sum of geometric progression
#include<stdio.h>
int main(){
int i, x,n;
printf(" x and n values:\n");
scanf("%d%d",&x,&n);
int sum=1;
for(i=1;i<=n;i++){
sum=sum+pow(x,i);
}
printf("sum os geometric progression is:%d",sum);
return 0;
}
