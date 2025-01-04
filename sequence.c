//lab sequence
#include<stdio.h>
#include<math.h>
int main(){
   int x,num;
   x=3;
  int  sum=0;
   printf("enter any no");
   scanf("%d",&num);
   for(int i=0;i<=num;i++){
      sum=(pow(-1,i))*((pow(x,i)/i))+sum;
	  }
	 printf("%d",sum);
	 return 0;
	 }
