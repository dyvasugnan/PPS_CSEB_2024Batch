#include<stdio.h>

#include<math.h>

int main(){

     int n,i,sum=0,sum1;
     
     float average,var,SD;
     
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
 
   
printf("sum of array elements=%d\naverage of array elements=%.2f\n",sum, average);

for(i=0;i<n;i++){

    sum1+=pow((a[i]-average),2);
    
  }
  
  var=sum1/n;
  
  SD=sqrt(var);
  
  printf("variance of array elements:%f\n",var);
  
printf("Standard deviation of array elements:%f\n",SD);

return 0;

}
