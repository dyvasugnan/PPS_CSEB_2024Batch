#include<stdio.h>
#include<math.h>
int main(){
int i,num,n,sum=0;
printf("enter the number");
scanf("%d",&num);
printf("enter the number till where series should continue");
scanf("%d",&n);
printf("The sum of given series is:");
for(i=0;i<=n;i++){
   sum=sum+pow(num,i);
 }
printf("%d",sum);
return 0;
}
