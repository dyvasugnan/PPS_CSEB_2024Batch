//number is armstrong or not
#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool isArmstrong(int);
int main(){
    int n;
    bool flag;
    printf("enter any number\n");
    scanf("%d",&n);
flag=isArmstrong(n);
   if(flag)
       printf("number is armstrong\n");
   else
        printf("number is not armstrong\n");
     return 0;}
bool isArmstrong(int x){
       int rem,count=0,i,sum=0,temp;
         temp=x;
       while(x!=0){
         x=x/10;
         count++;}
          temp=x;
       while(x!=0){
           rem=x%10;
           sum=+pow(rem,count);
           x=x/10;}
       return (temp==sum);
}
