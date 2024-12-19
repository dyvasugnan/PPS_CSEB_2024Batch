#include<stdio.h>
#include<math.h>
int main(){
    int size;
     printf("enter the size of array\n");
     scanf("%d",&size);
    int i,data[size];
printf("enter the elements of data\n");
for(i=0;i<size;i++);
scanf("%d",&data[i]);
}
float sum=0.0;
for(int i=0;i<size;i++){
  sum= sum+data[i];
}
float mean,variance,standarad_deviation,deno_var =0;
mean =sum/size;
for(i=0;i<size;i++){
deno_var =deno_var +((data[i]-mean)*(data[i]-mean));
}
variance =(deno_var)/(size-1);
standarad_deviation =sqrt(variance);
printf("the mean of the given data =%.2f",mean);
printf("variance of given data =%.2f",variance);
printf("standard devi  of given data=%.2f",standard_deviation);
 return 0;
}
