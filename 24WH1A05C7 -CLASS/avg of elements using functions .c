#include<stdio.h>
int arraysum(int []);
int main()
{
    int i, a[5] = { 1,2,3,4,5};
    for(i=0;i<5;i++){
    printf("%3d",a[i]);
    }
    int avg = arraysum(a[i]);
    
    printf("\n%d",avg);
    return 0;
}
int arraysum(int []){
int i,sum=0,a[5]={1,2,3,4,5};
for(i=0;i<5;i++){
sum=sum+a[i];
}
int avg=sum/5;
return avg;
}