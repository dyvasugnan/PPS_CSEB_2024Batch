#include<stdio.h>
 
int natural_no(int);

int main(){

 int num;
  
 scanf("%d",&num);

 natural_no(num);

 return 0;
 
  }
  
int natural_no(int num){

 if(num==1)
  
  return 1;
 
  printf("%d\t",num);

   return natural_no(num-1);

 }
 