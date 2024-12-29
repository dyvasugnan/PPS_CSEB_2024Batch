//Number to roman
#include<stdio.h>
#include<string.h>
int main()
{
   int num[9]={1, 4 ,5, 9, 10,40,50,90,100},i;
   char roman[9][5]={"I","IV","V","IX","X","XL","L","XC","C"};
   int n;
   printf("enter any integer betweeen 1-100");
   scanf("%d",&n);
   if(n>0){
       
      for(i=8;i>=0;i--){
      int d=n/num[i];
      n=n%num[i];
       while(d--)
       printf("%s",roman[i]);
      }
      
   }

    return 0;
}
