//sum of prime numbers
#include<stdio.h>
int main(){
long long int n,i,j,count=0,sum=0;
printf("enter any number");
scanf("%lld",&n);
  i=2;
do{
  count=0;
  for(j=1;j<=i;j++){
  if(i%j==0)
  count++;
  }
  if(count==2)
  sum=sum+i;
  i++;
}while(i<n);
printf("%lld",sum);
return 0;
}
