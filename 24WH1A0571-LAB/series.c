#include<stdio.h>
#include<math.h>
 int main(){
    int number,power,i,sum=0,num;
    printf("enter number:");
    scanf("%d",&number);
    printf("enter power:");
    scanf("%d",&power);
   for(i=0;i<=power;i++){
     num=pow(number,i);
      sum+=num;
    }
  printf("result is %d",sum);
  return 0;
}
      
