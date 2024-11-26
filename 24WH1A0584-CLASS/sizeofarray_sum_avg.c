#include<stdio.h>
int main(){
    int i,n,a[]={1,2,3,4,5,6,7,8};
    n=sizeof(a)/sizeof(a[0]);
    float sum=0,avg;
    for(i=0;i<n;i++){
        scanf ("%d",&a[i]);
            sum=sum+a[i];
    }
    avg=sum/n;
    printf("sum=%f\n",sum);
    printf ("avg=%f\n",avg);
    return 0;
}
   
