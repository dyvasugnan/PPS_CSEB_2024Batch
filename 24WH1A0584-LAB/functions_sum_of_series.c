//sum of series in functions//

#include<stdio.h>
float sum_series(int);
int main(){
        int i,n;
        float sum=0;
        printf("enter n value\n");
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            sum=sum+i/sum_series(i);
        }
        printf("sum of series:%f\n",sum);
        return 0;
}
float sum_series(int n){
        int i,fact=1;
        for(i=1;i<=n;i++){
            fact=fact*i;
        }
        return fact;
}  
