#include<stdio.h>
int sum_array(int[],int);
float avg_array(float,int);
int main(){
    int a[5]={1,2,3,4,5};
    int num=sizeof(a)/sizeof(a[0]);
    int sum =sum_array(a,num);
    float avg = avg_array(sum,num);
    printf("sum : %d\n",sum);
    printf("average : %f\n",avg);
    return 0;
    }
   int sum_array(int a[5],int num){
   int sum =0,i;
   for(i=0;i<num;i++){
      sum=sum+a[i];
}
    return sum;
   }
  float avg_array(float sum,int num){    
   float avg=sum/num;
    return avg;
}

