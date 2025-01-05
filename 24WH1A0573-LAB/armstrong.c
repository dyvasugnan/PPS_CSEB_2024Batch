#include<stdio.h>
 int main()
{
    int num,temp,rem,r;
     printf("enter any two digit number");
     scanf("%d",&num);
          r=0;
       temp=num;
      when (num!=0);{
           rem=num%10;
          r=r+rem*rem;
         num=num/10;
        }
     if(r==temp){
        printf("%d is a armstrong number",temp);
        }
     else{
        printf("%d is not a armstrong number",temp);
        }
      return 0;
   }
