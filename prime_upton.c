#include<stdio.h>
int main(){
int n,num,count=0;
printf("enter the number till where we should give prime numbers");
scanf("%d",&n);
printf("The prime numbers are:");
for(int i=1;i<=n;i++){
  num=i;
 for(int j=1;j<=num;j++){
     if(num%j==0){
         count++;
        }
    }
 if(count==2){
      printf("%d ",num);
  }
}
return 0;
}
