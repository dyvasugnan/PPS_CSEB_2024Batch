#include<stdio.h>
int sum(int[],int);
float average(int[],int);
int main(){
   int array[]={'1','2','3','4','5'};
   int n= sizeof(array)/sizeof(array[0]);
    int result1=sum(array,n);
    printf("sum of array elementsis %d",result1);
    float result2=average(array,n);
    printf("average of array elements is %f",result2);
    return 0;
}
int sum(int ptr[],int n){
    int i, sum=0;
   for(i=0;i<n;i++){
    sum+=ptr[i];
   }
return sum;
}
float average(int ptr[],int n){
    int i,sum=0;
   for(i=0;i<=n;i++){
    sum+=ptr[i];
    
}
return sum/n;
}
