#include<stdio.h>

#include<math.h>

int main(){

     int n,i,sum=0;
     
     float average;
     
     int a[20];
     
  printf("enter any number:\n");   
  
  scanf("%d",&n);
  
for(i=0;i<n;i++){

scanf("%d",&a[i]);  

 }
 
 for(i=0;i<n;i++){
 
    sum+=a[i];
   
   } 
   
   average=sum/n;
 
   
printf("sum of array elements=%d\n average of array elements=%.2f",sum, average);

return 0;

}
