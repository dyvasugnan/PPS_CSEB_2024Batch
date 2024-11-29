#include<stdio.h>                          
#include<math.h>                           
int main()                                 
  {                                        
int i,num=0,n=5;                           
char a[6]={1,0,1,0,0};                     
for(i=0;i<n;i++)                           
{                                          
 if(a[i]==1)                               

   {                                       
   (num=num+pow(2,n-1-i));                 
   }    
}
   printf("%d",num);                       
   return 0;                               
                                       
    }                                      
