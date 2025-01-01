#include<stdio.h>

#include<math.h>

int main(){

     int n,i,max;
     
     int a[20];
     
  printf("enter any number:\n");   
  
  scanf("%d",&n);
  
for(i=0;i<n;i++){

scanf("%d",&a[i]);  

 }
 
 max=a[0];
 
for(i=0;i<n;i++){
 
 if(a[i]>max);
 
   max=a[i];
   
   }
   
printf("maximum value=%d",max);

return 0;

}
