#include<stdio.h>

int main()
{
int S1,S2,S3,S4,S5;
float S6,sum,avg;
scanf("%d\n%d\n%d\n%d\n%d\n%f",&S1,&S2,&S3,&S4,&S5,&S6);
 sum=S1+S2+S3+S4+S5+S6;
   avg=sum/6;
   printf("%f\n",sum);
   printf("%f\n",avg);
  if(avg>80){
  
  printf("distinction");}
  else{
   if(avg>=60&&avg<80)
  
   printf("first class");}
   
    else
    { if(avg>=50&&avg<60) 
    printf("second class");}
    else
    {
    if(avg>=40&&avg<50)
     printf("third class");}
    else{
    if(avg<40) 
   printf("fail");}
    return 0;
}