//To find x^n
#include<stdio.h>
#include<math.h>
int main(){
int x,n,result;
printf("enter x,n values:\n");
scanf("%d%d",&x,&n);
result =pow(x,n);
printf("result is: %d",result);
return 0;
}
