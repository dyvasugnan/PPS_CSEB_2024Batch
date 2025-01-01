#include<stdio.h>

#include<math.h>

int main(){

     int n,i,min;
     
     int a[20];
     
  printf("enter any number:\n");   
  
  scanf("%d",&n);
  
for(i=0;i<n;i++){

scanf("%d",&a[i]);  

 }
 
 min=a[0];
 
for(i=0;i<n;i++){
 
 if(a[i]<min);
 
   min=a[i];
   
   }
   
printf("mininum value=%d",min);

return 0;

}
