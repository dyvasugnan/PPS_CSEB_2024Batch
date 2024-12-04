#include<stdio.h>
float avg_arr(int[],int);
int main(){
    int a[5],i;
    float avg;
    int n=sizeof(a)/sizeof(a[0]);
    printf("Enter array elements:\n");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    avg=avg_arr(a,n);
    printf("Avg of array elements= %.2f\n",avg);
    return 0;
}
float avg_arr(int a[],int n) {
    int i;
    float sum=0,avg;
    for (i=0;i<n;i++){
        sum=sum+a[i];
        avg=sum/n;
    }
    return avg;
}