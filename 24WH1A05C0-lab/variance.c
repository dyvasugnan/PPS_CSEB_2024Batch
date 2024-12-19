#include<stdio.h>
#include<math.h>
int main(){
int size;
printf("Enter the size of the array");
scanf("%d",&size);
int i,data[size];
printf("Enter the elements of array");
for(i=0;i<size;i++){
    scanf("%d",&data[i]);
}
float sum=0.0;
for(int i=0;i<size;i++){
  sum=sum+data[i];
}
float mean,variance,st_deviation,den_var=0;
mean=sum/size;
for(i=0;i<size;i++){
    den_var=den_var+((data[i]-mean)*(data[i]-mean));
}
variance=(den_var)/(size-1);
st_deviation=sqrt(variance);
printf("The mean of the given data is %.2f",mean);
printf("The variance of the given data is %.2f",variance);
printf("The standard deviation of the given data is %.2f",st_deviation);
return 0;
}



