//finding given number is happy number or not
#include<stdio.h>

int main(){

      int num,rem,sum=0,temp;
      
      printf("enter any number:\n");
      
      scanf("%d",&num);
      
      temp=num;
   
   while(num>0){
    
         rem=num%10;
         sum=sum+(rem*rem);
         num=num/10;
    
    if(num==0 && sum>9){
    
    
       num=sum;
       
      sum=0;
      
      
      }  
   
     }
     if(sum==1
     )
       
         printf("%d is a happy number",temp);
         
      else 
       
         printf("%d is not a happy number",temp);
         
         
         
         return 0;
         
       }     